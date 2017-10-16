#ifndef FileParser_H_
#define FileParser_H_

class Data;

class FileParser {
public:
	FileParser();
	void createTestData(Data& data);
	void read(const std::string& filepath, Data& data);

private:
	int attDistance(double node1[2], double node2[2]);
	void buildDataFromNodes(std::vector<std::vector<double>>& nodes, std::function<int(double[], double[])> dist, Data& data);
	void buildDataFromEdges(std::vector<std::vector<double>>& edges, Data& data);
	int euclidianDistance2D(double node1[2], double node2[2]);
	int geoDistance(double node1[2], double node2[2]);
	int nint(double x);
	void readLowDiagEdges2D(std::ifstream& infile, std::vector<std::vector<double>>& edges);
	void readNodes2D(std::ifstream& infile, std::vector<std::vector<double>>& nodes);
	void readSpecification(std::ifstream& infile, std::unordered_map<std::string, std::string>& spec);
};

#endif  // FileParser_H_
