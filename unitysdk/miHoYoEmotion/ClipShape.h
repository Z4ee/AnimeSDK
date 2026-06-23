#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/BaseShape.h"

namespace System { class String; }

#define MIHOYOEMOTION_CLIPSHAPE_GETELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1BAF1220)
#define MIHOYOEMOTION_CLIPSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF12B0)
#define MIHOYOEMOTION_CLIPSHAPE___BASE_GETELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1BAF1330)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShape_TypeDefinitionIndex = 39412;

	class ClipShape : public ::miHoYoEmotion::BaseShape
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPE__CTOR_OFFSET))(this);
		}

		::System::String* GetElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPE_GETELEMENTNAME_OFFSET))(this);
		}

		::System::String* __base_GetElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPE___BASE_GETELEMENTNAME_OFFSET))(this);
		}
	};
}
