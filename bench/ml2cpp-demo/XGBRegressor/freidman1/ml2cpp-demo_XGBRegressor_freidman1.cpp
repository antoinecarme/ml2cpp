// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : XGBRegressor
// Dataset : freidman1

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_XGBRegressor_freidman1.exe ml2cpp-demo_XGBRegressor_freidman1.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace XGB_Tree_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {5.20409441 }} ,
				{ 3 ,  {2.17387152 }} ,
				{ 4 ,  {3.85627294 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_1 < 0.44577229 ) ? ( ( Feature_3 < 0.337229729 ) ? ( 3 ) : ( 4 ) ) : ( 2 );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_0
	

	namespace XGB_Tree_1 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {1.41071427 }} ,
				{ 4 ,  {2.42714262 }} ,
				{ 5 ,  {2.11307049 }} ,
				{ 6 ,  {3.89251494 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_1 < 0.227462053 ) ? ( ( Feature_4 < 0.48272559 ) ? ( 3 ) : ( 4 ) ) : ( ( Feature_3 < 0.275402367 ) ? ( 5 ) : ( 6 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_1
	

	namespace XGB_Tree_2 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {1.24433184 }} ,
				{ 4 ,  {3.06391406 }} ,
				{ 5 ,  {1.32978749 }} ,
				{ 6 ,  {2.33954167 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_0 < 0.318555892 ) ? ( 1 ) : ( ( Feature_3 < 0.550355673 ) ? ( ( Feature_1 < 0.424497068 ) ? ( 5 ) : ( 6 ) ) : ( 4 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_2
	

	namespace XGB_Tree_3 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {0.613173842 }} ,
				{ 4 ,  {1.48825288 }} ,
				{ 5 ,  {1.14802098 }} ,
				{ 7 ,  {1.71889293 }} ,
				{ 8 ,  {2.53091908 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_3 < 0.494956493 ) ? ( ( Feature_4 < 0.450501919 ) ? ( 3 ) : ( 4 ) ) : ( ( Feature_1 < 0.270813882 ) ? ( 5 ) : ( ( Feature_3 < 0.753896236 ) ? ( 7 ) : ( 8 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_3
	

	namespace XGB_Tree_4 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {0.408731848 }} ,
				{ 3 ,  {0.596439838 }} ,
				{ 5 ,  {1.24134743 }} ,
				{ 6 ,  {1.91035748 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_0 < 0.292197764 ) ? ( 1 ) : ( ( Feature_1 < 0.178881794 ) ? ( 3 ) : ( ( Feature_3 < 0.751403809 ) ? ( 5 ) : ( 6 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_4
	

	namespace XGB_Tree_5 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {1.25488043 }} ,
				{ 3 ,  {1.14702761 }} ,
				{ 5 ,  {0.22036989 }} ,
				{ 6 ,  {0.928107023 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_4 < 0.626042485 ) ? ( ( Feature_2 < 0.191144228 ) ? ( 3 ) : ( ( Feature_2 < 0.791962981 ) ? ( 5 ) : ( 6 ) ) ) : ( 2 );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_5
	

	namespace XGB_Tree_6 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.154334188 }} ,
				{ 4 ,  {0.469956517 }} ,
				{ 5 ,  {0.242951527 }} ,
				{ 7 ,  {0.504113853 }} ,
				{ 8 ,  {1.02353692 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_3 < 0.425807238 ) ? ( ( Feature_4 < 0.436961949 ) ? ( 3 ) : ( 4 ) ) : ( ( Feature_0 < 0.263883412 ) ? ( 5 ) : ( ( Feature_6 < 0.383191764 ) ? ( 7 ) : ( 8 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_6
	

	namespace XGB_Tree_7 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.185849145 }} ,
				{ 5 ,  {0.520060599 }} ,
				{ 6 ,  {0.804469526 }} ,
				{ 7 ,  {0.269506752 }} ,
				{ 8 ,  {0.703605831 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_1 < 0.594910204 ) ? ( ( Feature_3 < 0.275402367 ) ? ( 3 ) : ( ( Feature_3 < 0.795114219 ) ? ( 7 ) : ( 8 ) ) ) : ( ( Feature_4 < 0.433508635 ) ? ( 5 ) : ( 6 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_7
	

	namespace XGB_Tree_8 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {0.61849004 }} ,
				{ 3 ,  {0.558182001 }} ,
				{ 5 ,  {-0.151840106 }} ,
				{ 6 ,  {0.211264536 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_3 < 0.774380207 ) ? ( ( Feature_2 < 0.119792461 ) ? ( 3 ) : ( ( Feature_0 < 0.394444406 ) ? ( 5 ) : ( 6 ) ) ) : ( 2 );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_8
	

	namespace XGB_Tree_9 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {0.610841274 }} ,
				{ 5 ,  {0.223776102 }} ,
				{ 6 ,  {0.552578449 }} ,
				{ 7 ,  {-0.304640472 }} ,
				{ 8 ,  {0.0979367197 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_2 < 0.868725479 ) ? ( ( Feature_2 < 0.245000884 ) ? ( ( Feature_0 < 0.604981184 ) ? ( 5 ) : ( 6 ) ) : ( ( Feature_3 < 0.28035754 ) ? ( 7 ) : ( 8 ) ) ) : ( 2 );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_9
	

	namespace XGB_Tree_10 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {0.401917726 }} ,
				{ 5 ,  {-0.18514359 }} ,
				{ 6 ,  {0.133646309 }} ,
				{ 7 ,  {0.42468372 }} ,
				{ 8 ,  {0.0741623789 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_4 < 0.705635369 ) ? ( ( Feature_1 < 0.374738008 ) ? ( ( Feature_2 < 0.622945905 ) ? ( 5 ) : ( 6 ) ) : ( ( Feature_2 < 0.191144228 ) ? ( 7 ) : ( 8 ) ) ) : ( 2 );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_10
	

	namespace XGB_Tree_11 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {0.333456516 }} ,
				{ 3 ,  {0.242667362 }} ,
				{ 5 ,  {-0.254993021 }} ,
				{ 6 ,  {0.0346417092 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_2 < 0.791962981 ) ? ( ( Feature_2 < 0.191144228 ) ? ( 3 ) : ( ( Feature_3 < 0.299128771 ) ? ( 5 ) : ( 6 ) ) ) : ( 2 );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_11
	

	namespace XGB_Tree_12 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {0.0781900436 }} ,
				{ 4 ,  {-0.240867764 }} ,
				{ 7 ,  {-0.146877274 }} ,
				{ 8 ,  {0.109450921 }} ,
				{ 9 ,  {0.117463887 }} ,
				{ 10 ,  {0.472460806 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_0 < 0.386205196 ) ? ( ( Feature_8 < 0.538075686 ) ? ( 3 ) : ( 4 ) ) : ( ( Feature_1 < 0.297900081 ) ? ( ( Feature_2 < 0.495598555 ) ? ( 7 ) : ( 8 ) ) : ( ( Feature_5 < 0.696181178 ) ? ( 9 ) : ( 10 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_12
	

	namespace XGB_Tree_13 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.177886814 }} ,
				{ 5 ,  {0.0569376349 }} ,
				{ 6 ,  {0.346652687 }} ,
				{ 7 ,  {-0.103671327 }} ,
				{ 8 ,  {0.0884396434 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_4 < 0.674897075 ) ? ( ( Feature_7 < 0.109224856 ) ? ( 3 ) : ( ( Feature_3 < 0.195833787 ) ? ( 7 ) : ( 8 ) ) ) : ( ( Feature_3 < 0.555954814 ) ? ( 5 ) : ( 6 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_13
	

	namespace XGB_Tree_14 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {0.216289103 }} ,
				{ 3 ,  {0.204798773 }} ,
				{ 5 ,  {0.0191522799 }} ,
				{ 6 ,  {-0.125294894 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_2 < 0.868725479 ) ? ( ( Feature_2 < 0.08179041 ) ? ( 3 ) : ( ( Feature_5 < 0.739893854 ) ? ( 5 ) : ( 6 ) ) ) : ( 2 );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_14
	

	namespace XGB_Tree_15 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 4 ,  {0.0655611604 }} ,
				{ 6 ,  {0.259908646 }} ,
				{ 7 ,  {-0.232347324 }} ,
				{ 8 ,  {-0.0291054845 }} ,
				{ 9 ,  {-0.113413215 }} ,
				{ 10 ,  {0.116505913 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( Feature_4 < 0.435257792 ) ? ( ( Feature_7 < 0.522663116 ) ? ( ( Feature_2 < 0.421828806 ) ? ( 7 ) : ( 8 ) ) : ( 4 ) ) : ( ( Feature_5 < 0.832000732 ) ? ( ( Feature_6 < 0.495003045 ) ? ( 9 ) : ( 10 ) ) : ( 6 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_15
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		std::vector<tTable> lTreeScores = { 
			XGB_Tree_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_1::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_2::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_3::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_4::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_5::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_6::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_7::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_8::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_9::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_10::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_11::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_12::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_13::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_14::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			XGB_Tree_15::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9)
		};

		tTable lAggregatedTable = aggregate_xgb_scores(lTreeScores, {"Estimator"});


		tTable lTable;

		std::any  lEstimator = lAggregatedTable["Estimator"][0] + 0.5;
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/freidman1.csv");
	return 0;
}
