// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : RidgeClassifier
// Dataset : BreastCancer

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_RidgeClassifier_BreastCancer.exe ml2cpp-demo_RidgeClassifier_BreastCancer.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1 };

		return lClasses;
	}

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_0", "Score_1",
			"Proba_0", "Proba_1",
			"LogProba_0", "LogProba_1",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
		auto lClasses = get_classes();


		tTable lTable;

		lTable["Score"] = { 
			-( 0.3481289648013367 * Feature_0 + -0.00019049312134782214 * Feature_1 + -0.011829563238194247 * Feature_2 + -0.0019817875031754853 * Feature_3 + -0.2614953027129268 * Feature_4 + 0.004912774423725522 * Feature_5 + -0.40747276019043827 * Feature_6 + -0.6126947604989182 * Feature_7 + -0.36060101260978716 * Feature_8 + -0.02277350159679707 * Feature_9 + -0.5333078368063987 * Feature_10 + -0.01476402711722617 * Feature_11 + -0.045089451710677034 * Feature_12 + 0.003630193517487048 * Feature_13 + -0.07425585608860244 * Feature_14 + 0.23441085504329226 * Feature_15 + 0.5936443937673082 * Feature_16 + -0.03345766831868692 * Feature_17 + -0.062030214333679945 * Feature_18 + 0.027702348323478034 * Feature_19 + -0.5366176243401973 * Feature_20 + -0.01618045236992493 * Feature_21 + 0.019894175953266778 * Feature_22 + 0.0021505178090013514 * Feature_23 + -0.6078534264497735 * Feature_24 + -0.2744273802086528 * Feature_25 + -0.49528474671126527 * Feature_26 + -1.0108561471720003 * Feature_27 + -0.7961251536941891 * Feature_28 + -0.14106930314367855 * Feature_29 + 3.8598202520707994 ),
			0.3481289648013367 * Feature_0 + -0.00019049312134782214 * Feature_1 + -0.011829563238194247 * Feature_2 + -0.0019817875031754853 * Feature_3 + -0.2614953027129268 * Feature_4 + 0.004912774423725522 * Feature_5 + -0.40747276019043827 * Feature_6 + -0.6126947604989182 * Feature_7 + -0.36060101260978716 * Feature_8 + -0.02277350159679707 * Feature_9 + -0.5333078368063987 * Feature_10 + -0.01476402711722617 * Feature_11 + -0.045089451710677034 * Feature_12 + 0.003630193517487048 * Feature_13 + -0.07425585608860244 * Feature_14 + 0.23441085504329226 * Feature_15 + 0.5936443937673082 * Feature_16 + -0.03345766831868692 * Feature_17 + -0.062030214333679945 * Feature_18 + 0.027702348323478034 * Feature_19 + -0.5366176243401973 * Feature_20 + -0.01618045236992493 * Feature_21 + 0.019894175953266778 * Feature_22 + 0.0021505178090013514 * Feature_23 + -0.6078534264497735 * Feature_24 + -0.2744273802086528 * Feature_25 + -0.49528474671126527 * Feature_26 + -1.0108561471720003 * Feature_27 + -0.7961251536941891 * Feature_28 + -0.14106930314367855 * Feature_29 + 3.8598202520707994 
		} ;
		lTable["Proba"] = { 
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
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/BreastCancer.csv");
	return 0;
}
