#include <iostream>
#include <mlpack/core.hpp>
#include <mlpack/methods/linear_regression/linear_regression.hpp>

int main() {
    // ---- LOAD CSV DATA ----
    arma::mat dataset;
    mlpack::data::Load("california_housing.csv", dataset, true); // true = transpose

    // ---- SPLIT FEATURES AND TARGET ----
    // Last row is target (y), rest are features (X)
    arma::mat X = dataset.rows(0, dataset.n_rows - 2);  // all rows except last
    arma::rowvec y = dataset.row(dataset.n_rows - 1);   // last row is target

    // ---- TRAIN / TEST SPLIT (60/40 like your Python code) ----
    int train_size = (int)(X.n_cols * 0.6);

    arma::mat X_train = X.cols(0, train_size - 1);
    arma::mat X_test  = X.cols(train_size, X.n_cols - 1);
    arma::rowvec y_train = y.cols(0, train_size - 1);
    arma::rowvec y_test  = y.cols(train_size, y.n_cols - 1);

    // ---- STANDARD SCALING ----
    arma::vec mean = arma::mean(X_train, 1);   // mean of each feature
    arma::vec stddev = arma::stddev(X_train, 0, 1); // std of each feature

    // Apply scaling
    X_train.each_col() -= mean;
    X_train.each_col() /= stddev;
    X_test.each_col() -= mean;   // use TRAIN mean/std on test!
    X_test.each_col() /= stddev;

    // ---- TRAIN MODEL ----
    mlpack::regression::LinearRegression model(X_train, y_train);

    // ---- PREDICT ----
    arma::rowvec predictions;
    model.Predict(X_test, predictions);

    // ---- CALCULATE MAPE ----
    arma::rowvec errors = arma::abs(y_test - predictions) / y_test * 100;
    double mape = arma::mean(errors);

    std::cout << "MAPE: " << mape << "%" << std::endl;

    return 0;
}