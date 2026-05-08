#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace miHoYoEmotion { class ClipShapeCurveGrp; }
namespace miHoYoEmotion { class ClipShapeManager; }
namespace miHoYoEmotion { class ClipShapeManager_CurveBinding; }

#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP_GETCURVEBINDING_OFFSET UNITYSDK_OFFSET(0x19784D10)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1978BD80)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP_GET_INDEXRES2INDEXRUNTIMEDIC_OFFSET UNITYSDK_OFFSET(0x1978BC60)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP_PUTCURVEBINDING_OFFSET UNITYSDK_OFFSET(0x1978BA80)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP_UPDATERUNTIMEINDEX_OFFSET UNITYSDK_OFFSET(0x1978B230)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1978BE20)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShapeManager_CurveBindingGrp_TypeDefinitionIndex = 37706;

	class ClipShapeManager_CurveBindingGrp : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* curveBindings; // 0x10
		::miHoYoEmotion::ClipShapeManager* clipShapeManager; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _indexRes2IndexRuntimeDic; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP__CTOR_OFFSET))(this);
		}

		::miHoYoEmotion::ClipShapeManager_CurveBinding* GetCurveBinding(::System::Int32 indexOfIndex)
		{
			return ((::miHoYoEmotion::ClipShapeManager_CurveBinding*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP_GETCURVEBINDING_OFFSET))(this, indexOfIndex);
		}

		::System::Void PutCurveBinding(::miHoYoEmotion::ClipShapeManager_CurveBinding* binding)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ClipShapeManager_CurveBinding*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP_PUTCURVEBINDING_OFFSET))(this, binding);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* get_IndexRes2IndexRuntimeDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP_GET_INDEXRES2INDEXRUNTIMEDIC_OFFSET))(this);
		}

		::System::Int32 GetIndex(::System::Int32 indexRes)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP_GETINDEX_OFFSET))(this, indexRes);
		}

		::System::Void UpdateRuntimeIndex(::miHoYoEmotion::ClipShapeCurveGrp* shapeCurveGrp)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ClipShapeCurveGrp*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP_UPDATERUNTIMEINDEX_OFFSET))(this, shapeCurveGrp);
		}
	};
}
