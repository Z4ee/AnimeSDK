#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/miHoYoEmotion/FrameEmoTrack_FrameElementCell.h"
#include "unitysdk/miHoYoEmotion/FrameShapeElement_TYPE.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace miHoYoEmotion { class FrameShapeElement; }
namespace miHoYoEmotion { class FrameShapeManager_FrameShapeRuntime; }

#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_ADDELEMENT_OFFSET UNITYSDK_OFFSET(0x884690)
#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_ADDINDEX_OFFSET UNITYSDK_OFFSET(0x884560)
#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_APPLY_OFFSET UNITYSDK_OFFSET(0x8846B0)
#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_CLEARCELL_OFFSET UNITYSDK_OFFSET(0x884640)
#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_GETELEMENTCELL_OFFSET UNITYSDK_OFFSET(0x884620)
#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_GETINDEX_OFFSET UNITYSDK_OFFSET(0x884570)
#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_GET_ELEMENTCELLS_OFFSET UNITYSDK_OFFSET(0x28B580)
#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_GET_ELEMENTCNT_OFFSET UNITYSDK_OFFSET(0x884580)
#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_SETELEMENTCELL_OFFSET UNITYSDK_OFFSET(0x884650)
#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_UPDATE_OFFSET UNITYSDK_OFFSET(0x8846A0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameEmoTrack_FrameCell_TypeDefinitionIndex = 37699;

	struct alignas(8) FrameEmoTrack_FrameCell
	{
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _indexDic; // 0x10
		::System::Collections::Generic::List_1<::miHoYoEmotion::FrameEmoTrack_FrameElementCell>* _elementCells; // 0x18

		::System::Void AddIndex(::miHoYoEmotion::FrameShapeElement_TYPE type, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::FrameShapeElement_TYPE, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_ADDINDEX_OFFSET))(this, type, index);
		}

		::System::Int32 GetIndex(::miHoYoEmotion::FrameShapeElement_TYPE type)
		{
			return ((::System::Int32(*)(::PVOID, ::miHoYoEmotion::FrameShapeElement_TYPE))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_GETINDEX_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::miHoYoEmotion::FrameEmoTrack_FrameElementCell>* get_elementCells()
		{
			return ((::System::Collections::Generic::List_1<::miHoYoEmotion::FrameEmoTrack_FrameElementCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_GET_ELEMENTCELLS_OFFSET))(this);
		}

		::System::Int32 get_elementCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_GET_ELEMENTCNT_OFFSET))(this);
		}

		::miHoYoEmotion::FrameEmoTrack_FrameElementCell GetElementCell(::System::Int32 index)
		{
			return ((::miHoYoEmotion::FrameEmoTrack_FrameElementCell(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_GETELEMENTCELL_OFFSET))(this, index);
		}

		::System::Void ClearCell()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_CLEARCELL_OFFSET))(this);
		}

		::System::Void SetElementCell(::System::Int32 index, ::miHoYoEmotion::FrameEmoTrack_FrameElementCell elementCell)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::miHoYoEmotion::FrameEmoTrack_FrameElementCell))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_SETELEMENTCELL_OFFSET))(this, index, elementCell);
		}

		::System::Int32 AddElement(::miHoYoEmotion::FrameShapeElement* element, ::miHoYoEmotion::FrameShapeManager_FrameShapeRuntime* shapeRuntime)
		{
			return ((::System::Int32(*)(::PVOID, ::miHoYoEmotion::FrameShapeElement*, ::miHoYoEmotion::FrameShapeManager_FrameShapeRuntime*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_ADDELEMENT_OFFSET))(this, element, shapeRuntime);
		}

		::System::Boolean Update(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMECELL_APPLY_OFFSET))(this);
		}
	};
}
