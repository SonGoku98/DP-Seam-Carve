#include "Seam_Carve.hpp"
#include "Energy_Val.hpp"
#include "Find_Seam.hpp"
#include "add_seam.hpp"
void add_pixels(Mat &op)
{
    Mat eimage;
    GET_ENERGY(op, eimage);
    vector<int> path;
    FIND_SEAM(eimage, path);
    Mat new_image(op.rows, op.cols, CV_8UC3);
    ADD_SEAM(op, new_image, path);
    op = new_image;
}
