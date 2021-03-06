// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SGDClassifier
// Dataset : BreastCancer

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SGDClassifier_BreastCancer.exe ml2cpp-demo_SGDClassifier_BreastCancer.cpp

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
			-( 1512.9732978449306 * Feature_0 + 1390.2077788271567 * Feature_1 + 8078.251910363034 * Feature_2 + 2150.038636558744 * Feature_3 + 8.733854211384802 * Feature_4 + -27.499484845883003 * Feature_5 + -54.81351068944764 * Feature_6 + -23.645710483386253 * Feature_7 + 16.34137546149216 * Feature_8 + 8.333592341375391 * Feature_9 + -8.724049111359136 * Feature_10 + 44.14965227097084 * Feature_11 + -251.17433673907408 * Feature_12 + -4492.085515583352 * Feature_13 + 0.35561045762856675 * Feature_14 + -6.087536704730813 * Feature_15 + -8.116255344723948 * Feature_16 + -2.0743547694685245 * Feature_17 + -0.09162960418993694 * Feature_18 + -0.23668047565896863 * Feature_19 + 1583.5502704559128 * Feature_20 + 1559.8437365845127 * Feature_21 + 7432.742337082494 * Feature_22 + -3522.022838499137 * Feature_23 + 9.35161414956623 * Feature_24 + -91.07511805615115 * Feature_25 + -129.93685026186924 * Feature_26 + -36.758701382329875 * Feature_27 + 11.845496694427686 * Feature_28 + 3.2113763200823606 * Feature_29 + 1371.962388631081 ),
			1512.9732978449306 * Feature_0 + 1390.2077788271567 * Feature_1 + 8078.251910363034 * Feature_2 + 2150.038636558744 * Feature_3 + 8.733854211384802 * Feature_4 + -27.499484845883003 * Feature_5 + -54.81351068944764 * Feature_6 + -23.645710483386253 * Feature_7 + 16.34137546149216 * Feature_8 + 8.333592341375391 * Feature_9 + -8.724049111359136 * Feature_10 + 44.14965227097084 * Feature_11 + -251.17433673907408 * Feature_12 + -4492.085515583352 * Feature_13 + 0.35561045762856675 * Feature_14 + -6.087536704730813 * Feature_15 + -8.116255344723948 * Feature_16 + -2.0743547694685245 * Feature_17 + -0.09162960418993694 * Feature_18 + -0.23668047565896863 * Feature_19 + 1583.5502704559128 * Feature_20 + 1559.8437365845127 * Feature_21 + 7432.742337082494 * Feature_22 + -3522.022838499137 * Feature_23 + 9.35161414956623 * Feature_24 + -91.07511805615115 * Feature_25 + -129.93685026186924 * Feature_26 + -36.758701382329875 * Feature_27 + 11.845496694427686 * Feature_28 + 3.2113763200823606 * Feature_29 + 1371.962388631081 
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
