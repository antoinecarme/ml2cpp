// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : RidgeClassifier
// Dataset : iris_date_tgt

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_RidgeClassifier_iris_date_tgt.exe ml2cpp-demo_RidgeClassifier_iris_date_tgt.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 1789-07-14T00:00:00.000000000, 1789-08-14T00:00:00.000000000, 1789-09-14T00:00:00.000000000 };

		return lClasses;
	}

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_1789-07-14T00:00:00.000000000", "Score_1789-08-14T00:00:00.000000000", "Score_1789-09-14T00:00:00.000000000",
			"Proba_1789-07-14T00:00:00.000000000", "Proba_1789-08-14T00:00:00.000000000", "Proba_1789-09-14T00:00:00.000000000",
			"LogProba_1789-07-14T00:00:00.000000000", "LogProba_1789-08-14T00:00:00.000000000", "LogProba_1789-09-14T00:00:00.000000000",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		auto lClasses = get_classes();

		std::any score_0 = 0.11081550417931088 * Feature_0 + 0.4700420671473018 * Feature_1 + -0.45894298312908094 * Feature_2 + -0.08246579103297763 * Feature_3 + -0.5936546308983127;

		std::any score_1 = 0.06318044097041486 * Feature_0 + -0.886016219740647 * Feature_1 + 0.3093103964857559 * Feature_2 + -0.8033306171140115 * Feature_3 + 1.803222037617395;

		std::any score_2 = -0.17399594514973002 * Feature_0 + 0.4159741525933483 * Feature_1 + 0.14963258664332763 * Feature_2 + 0.8857964081469879 * Feature_3 + -2.209567406719075;


		tTable lTable;

		lTable["Score"] = { 
			score_0,
			score_1,
			score_2 
		} ;
		lTable["Proba"] = { 
			std::any(),
			std::any(),
			std::any() 
		} ;
		int lBestClass = get_arg_max( lTable["Score"] );
		auto lDecision = lClasses[lBestClass];
		lTable["Decision"] = { lDecision } ;
		lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };

		recompute_log_probas( lTable );

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/iris_date_tgt.csv");
	return 0;
}
