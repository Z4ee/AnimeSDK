#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/XftWeapon/XWeaponTrail_eAddForceType.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }
namespace XftWeapon { class Spline; }
namespace XftWeapon { class VertexPool; }
namespace XftWeapon { class XWeaponTrail_ControlPointLinkedNode; }
namespace XftWeapon { class XWeaponTrail_Element; }
namespace XftWeapon { class XWeaponTrail_ElementPool; }

#define XFTWEAPON_XWEAPONTRAIL_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1D56C710)
#define XFTWEAPON_XWEAPONTRAIL_ADDFORCEDISWEIGHTMINMESHDISLIMITSHOWIF_OFFSET UNITYSDK_OFFSET(0x1D577F50)
#define XFTWEAPON_XWEAPONTRAIL_AFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1D577E90)
#define XFTWEAPON_XWEAPONTRAIL_APPLYATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1D573860)
#define XFTWEAPON_XWEAPONTRAIL_BEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1D577E10)
#define XFTWEAPON_XWEAPONTRAIL_BSPLINEBONESHAPERECORDPOINTS_OFFSET UNITYSDK_OFFSET(0x1D57E970)
#define XFTWEAPON_XWEAPONTRAIL_BSPLINEBONESHAPERECORDSNAPSHOTELEMDATA_OFFSET UNITYSDK_OFFSET(0x1D57ED20)
#define XFTWEAPON_XWEAPONTRAIL_BSPLINEFORDFSPOINTS_OFFSET UNITYSDK_OFFSET(0x1D580270)
#define XFTWEAPON_XWEAPONTRAIL_BSPLINEREMOVEPOOLLASTPOINT_OFFSET UNITYSDK_OFFSET(0x1D580150)
#define XFTWEAPON_XWEAPONTRAIL_BUILDBSPLINECUSTOMSHAPERATELIST_OFFSET UNITYSDK_OFFSET(0x1D573F20)
#define XFTWEAPON_XWEAPONTRAIL_BUILDCONTROLLINKEDNODE_ADDHEADPOINT_OFFSET UNITYSDK_OFFSET(0x1D575D20)
#define XFTWEAPON_XWEAPONTRAIL_BUILDCONTROLLINKEDNODE_DFS_OFFSET UNITYSDK_OFFSET(0x1D577080)
#define XFTWEAPON_XWEAPONTRAIL_BUILDCONTROLLINKEDNODE_OFFSET UNITYSDK_OFFSET(0x1D574860)
#define XFTWEAPON_XWEAPONTRAIL_BUILDCONTROLLINKEDNODE_SPAWNNEWPOINT_OFFSET UNITYSDK_OFFSET(0x1D576490)
#define XFTWEAPON_XWEAPONTRAIL_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1D56C690)
#define XFTWEAPON_XWEAPONTRAIL_ENSUREBSPLINECUSTOMSHAPETRANSFORMLISTPOSCACHE_OFFSET UNITYSDK_OFFSET(0x1D57B040)
#define XFTWEAPON_XWEAPONTRAIL_GETMESHRENDER_OFFSET UNITYSDK_OFFSET(0x1D57DB00)
#define XFTWEAPON_XWEAPONTRAIL_GET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x1D57D7D0)
#define XFTWEAPON_XWEAPONTRAIL_GET_BSPLINEBONESHAPE_OFFSET UNITYSDK_OFFSET(0x1D573F00)
#define XFTWEAPON_XWEAPONTRAIL_GET_BSPLINECUSTOMSHAPE_OFFSET UNITYSDK_OFFSET(0x1D5776D0)
#define XFTWEAPON_XWEAPONTRAIL_GET_CURFRAMEISSTOPFRAME_OFFSET UNITYSDK_OFFSET(0x1D580920)
#define XFTWEAPON_XWEAPONTRAIL_GET_CURHEADPOS_OFFSET UNITYSDK_OFFSET(0x1D57D7E0)
#define XFTWEAPON_XWEAPONTRAIL_GET_DYNAMICMESHPOINTLENGTH_OFFSET UNITYSDK_OFFSET(0x1D570F00)
#define XFTWEAPON_XWEAPONTRAIL_GET_NEEDCALCMESHPERPOINTDIS_OFFSET UNITYSDK_OFFSET(0x1D577F20)
#define XFTWEAPON_XWEAPONTRAIL_GET_NEEDRECORDINITPOS_OFFSET UNITYSDK_OFFSET(0x1D57E950)
#define XFTWEAPON_XWEAPONTRAIL_GET_TRAILWIDTH_OFFSET UNITYSDK_OFFSET(0x1D57D8A0)
#define XFTWEAPON_XWEAPONTRAIL_GET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1D5796F0)
#define XFTWEAPON_XWEAPONTRAIL_GET_UPDATE_CONTROLPOINT_FULL_MODE_OFFSET UNITYSDK_OFFSET(0x1D574830)
#define XFTWEAPON_XWEAPONTRAIL_GET_USEJOBOPT_OFFSET UNITYSDK_OFFSET(0x1D5781E0)
#define XFTWEAPON_XWEAPONTRAIL_GOSTART_OFFSET UNITYSDK_OFFSET(0x1D57E8D0)
#define XFTWEAPON_XWEAPONTRAIL_GRAPHICSSETTINGSHOWIF_OFFSET UNITYSDK_OFFSET(0x1D577F10)
#define XFTWEAPON_XWEAPONTRAIL_HASAPPLIEDBYFORCE_OFFSET UNITYSDK_OFFSET(0x1D577F40)
#define XFTWEAPON_XWEAPONTRAIL_INITDATACO_OFFSET UNITYSDK_OFFSET(0x1D57DAA0)
#define XFTWEAPON_XWEAPONTRAIL_INITMESHOBJ_OFFSET UNITYSDK_OFFSET(0x1D57D980)
#define XFTWEAPON_XWEAPONTRAIL_INITORIGINALELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D578580)
#define XFTWEAPON_XWEAPONTRAIL_INITSPLINE_OFFSET UNITYSDK_OFFSET(0x1D5787B0)
#define XFTWEAPON_XWEAPONTRAIL_INIT_OFFSET UNITYSDK_OFFSET(0x1D56B850)
#define XFTWEAPON_XWEAPONTRAIL_MYPOSTRENDER_OFFSET UNITYSDK_OFFSET(0x1D57CFC0)
#define XFTWEAPON_XWEAPONTRAIL_MYPRERENDER_OFFSET UNITYSDK_OFFSET(0x1D57E610)
#define XFTWEAPON_XWEAPONTRAIL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D57E830)
#define XFTWEAPON_XWEAPONTRAIL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D57D450)
#define XFTWEAPON_XWEAPONTRAIL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D57D150)
#define XFTWEAPON_XWEAPONTRAIL_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1D57D770)
#define XFTWEAPON_XWEAPONTRAIL_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1D57D7A0)
#define XFTWEAPON_XWEAPONTRAIL_ONMATERIALVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D580B60)
#define XFTWEAPON_XWEAPONTRAIL_ONMAXFRAMEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D580B50)
#define XFTWEAPON_XWEAPONTRAIL_ONPOINTENDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D580BB0)
#define XFTWEAPON_XWEAPONTRAIL_ONPOINTSTARTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D580BA0)
#define XFTWEAPON_XWEAPONTRAIL_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1D57D4E0)
#define XFTWEAPON_XWEAPONTRAIL_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1D57D1E0)
#define XFTWEAPON_XWEAPONTRAIL_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D57DEB0)
#define XFTWEAPON_XWEAPONTRAIL_RECORDCURELEM_OFFSET UNITYSDK_OFFSET(0x1D579710)
#define XFTWEAPON_XWEAPONTRAIL_REFRESHSPLINE_OFFSET UNITYSDK_OFFSET(0x1D57A4F0)
#define XFTWEAPON_XWEAPONTRAIL_RESETVERTEXTDATA_OFFSET UNITYSDK_OFFSET(0x1D5793D0)
#define XFTWEAPON_XWEAPONTRAIL_SET_NEEDRECORDINITPOS_OFFSET UNITYSDK_OFFSET(0x1D57E960)
#define XFTWEAPON_XWEAPONTRAIL_SIMULATE_CALCULATE_OFFSET UNITYSDK_OFFSET(0x1D57B370)
#define XFTWEAPON_XWEAPONTRAIL_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1D57E3A0)
#define XFTWEAPON_XWEAPONTRAIL_SIMULATE_RECORDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D578240)
#define XFTWEAPON_XWEAPONTRAIL_SIMULATE_SENDDATATORENDERER_OFFSET UNITYSDK_OFFSET(0x1D57CFA0)
#define XFTWEAPON_XWEAPONTRAIL_SPAWNNEWPOINT_OFFSET UNITYSDK_OFFSET(0x1D57EEC0)
#define XFTWEAPON_XWEAPONTRAIL_START_OFFSET UNITYSDK_OFFSET(0x1D57E850)
#define XFTWEAPON_XWEAPONTRAIL_STOPSMOOTHLY_OFFSET UNITYSDK_OFFSET(0x1D56C770)
#define XFTWEAPON_XWEAPONTRAIL_UPDATEADDFORCEMESHWEIGHTAVECACHE_OFFSET UNITYSDK_OFFSET(0x1D577F60)
#define XFTWEAPON_XWEAPONTRAIL_UPDATEFADE_OFFSET UNITYSDK_OFFSET(0x1D57AF80)
#define XFTWEAPON_XWEAPONTRAIL_UPDATEHEADELEM_OFFSET UNITYSDK_OFFSET(0x1D579430)
#define XFTWEAPON_XWEAPONTRAIL_UPDATEINDICES_DYNAMICVERSION_GCOPT_OFFSET UNITYSDK_OFFSET(0x1D577B00)
#define XFTWEAPON_XWEAPONTRAIL_UPDATEINDICES_DYNAMICVERSION_OFFSET UNITYSDK_OFFSET(0x1D5760C0)
#define XFTWEAPON_XWEAPONTRAIL_UPDATEINDICES_GCOPT_OFFSET UNITYSDK_OFFSET(0x1D5776F0)
#define XFTWEAPON_XWEAPONTRAIL_UPDATEINDICES_OFFSET UNITYSDK_OFFSET(0x1D5790D0)
#define XFTWEAPON_XWEAPONTRAIL_UPDATEVERTEX_OFFSET UNITYSDK_OFFSET(0x1D57B3C0)
#define XFTWEAPON_XWEAPONTRAIL_VECTOREQUAL_OFFSET UNITYSDK_OFFSET(0x1D580930)
#define XFTWEAPON_XWEAPONTRAIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D580BD0)
#define XFTWEAPON_XWEAPONTRAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D56B4B0)

namespace XftWeapon
{
	inline static constexpr unsigned int XWeaponTrail_TypeDefinitionIndex = 39304;

	class XWeaponTrail : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Version()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(XWeaponTrail_TypeDefinitionIndex)->GetStaticField(0x2AEC0);
		}
		static ::System::Single* StaticGet_EPS()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(XWeaponTrail_TypeDefinitionIndex)->GetStaticField(0x98A0);
		}
		static ::System::Boolean* StaticGet_UseGCOpt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(XWeaponTrail_TypeDefinitionIndex)->GetStaticField(0x98A4);
		}
		static ::System::Boolean* StaticGet_bSplineUseToArray()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(XWeaponTrail_TypeDefinitionIndex)->GetStaticField(0x98A5);
		}
		static ::System::Boolean* StaticGet_USE_JOB_SWITCH()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(XWeaponTrail_TypeDefinitionIndex)->GetStaticField(0x98A6);
		}
		// static const ::System::String* XWEAPON_MESH_RENDERER_PROXY_GO_NAME; // 0x0
		::System::Collections::Generic::LinkedList_1<::XftWeapon::XWeaponTrail_ControlPointLinkedNode*>* m_arrControlLinkedNode; // 0x18
		::System::Collections::Generic::LinkedList_1<::XftWeapon::XWeaponTrail_ControlPointLinkedNode*>* m_arrShortLinkedNode; // 0x20
		::System::Boolean uv1ScaledByDis; // 0x28
		::System::Single uv1ScaledRate; // 0x2C
		::System::Boolean useUV2; // 0x30
		::System::Boolean uv2ScaledByDis; // 0x31
		::System::Single uv2ScaledRate; // 0x34
		::System::Collections::Generic::List_1<::System::Single>* m_arrPointPreDis; // 0x38
		::XftWeapon::XWeaponTrail_eAddForceType addForceType; // 0x40
		::UnityEngine::Vector3 addForceValue; // 0x44
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_arrPointForcePosOffset; // 0x50
		::System::Single addForceDisWeightMinMeshDisLimit; // 0x58
		::System::Int32 addForceMeshWeightAveCacheCnt; // 0x5C
		::System::Collections::Generic::List_1<::System::Single>* m_arrAddForceMeshWeightAveCache; // 0x60
		::System::Boolean removeTailKeyOpt; // 0x68
		::System::Single removeTailKeyMoveMaxSpeed; // 0x6C
		::System::Single removeTailKeyMoveMinSpeed; // 0x70
		::System::Single removeTailKeyMeshMinLen; // 0x74
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_arrBSplineCustomShapeTransformListPosCache; // 0x78
		::System::Boolean UseWith2D; // 0x80
		::System::Boolean UseWithSRP; // 0x81
		::System::String* SortingLayerName; // 0x88
		::System::Int32 SortingOrder; // 0x90
		::UnityEngine::Transform* PointStart; // 0x98
		::UnityEngine::Transform* PointEnd; // 0xA0
		::System::Int32 MaxFrame; // 0xA8
		::System::Int32 Granularity; // 0xAC
		::System::Single Fps; // 0xB0
		::UnityEngine::Color MyColor; // 0xB4
		::UnityEngine::Material* MyMaterial; // 0xC8
		::System::Boolean UseBSpline; // 0xD0
		::System::Boolean ForceUseBSpline; // 0xD1
		::System::Int32 SamplePrecition; // 0xD4
		::System::Single bSplinePointMaxDis; // 0xD8
		::System::Single bSplinePointMinDis; // 0xDC
		::System::Int32 bSplineMinSamplePoint; // 0xE0
		::System::Int32 bSplineDFSMaxDep; // 0xE4
		::System::Boolean updateControlPointFullMode; // 0xE8
		::UnityEngine::MeshFilter* thisNodeMF; // 0xF0
		::UnityEngine::MeshFilter* copyFromNodeMF; // 0xF8
		::System::Boolean bSplineUseDisAverageOpt; // 0x100
		::System::Int32 bSplineSplitCnt; // 0x104
		::System::Single bSplineSegMaxLen; // 0x108
		::System::Boolean bSplineCustomShape; // 0x10C
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* bSplineCustomShapeTransformList; // 0x110
		::System::Boolean bSplineCustomShapeByBone; // 0x118
		::System::Collections::Generic::List_1<::System::String*>* bSplineCustomShapeBonePathList; // 0x120
		::System::String* bSplineCustomShapeBoneMidPointName; // 0x128
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* bSplineCustomShapeBoneOffsetList; // 0x130
		::System::Single mTrailWidth; // 0x138
		::XftWeapon::XWeaponTrail_Element* mHeadElem; // 0x140
		::System::Collections::Generic::List_1<::XftWeapon::XWeaponTrail_Element*>* mSnapshotList; // 0x148
		::XftWeapon::XWeaponTrail_ElementPool* mElemPool; // 0x150
		::XftWeapon::Spline* mSpline; // 0x158
		::System::Single mFadeT; // 0x160
		::System::Boolean mIsFading; // 0x164
		::System::Single mFadeTime; // 0x168
		::System::Single mElapsedTime; // 0x16C
		::System::Single mFadeElapsedime; // 0x170
		::UnityEngine::GameObject* mMeshObj; // 0x178
		::XftWeapon::VertexPool* mVertexPool; // 0x180
		::System::Boolean mInited; // 0x188
		::System::Boolean mActivated; // 0x189
		::System::Boolean needInitDataThisFrame; // 0x18A
		::System::Boolean isStart; // 0x18B
		::System::Single m_fBSplinePointMinDisSqr; // 0x18C
		::System::Single m_fBSplinePointMaxDisSqr; // 0x190
		::System::Single m_fLastBSplineRate; // 0x194
		::UnityEngine::Vector3 m_stLastBSplinePointPos; // 0x198
		::System::Int32 m_iBSplineMaxPointCnt; // 0x1A4
		::System::Collections::Generic::List_1<::System::Single>* m_arrBSplineCustomShapeRateList; // 0x1A8
		::System::Int32 m_iBSplineSplitCnt; // 0x1B0
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* m_arrBSplineCustomShapeTransformList; // 0x1B8
		::UnityEngine::Transform* m_stBSplineBoneShapeMidTran; // 0x1C0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_arrBoneShapePointsCache; // 0x1C8
		::System::Boolean _NeedRecordInitPos_k__BackingField; // 0x1D0
		::System::Collections::Generic::Stack_1<::UnityEngine::Vector3>* _bSplineDFSVertCacheStack; // 0x1D8
		::System::Collections::Generic::Stack_1<::UnityEngine::Color>* _bSplineDFSColorCacheStack; // 0x1E0
		::System::Collections::Generic::Stack_1<::UnityEngine::Vector2>* _bSplineDFSUVCacheStack; // 0x1E8
		::System::Boolean m_bCurFrameIsStopFrame; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL__CCTOR_OFFSET))();
		}

		::System::Boolean ApplyAttachPoint(::UnityEngine::Transform* root)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_APPLYATTACHPOINT_OFFSET))(this, root);
		}

		::System::Void BuildBSplineCustomShapeRateList(::System::Boolean inJob)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_BUILDBSPLINECUSTOMSHAPERATELIST_OFFSET))(this, inJob);
		}

		::System::Boolean get_UPDATE_CONTROLPOINT_FULL_MODE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GET_UPDATE_CONTROLPOINT_FULL_MODE_OFFSET))(this);
		}

		::System::Void BuildControlLinkedNode(::System::Boolean inJob)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_BUILDCONTROLLINKEDNODE_OFFSET))(this, inJob);
		}

		::System::Void BuildControlLinkedNode_AddHeadPoint(::System::Int32 lID, ::System::Int32 rID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_BUILDCONTROLLINKEDNODE_ADDHEADPOINT_OFFSET))(this, lID, rID);
		}

		::System::Void BuildControlLinkedNode_DFS(::XftWeapon::XWeaponTrail_ControlPointLinkedNode* pool, ::System::Single LRate, ::System::Single RRate, ::System::Single LUVSegment, ::System::Single RUVSegment, ::UnityEngine::Vector3 LPos, ::UnityEngine::Vector3 RPos, ::System::Int32 dep, ::System::Boolean needRemoveLastPoint)
		{
			return ((::System::Void(*)(::PVOID, ::XftWeapon::XWeaponTrail_ControlPointLinkedNode*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_BUILDCONTROLLINKEDNODE_DFS_OFFSET))(this, pool, LRate, RRate, LUVSegment, RUVSegment, LPos, RPos, dep, needRemoveLastPoint);
		}

		::UnityEngine::Vector3 BuildControlLinkedNode_SpawnNewPoint(::XftWeapon::XWeaponTrail_ControlPointLinkedNode* pool, ::System::Single uvSegment, ::System::Single fadeT)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::XftWeapon::XWeaponTrail_ControlPointLinkedNode*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_BUILDCONTROLLINKEDNODE_SPAWNNEWPOINT_OFFSET))(this, pool, uvSegment, fadeT);
		}

		::System::Void UpdateIndices_GCOpt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_UPDATEINDICES_GCOPT_OFFSET))(this);
		}

		::System::Void UpdateIndices_DynamicVersion_GCOpt(::System::Int32 pointCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_UPDATEINDICES_DYNAMICVERSION_GCOPT_OFFSET))(this, pointCnt);
		}

		::System::Void BeforeUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_BEFOREUPDATE_OFFSET))(this);
		}

		::System::Void AfterUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_AFTERUPDATE_OFFSET))(this);
		}

		::System::Boolean GraphicsSettingShowIf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GRAPHICSSETTINGSHOWIF_OFFSET))(this);
		}

		::System::Boolean get_NeedCalcMeshPerPointDis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GET_NEEDCALCMESHPERPOINTDIS_OFFSET))(this);
		}

		::System::Boolean HasAppliedByForce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_HASAPPLIEDBYFORCE_OFFSET))(this);
		}

		::System::Boolean AddForceDisWeightMinMeshDisLimitShowIf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ADDFORCEDISWEIGHTMINMESHDISLIMITSHOWIF_OFFSET))(this);
		}

		::System::Single UpdateAddForceMeshWeightAveCache(::System::Single nowWeight)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_UPDATEADDFORCEMESHWEIGHTAVECACHE_OFFSET))(this, nowWeight);
		}

		static ::System::Boolean get_UseJobOpt()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GET_USEJOBOPT_OFFSET))();
		}

		::System::Void Simulate_RecordTransform(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_SIMULATE_RECORDTRANSFORM_OFFSET))(this, dt);
		}

		::System::Void EnsureBSplineCustomShapeTransformListPosCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ENSUREBSPLINECUSTOMSHAPETRANSFORMLISTPOSCACHE_OFFSET))(this);
		}

		::System::Void Simulate_Calculate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_SIMULATE_CALCULATE_OFFSET))(this, dt);
		}

		::System::Void Simulate_SendDataToRenderer(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_SIMULATE_SENDDATATORENDERER_OFFSET))(this, dt);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Boolean get_Activated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GET_ACTIVATED_OFFSET))(this);
		}

		::System::Single get_UpdateInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GET_UPDATEINTERVAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CurHeadPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GET_CURHEADPOS_OFFSET))(this);
		}

		::System::Single get_TrailWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GET_TRAILWIDTH_OFFSET))(this);
		}

		::System::Boolean get_DynamicMeshPointLength()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GET_DYNAMICMESHPOINTLENGTH_OFFSET))(this);
		}

		::System::Boolean get_BSplineCustomShape()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GET_BSPLINECUSTOMSHAPE_OFFSET))(this);
		}

		::System::Boolean get_BSplineBoneShape()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GET_BSPLINEBONESHAPE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_INIT_OFFSET))(this);
		}

		::System::Void Activate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ACTIVATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* InitDataCo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_INITDATACO_OFFSET))(this);
		}

		::System::Void ResetVertextData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_RESETVERTEXTDATA_OFFSET))(this);
		}

		::System::Void Deactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_DEACTIVATE_OFFSET))(this);
		}

		::System::Void StopSmoothly(::System::Single fadeTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_STOPSMOOTHLY_OFFSET))(this, fadeTime);
		}

		::UnityEngine::MeshRenderer* GetMeshRender()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GETMESHRENDER_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void PostSimulationUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_POSTSIMULATIONUPDATE_OFFSET))(this);
		}

		::System::Void Simulate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_SIMULATE_OFFSET))(this, dt);
		}

		::System::Void MyPreRender(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_MYPRERENDER_OFFSET))(this, dt);
		}

		::System::Void MyPostRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_MYPOSTRENDER_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_START_OFFSET))(this);
		}

		::System::Boolean get_NeedRecordInitPos()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GET_NEEDRECORDINITPOS_OFFSET))(this);
		}

		::System::Void set_NeedRecordInitPos(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_SET_NEEDRECORDINITPOS_OFFSET))(this, value);
		}

		::System::Void GoStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GOSTART_OFFSET))(this);
		}

		::System::Void InitSpline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_INITSPLINE_OFFSET))(this);
		}

		::System::Void RefreshSpline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_REFRESHSPLINE_OFFSET))(this);
		}

		::System::Void UpdateVertex(::System::Boolean inJob)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_UPDATEVERTEX_OFFSET))(this, inJob);
		}

		::UnityEngine::Vector3 SpawnNewPoint(::XftWeapon::VertexPool* pool, ::System::Int32& pointIndex, ::System::Int32 baseIdx, ::System::Single uvSegment, ::System::Single fadeT)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::XftWeapon::VertexPool*, ::System::Int32&, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_SPAWNNEWPOINT_OFFSET))(this, pool, pointIndex, baseIdx, uvSegment, fadeT);
		}

		::System::Void BSplineRemovePoolLastPoint(::XftWeapon::VertexPool* pool, ::System::Int32& pointIndex)
		{
			return ((::System::Void(*)(::PVOID, ::XftWeapon::VertexPool*, ::System::Int32&))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_BSPLINEREMOVEPOOLLASTPOINT_OFFSET))(this, pool, pointIndex);
		}

		::System::Void BSplineForDFSPoints(::XftWeapon::VertexPool* pool, ::System::Single LRate, ::System::Single RRate, ::System::Single LUVSegment, ::System::Single RUVSegment, ::UnityEngine::Vector3 LPos, ::UnityEngine::Vector3 RPos, ::System::Int32& pointIndex, ::System::Int32 dep, ::System::Boolean needRemoveLastPoint)
		{
			return ((::System::Void(*)(::PVOID, ::XftWeapon::VertexPool*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_BSPLINEFORDFSPOINTS_OFFSET))(this, pool, LRate, RRate, LUVSegment, RUVSegment, LPos, RPos, pointIndex, dep, needRemoveLastPoint);
		}

		::System::Void UpdateIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_UPDATEINDICES_OFFSET))(this);
		}

		::System::Void UpdateIndices_DynamicVersion(::System::Int32 pointCnt, ::System::Boolean arrRebuild)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_UPDATEINDICES_DYNAMICVERSION_OFFSET))(this, pointCnt, arrRebuild);
		}

		::System::Void UpdateHeadElem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_UPDATEHEADELEM_OFFSET))(this);
		}

		::System::Void UpdateFade(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_UPDATEFADE_OFFSET))(this, dt);
		}

		::System::Boolean get_CurFrameIsStopFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_GET_CURFRAMEISSTOPFRAME_OFFSET))(this);
		}

		::System::Void RecordCurElem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_RECORDCURELEM_OFFSET))(this);
		}

		::System::Void BSplineBoneShapeRecordSnapshotElemData(::XftWeapon::XWeaponTrail_Element* elem)
		{
			return ((::System::Void(*)(::PVOID, ::XftWeapon::XWeaponTrail_Element*))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_BSPLINEBONESHAPERECORDSNAPSHOTELEMDATA_OFFSET))(this, elem);
		}

		::System::Void BSplineBoneShapeRecordPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_BSPLINEBONESHAPERECORDPOINTS_OFFSET))(this, points);
		}

		::System::Void InitOriginalElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_INITORIGINALELEMENTS_OFFSET))(this);
		}

		::System::Void InitMeshObj()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_INITMESHOBJ_OFFSET))(this);
		}

		::System::Void OnMaxFrameValueChanged(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ONMAXFRAMEVALUECHANGED_OFFSET))(this, value);
		}

		::System::Void OnMaterialValueChanged(::UnityEngine::Material* newMat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ONMATERIALVALUECHANGED_OFFSET))(this, newMat);
		}

		::System::Void OnPointStartValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ONPOINTSTARTVALUECHANGED_OFFSET))(this);
		}

		::System::Void OnPointEndValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ONPOINTENDVALUECHANGED_OFFSET))(this);
		}

		::System::Boolean VectorEqual(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_VECTOREQUAL_OFFSET))(this, a, b);
		}
	};
}
