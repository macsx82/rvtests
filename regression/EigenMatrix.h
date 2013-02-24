#ifndef _EIGENMATRIX_H_
#define _EIGENMATRIX_H_

#include "Eigen/Core"
/**
 * This class is just a wrapper to Eigen::MatrixXf to speed compling up
 */
struct EigenMatrix{
  Eigen::MatrixXf mat;
};
#endif /* _EIGENMATRIX_H_ */
