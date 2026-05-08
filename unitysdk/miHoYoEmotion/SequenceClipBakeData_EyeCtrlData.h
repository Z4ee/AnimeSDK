#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/miHoYoEmotion/SequenceBakeData_BakeData.h"

#define MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_EYECTRLDATA_LERP_OFFSET UNITYSDK_OFFSET(0x19778230)
#define MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_EYECTRLDATA_RESETDATA_OFFSET UNITYSDK_OFFSET(0x19777F80)
#define MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_EYECTRLDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1979FD20)
#define MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_EYECTRLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19778780)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SequenceClipBakeData_EyeCtrlData_TypeDefinitionIndex = 37756;

	class SequenceClipBakeData_EyeCtrlData : public ::miHoYoEmotion::SequenceBakeData_BakeData
	{
	public:
		static ::miHoYoEmotion::SequenceClipBakeData_EyeCtrlData** StaticGet_dummyData()
		{
			return (::miHoYoEmotion::SequenceClipBakeData_EyeCtrlData**)Il2CppClass::FromTypeDefinitionIndex(SequenceClipBakeData_EyeCtrlData_TypeDefinitionIndex)->GetStaticField(0x29250);
		}
		::System::Single startTime; // 0x18
		::UnityEngine::Vector3 leftEyeRot; // 0x1C
		::UnityEngine::Vector3 rightEyeRot; // 0x28
		::UnityEngine::Vector3 leftScale; // 0x34
		::UnityEngine::Vector3 rightScale; // 0x40
		::System::Boolean starEye; // 0x4C
		::System::Single faceFlush; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_EYECTRLDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_EYECTRLDATA__CCTOR_OFFSET))();
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_EYECTRLDATA_RESETDATA_OFFSET))(this);
		}

		::System::Void Lerp(::miHoYoEmotion::SequenceClipBakeData_EyeCtrlData* lastData, ::miHoYoEmotion::SequenceClipBakeData_EyeCtrlData* targetData, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceClipBakeData_EyeCtrlData*, ::miHoYoEmotion::SequenceClipBakeData_EyeCtrlData*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_EYECTRLDATA_LERP_OFFSET))(this, lastData, targetData, t);
		}
	};
}
