// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : DecisionTreeClassifier
// Dataset : iris

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_DecisionTreeClassifier_iris.exe ml2cpp-demo_DecisionTreeClassifier_iris.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1, 2 };

		return lClasses;
	}

	typedef std::vector<double> tNodeData;
	std::map<int, tNodeData> Decision_Tree_Node_data = {
			{ 1 ,  {1.0, 0.0, 0.0 }} ,
			{ 4 ,  {0.0, 1.0, 0.0 }} ,
			{ 6 ,  {0.0, 0.0, 1.0 }} ,
			{ 7 ,  {0.0, 1.0, 0.0 }} ,
			{ 11 ,  {0.0, 0.0, 1.0 }} ,
			{ 12 ,  {0.0, 1.0, 0.0 }} ,
			{ 13 ,  {0.0, 0.0, 1.0 }} ,
			{ 14 ,  {0.0, 0.0, 1.0 }} 
	};
	

	int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		int lNodeIndex = (Feature_3 <= 0.800000011920929) ? ( 1 ) : ( (Feature_2 <= 4.8500001430511475) ? ( (Feature_3 <= 1.6500000357627869) ? ( 4 ) : ( (Feature_1 <= 3.100000023841858) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_3 <= 1.75) ? ( (Feature_2 <= 5.049999952316284) ? ( (Feature_1 <= 2.350000023841858) ? ( 11 ) : ( 12 ) ) : ( 13 ) ) : ( 14 ) ) );
	
		return lNodeIndex;
	}
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_0", "Score_1", "Score_2",
			"Proba_0", "Proba_1", "Proba_2",
			"LogProba_0", "LogProba_1", "LogProba_2",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		auto lClasses = get_classes();

		int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);

		std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];


		tTable lTable;

		lTable["Score"] = { 
			std::any(),
			std::any(),
			std::any() 
		} ;
		lTable["Proba"] = { 
			lNodeValue [ 0 ],
			lNodeValue [ 1 ],
			lNodeValue [ 2 ] 
		} ;
		int lBestClass = get_arg_max( lTable["Proba"] );
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
	score_csv_file("outputs/ml2cpp-demo/datasets/iris.csv");
	return 0;
}
