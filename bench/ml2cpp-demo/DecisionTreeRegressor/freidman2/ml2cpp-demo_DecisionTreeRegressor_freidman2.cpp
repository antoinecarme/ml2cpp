// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : DecisionTreeRegressor
// Dataset : freidman2

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_DecisionTreeRegressor_freidman2.exe ml2cpp-demo_DecisionTreeRegressor_freidman2.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	typedef std::vector<double> tNodeData;
	std::map<int, tNodeData> Decision_Tree_Node_data = {
			{ 6 ,  {42.01839185 }} ,
			{ 7 ,  {45.71113412 }} ,
			{ 8 ,  {17.5126316 }} ,
			{ 11 ,  {38.41875351 }} ,
			{ 13 ,  {60.17684929 }} ,
			{ 15 ,  {66.46875936 }} ,
			{ 16 ,  {67.61473198 }} ,
			{ 18 ,  {89.81697753 }} ,
			{ 20 ,  {74.13416807 }} ,
			{ 21 ,  {81.61991679 }} ,
			{ 25 ,  {174.68142017 }} ,
			{ 26 ,  {168.83377965 }} ,
			{ 27 ,  {154.50461473 }} ,
			{ 29 ,  {251.33228306 }} ,
			{ 32 ,  {205.37013415 }} ,
			{ 33 ,  {212.83015826 }} ,
			{ 34 ,  {222.6809715 }} ,
			{ 40 ,  {112.36813458 }} ,
			{ 42 ,  {131.74760526 }} ,
			{ 43 ,  {123.98006476 }} ,
			{ 44 ,  {43.13717196 }} ,
			{ 45 ,  {210.24199264 }} ,
			{ 47 ,  {469.13995216 }} ,
			{ 51 ,  {217.90641985 }} ,
			{ 52 ,  {238.91298805 }} ,
			{ 53 ,  {287.26242769 }} ,
			{ 55 ,  {297.00533496 }} ,
			{ 57 ,  {310.5792773 }} ,
			{ 60 ,  {331.03594313 }} ,
			{ 61 ,  {337.38826236 }} ,
			{ 62 ,  {345.51744456 }} ,
			{ 64 ,  {520.61172947 }} ,
			{ 67 ,  {692.1009437 }} ,
			{ 68 ,  {707.74797907 }} ,
			{ 69 ,  {816.81265916 }} ,
			{ 75 ,  {96.00340237 }} ,
			{ 76 ,  {129.17022248 }} ,
			{ 80 ,  {193.36881075 }} ,
			{ 81 ,  {192.59288742 }} ,
			{ 82 ,  {184.81176238 }} ,
			{ 83 ,  {241.12137081 }} ,
			{ 86 ,  {304.56729485 }} ,
			{ 88 ,  {340.89432548 }} ,
			{ 89 ,  {367.2164339 }} ,
			{ 90 ,  {242.64398564 }} ,
			{ 94 ,  {419.36346749 }} ,
			{ 95 ,  {456.84183869 }} ,
			{ 99 ,  {501.63259526 }} ,
			{ 100 ,  {543.10577247 }} ,
			{ 102 ,  {616.90506534 }} ,
			{ 104 ,  {565.71521017 }} ,
			{ 105 ,  {577.34865081 }} ,
			{ 106 ,  {670.13118584 }} ,
			{ 110 ,  {760.21824104 }} ,
			{ 111 ,  {762.12754055 }} ,
			{ 112 ,  {753.58663382 }} ,
			{ 113 ,  {557.42418185 }} ,
			{ 120 ,  {630.47308595 }} ,
			{ 121 ,  {651.51242251 }} ,
			{ 122 ,  {680.96114859 }} ,
			{ 124 ,  {695.99180066 }} ,
			{ 125 ,  {737.40865774 }} ,
			{ 127 ,  {784.59125862 }} ,
			{ 128 ,  {859.39726521 }} ,
			{ 133 ,  {921.14633043 }} ,
			{ 135 ,  {936.08984202 }} ,
			{ 136 ,  {936.66449274 }} ,
			{ 137 ,  {897.11075364 }} ,
			{ 139 ,  {964.56286917 }} ,
			{ 140 ,  {991.65423222 }} ,
			{ 142 ,  {1054.16277579 }} ,
			{ 143 ,  {1161.77589816 }} ,
			{ 147 ,  {954.01675074 }} ,
			{ 148 ,  {1006.94766003 }} ,
			{ 150 ,  {1072.70246576 }} ,
			{ 151 ,  {1066.49672809 }} ,
			{ 155 ,  {1344.28572632 }} ,
			{ 156 ,  {1299.75326814 }} ,
			{ 157 ,  {1450.4501203 }} ,
			{ 158 ,  {1185.2623187 }} 
	};
	

	int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		int lNodeIndex = (Feature_2 <= 0.5361224710941315) ? ( (Feature_2 <= 0.2454954981803894) ? ( (Feature_2 <= 0.1157732792198658) ? ( (Feature_2 <= 0.041584232822060585) ? ( (Feature_1 <= 1445.2074584960938) ? ( (Feature_0 <= 39.70485877990723) ? ( 6 ) : ( 7 ) ) : ( 8 ) ) : ( (Feature_1 <= 730.0179748535156) ? ( (Feature_0 <= 28.79713726043701) ? ( 11 ) : ( (Feature_3 <= 2.6836572885513306) ? ( 13 ) : ( (Feature_1 <= 434.27894592285156) ? ( 15 ) : ( 16 ) ) ) ) : ( (Feature_1 <= 1173.6154479980469) ? ( 18 ) : ( (Feature_3 <= 4.160592079162598) ? ( 20 ) : ( 21 ) ) ) ) ) : ( (Feature_1 <= 904.9034729003906) ? ( (Feature_2 <= 0.22980211675167084) ? ( (Feature_1 <= 765.2993469238281) ? ( 25 ) : ( 26 ) ) : ( 27 ) ) : ( (Feature_0 <= 28.485989093780518) ? ( 29 ) : ( (Feature_3 <= 4.4665937423706055) ? ( (Feature_1 <= 1310.6217956542969) ? ( 32 ) : ( 33 ) ) : ( 34 ) ) ) ) ) : ( (Feature_1 <= 1455.501708984375) ? ( (Feature_1 <= 505.9144287109375) ? ( (Feature_1 <= 384.3021240234375) ? ( (Feature_3 <= 9.283036708831787) ? ( (Feature_2 <= 0.43169064819812775) ? ( 40 ) : ( (Feature_1 <= 268.46046447753906) ? ( 42 ) : ( 43 ) ) ) : ( 44 ) ) : ( 45 ) ) : ( (Feature_0 <= 4.229164123535156) ? ( 47 ) : ( (Feature_1 <= 846.92822265625) ? ( (Feature_2 <= 0.4206588417291641) ? ( (Feature_2 <= 0.3052070587873459) ? ( 51 ) : ( 52 ) ) : ( 53 ) ) : ( (Feature_1 <= 956.167724609375) ? ( 55 ) : ( (Feature_2 <= 0.25638625025749207) ? ( 57 ) : ( (Feature_3 <= 6.27841854095459) ? ( (Feature_1 <= 1265.6083374023438) ? ( 60 ) : ( 61 ) ) : ( 62 ) ) ) ) ) ) ) : ( (Feature_2 <= 0.36327823996543884) ? ( 64 ) : ( (Feature_1 <= 1665.9483032226562) ? ( (Feature_2 <= 0.4223918914794922) ? ( 67 ) : ( 68 ) ) : ( 69 ) ) ) ) ) : ( (Feature_1 <= 967.7061157226562) ? ( (Feature_1 <= 541.9518432617188) ? ( (Feature_1 <= 329.4079284667969) ? ( (Feature_1 <= 195.00569915771484) ? ( (Feature_2 <= 0.6791774034500122) ? ( 75 ) : ( 76 ) ) : ( (Feature_2 <= 0.862852156162262) ? ( (Feature_3 <= 5.188283920288086) ? ( (Feature_1 <= 256.30464935302734) ? ( 80 ) : ( 81 ) ) : ( 82 ) ) : ( 83 ) ) ) : ( (Feature_0 <= 64.47386932373047) ? ( (Feature_1 <= 360.9476013183594) ? ( 86 ) : ( (Feature_0 <= 32.780710220336914) ? ( 88 ) : ( 89 ) ) ) : ( 90 ) ) ) : ( (Feature_2 <= 0.792053759098053) ? ( (Feature_1 <= 745.0648193359375) ? ( (Feature_2 <= 0.7017911672592163) ? ( 94 ) : ( 95 ) ) : ( (Feature_2 <= 0.7272883057594299) ? ( (Feature_2 <= 0.6139316260814667) ? ( (Feature_3 <= 9.924248695373535) ? ( 99 ) : ( 100 ) ) : ( (Feature_2 <= 0.6584039926528931) ? ( 102 ) : ( (Feature_2 <= 0.6879751682281494) ? ( 104 ) : ( 105 ) ) ) ) : ( 106 ) ) ) : ( (Feature_2 <= 0.960829108953476) ? ( (Feature_1 <= 914.8431701660156) ? ( (Feature_3 <= 9.277203559875488) ? ( 110 ) : ( 111 ) ) : ( 112 ) ) : ( 113 ) ) ) ) : ( (Feature_2 <= 0.8147956430912018) ? ( (Feature_1 <= 1191.3021240234375) ? ( (Feature_2 <= 0.73157599568367) ? ( (Feature_0 <= 43.44005489349365) ? ( (Feature_1 <= 1161.6082153320312) ? ( (Feature_3 <= 6.57288384437561) ? ( 120 ) : ( 121 ) ) : ( 122 ) ) : ( (Feature_0 <= 61.12663650512695) ? ( 124 ) : ( 125 ) ) ) : ( (Feature_2 <= 0.7579420804977417) ? ( 127 ) : ( 128 ) ) ) : ( (Feature_3 <= 5.738802194595337) ? ( (Feature_2 <= 0.749254047870636) ? ( (Feature_0 <= 57.488473892211914) ? ( (Feature_0 <= 40.40676498413086) ? ( 133 ) : ( (Feature_2 <= 0.6571033298969269) ? ( 135 ) : ( 136 ) ) ) : ( 137 ) ) : ( (Feature_1 <= 1258.8309326171875) ? ( 139 ) : ( 140 ) ) ) : ( (Feature_2 <= 0.6714194118976593) ? ( 142 ) : ( 143 ) ) ) ) : ( (Feature_1 <= 1218.5750732421875) ? ( (Feature_1 <= 1066.5789794921875) ? ( (Feature_0 <= 55.96738243103027) ? ( 147 ) : ( 148 ) ) : ( (Feature_0 <= 57.58443641662598) ? ( 150 ) : ( 151 ) ) ) : ( (Feature_0 <= 84.44675064086914) ? ( (Feature_3 <= 10.500863552093506) ? ( (Feature_0 <= 61.99332237243652) ? ( 155 ) : ( 156 ) ) : ( 157 ) ) : ( 158 ) ) ) ) );
	
		return lNodeIndex;
	}
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);

		std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];


		tTable lTable;

		std::any  lEstimator = lNodeValue [ 0 ];
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/freidman2.csv");
	return 0;
}
