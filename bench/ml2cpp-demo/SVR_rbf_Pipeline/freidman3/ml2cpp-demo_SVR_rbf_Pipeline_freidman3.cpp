// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVR_rbf_Pipeline
// Dataset : freidman3

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVR_rbf_Pipeline_freidman3.exe ml2cpp-demo_SVR_rbf_Pipeline_freidman3.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace imputer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
	
			tTable lTable;
	
			lTable["imputer_output_2"] = { ((Feature_0 == std::any()) ?  ( 43.79128122207401 ) : ( Feature_0)) };
			lTable["imputer_output_3"] = { ((Feature_1 == std::any()) ?  ( 945.9672833084396 ) : ( Feature_1)) };
			lTable["imputer_output_4"] = { ((Feature_2 == std::any()) ?  ( 0.5310009099975209 ) : ( Feature_2)) };
			lTable["imputer_output_5"] = { ((Feature_3 == std::any()) ?  ( 6.139967152050499 ) : ( Feature_3)) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace imputer
	

	namespace scaler {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any imputer_output_2, std::any imputer_output_3, std::any imputer_output_4, std::any imputer_output_5) {
	
			tTable lTable;
	
			lTable["scaler_output_2"] = { ( ( imputer_output_2 - 43.79128122207401 ) / 26.03562357622511 ) };
			lTable["scaler_output_3"] = { ( ( imputer_output_3 - 945.9672833084396 ) / 461.4552766146446 ) };
			lTable["scaler_output_4"] = { ( ( imputer_output_4 - 0.5310009099975209 ) / 0.2901863282144786 ) };
			lTable["scaler_output_5"] = { ( ( imputer_output_5 - 6.139967152050499 ) / 3.072917242564058 ) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("imputer_output_2")[0], iTable.at("imputer_output_3")[0], iTable.at("imputer_output_4")[0], iTable.at("imputer_output_5")[0]);
	
			return lTable;
		}
	
	} // eof namespace scaler
	

	namespace model {
	
		std::vector<std::any> lProblem_data_dual = { 
		 -0.1 , 0.015690742716216118 , -0.1 , -0.1 , -0.1 , -0.1 , -0.1 , -0.1 , 0.1 , 0.05121780964295927 , 0.07364595657631978 , 0.024736031070834306 , -0.1 , 0.05949934114309548 , 0.05537893511005572 , -0.004687879171872128 , 0.017032729957288825 , 0.1 , 0.1 , -0.0413691239039433 , -0.1 , 0.05212346839888433 , 0.1 , -0.1 , 0.03855789895714909 , 0.08725769154384161 , 0.1 , 0.07091639795917096 ,};
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv = { 
		 { -0.12862954071664834, -0.855762437264239, -1.6966276928077146, -0.5082762490187378 },
		 { 0.1883228378676173, 1.5565712024611758, -0.7565916122656656, -0.4905250260509675 },
		 { -0.21286186615867886, -1.7554500325668299, 0.40296624747161036, -1.2888423126888915 },
		 { 0.26229505103186884, -1.156436226701534, -1.469826707772466, -1.0591196409203139 },
		 { 2.1576338377007738, -1.5960266405607315, 0.8932409458054494, -1.4115808580223888 },
		 { 0.7344011353085581, -1.0612795690667527, -1.6427206707260704, 1.2838987122205305 },
		 { -0.18528042847112391, 0.4699482106570824, -1.7832778948365522, 0.2085342932233457 },
		 { -1.1306530181901988, 1.693815859594952, -1.8098491932723488, -0.8531150536577624 },
		 { -1.468587753657723, 0.7062658577112757, -0.9158552800517019, -1.2834679369913997 },
		 { -0.1349195295380887, -1.2563536013919576, 1.6047772375274936, -1.4588678661050256 },
		 { -1.677429392157608, -0.836641293061437, 1.6009951386266825, 0.7288109585406721 },
		 { -1.3038701382176308, 1.5082277717144996, 0.6083460261972142, -0.0497929633220157 },
		 { 2.0227140301827005, 0.09590994147659597, -1.1988837577428815, -1.6290287341379313 },
		 { -0.17541648253457842, 1.157357979471062, 1.5460776435053638, 1.5614840452774303 },
		 { -0.5031732278135369, 0.679095067810605, -0.9279147679691655, -0.08886958441441088 },
		 { 1.3233525794634255, -0.5091503888631336, -1.072924105292282, 1.1341411732514546 },
		 { -0.008171275924262379, 1.5559548187720833, -0.3993737228327069, -0.9940891152017115 },
		 { -0.026701854468432252, -0.028542073748357124, -0.7442367085789723, 0.1618427895801297 },
		 { -1.3530021564771337, 0.47937339709127175, -1.0882400181353251, 1.4264179411454836 },
		 { 1.2560974505775302, -1.5734959921280032, 0.806979259164098, 0.18593850041668145 },
		 { -0.08482514143628933, -1.1068716787463535, -1.4854147384149081, -1.1904103710707925 },
		 { -1.6763217237163097, -1.4763345216405568, -0.11470085787237269, 0.8503538460077694 },
		 { -1.6242802893869952, -1.775508653244122, -0.6568131609880984, 1.1953045443253554 },
		 { -1.0669924080933233, -0.7524462900242421, -1.628861728957462, 1.2775885380398857 },
		 { 1.766853106149782, 0.9687584624669229, 1.0938510756852322, 1.0444684650769975 },
		 { 1.3152118563668307, 0.18747648187700344, 1.5208796066082104, -1.597675604172523 },
		 { 0.16718440174526195, -0.4007044787483432, -0.770256515182922, -1.6235051493651826 },
		 { -0.923065553671842, -1.460057588221313, -0.28039707608225506, -1.3915237626329608 },
		};
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
			std::vector<std::any> inputs = { scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5 };
	
			std::any lDotProduct = rbf_kernel( lProblem_data_dual, lProblem_data_sv, inputs, 0.2499999999999999 ) + 1.3225338689954016;
	
	
			tTable lTable;
	
			std::any  lEstimator = lDotProduct;
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0]);
	
			return lTable;
		}
	
	} // eof namespace model
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		tTable lTable_imputer = imputer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3);

		tTable lTable_scaler = scaler::compute_model_outputs_from_table( lTable_imputer );

		tTable lTable_model = model::compute_model_outputs_from_table( lTable_scaler );


		tTable lTable;

		std::any  lEstimator = lTable_model[ "Estimator" ][0];
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/freidman3.csv");
	return 0;
}
