/*
  RTQL8, Copyright (c) 2011 Georgia Tech Graphics Lab
  All rights reserved.

  Author	Sumit Jain
  Date		07/24/2011
*/
#ifndef MAYAEXPORTS_MAYAEXPORTMOTION_H
#define MAYAEXPORTS_MAYAEXPORTMOTION_H

#include <fstream>

namespace model3d{
    class BodyNode;
    class Skeleton;
    class FileInfoDof;
}

namespace mayaexports{

    class MayaExportMotion{
    private:
        model3d::FileInfoDof *mDofData;;
        model3d::Skeleton *mSkel;
        bool exportMayaAnimSegment(std::ofstream &outFile0, int _first, int _last, model3d::BodyNode *b, const std::string &_nodesPrefix, int _writeNumNodes, int level);
        // just write everything in common framework
        bool exportMayaAnimSegment2(std::ofstream &outFile0, int _first, int _last, model3d::BodyNode *_b, const std::string &_nodesPrefix, int _writeNumNodes, int level);
    public:
        MayaExportMotion(model3d::Skeleton *_skel, model3d::FileInfoDof *_dofData){
            mSkel = _skel;
            mDofData = _dofData;
        }
        bool exportMayaAnim( const char* _fName, int _start, int _end, const std::string &_nodesPrefix, int _writeNumNodes );
    };
}   // namespace mayaexports

#endif //MAYAEXPORTS_MAYAEXPORTMOTION_H