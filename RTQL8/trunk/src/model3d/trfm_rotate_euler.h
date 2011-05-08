#ifndef SRC_MODEL3D_TRFM_ROTATE_EULER_H
#define SRC_MODEL3D_TRFM_ROTATE_EULER_H

#include "transformation.h"
#include <cassert>
using namespace std;

namespace model3d {
  // rotate about x axis
  class TrfmRotateEulerX: public Transformation {
  public:
    TrfmRotateEulerX(Dof *x, char *_name=NULL);

    Matrix4d getInvTransform();
	
    void applyGLTransform(Renderer::OpenGLRenderInterface* RI);
    void evalTransform();
    Matrix4d getDeriv(Dof *q);
    Matrix4d getDeriv2(Dof *q1, Dof *q2);
  };

  // rotate about y axis
  class TrfmRotateEulerY: public Transformation {
  public:
    TrfmRotateEulerY(Dof *y, char *_name=NULL);

    Matrix4d getInvTransform();
	
    void applyGLTransform(Renderer::OpenGLRenderInterface* RI);
    void evalTransform();
    Matrix4d getDeriv(Dof *q);
    Matrix4d getDeriv2(Dof *q1, Dof *q2);
  };


// rotate about z axis
  class TrfmRotateEulerZ: public Transformation {
  public:
    TrfmRotateEulerZ(Dof *z, char *_name=NULL);

    Matrix4d getInvTransform();
	
    void applyGLTransform(Renderer::OpenGLRenderInterface* RI);
    void evalTransform();
    Matrix4d getDeriv(Dof *q);
    Matrix4d getDeriv2(Dof *q1, Dof *q2);
  };
} // namespace model3d

#endif // #ifndef SRC_MODEL3D_ROTATE_EULER_H

