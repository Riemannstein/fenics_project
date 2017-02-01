#include <dolfin.h>
#include <iostream>

using namespace dolfin;

int main(){
	Mesh mesh;
	// Create a mesh using MeshEditor
	MeshEditor editor;
	editor.open(mesh, 2, 2);
	editor.init_vertices(4);
	
	editor.init_cells(2);
	editor.add_vertex(0, 0.0, 0.0);
	editor.add_vertex(1, 1.0, 0.0);
	editor.add_vertex(2, 1.0, 1.0);
	editor.add_vertex(3, 0.0, 1.0);
	editor.add_cell(0, 0, 1, 2);
	editor.add_cell(1, 0, 2, 3);
	editor.close();
	
	// Print the number of vertices of the mesh created
	std::cout << mesh.num_vertices() << std::endl;
	
	//// Create a MeshEntity object w.r.t mesh of dimension 0 of number 1
	//// and print it
	//MeshEntity entity(mesh,0,1);
	//std::cout << entity.index() << std::endl;
	
	
	
	// Test if this cpp file compiles
	std::cout << "Hello World!"<< std::endl;
	return 0;
}
