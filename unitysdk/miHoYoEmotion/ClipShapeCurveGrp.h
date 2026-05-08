#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace miHoYoEmotion { class ClipShapeCurveCell; }

#define MIHOYOEMOTION_CLIPSHAPECURVEGRP_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x19784DE0)
#define MIHOYOEMOTION_CLIPSHAPECURVEGRP__CTOR_OFFSET UNITYSDK_OFFSET(0x19785460)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShapeCurveGrp_TypeDefinitionIndex = 37768;

	class ClipShapeCurveGrp : public ::System::Object
	{
	public:
		::Il2CppArray<::miHoYoEmotion::ClipShapeCurveCell*>* curves; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPECURVEGRP__CTOR_OFFSET))(this);
		}

		::System::Single GetLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPECURVEGRP_GETLENGTH_OFFSET))(this);
		}
	};
}
