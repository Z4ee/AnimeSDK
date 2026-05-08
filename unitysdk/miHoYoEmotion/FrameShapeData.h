#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/BaseShapeData.h"

namespace miHoYoEmotion { class FrameShapeElement; }

#define MIHOYOEMOTION_FRAMESHAPEDATA_UPDATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1979B210)
#define MIHOYOEMOTION_FRAMESHAPEDATA_UPDATETYPEELEMENT_OFFSET UNITYSDK_OFFSET(0x1979B310)
#define MIHOYOEMOTION_FRAMESHAPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1979B3B0)
#define MIHOYOEMOTION_FRAMESHAPEDATA___BASE_UPDATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1979B420)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameShapeData_TypeDefinitionIndex = 37748;

	class FrameShapeData : public ::miHoYoEmotion::BaseShapeData
	{
	public:
		::Il2CppArray<::miHoYoEmotion::FrameShapeElement*>* phonemeElements; // 0x20
		::Il2CppArray<::miHoYoEmotion::FrameShapeElement*>* emotionElements; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEDATA__CTOR_OFFSET))(this);
		}

		::System::Void UpdateElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEDATA_UPDATEELEMENTS_OFFSET))(this);
		}

		::System::Void UpdateTypeElement(::Il2CppArray<::miHoYoEmotion::FrameShapeElement*>* elements)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::miHoYoEmotion::FrameShapeElement*>*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEDATA_UPDATETYPEELEMENT_OFFSET))(this, elements);
		}

		::System::Void __base_UpdateElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEDATA___BASE_UPDATEELEMENTS_OFFSET))(this);
		}
	};
}
