#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYOEMOTION_BASESHAPE_GETELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1BAE2590)
#define MIHOYOEMOTION_BASESHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE2620)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BaseShape_TypeDefinitionIndex = 39399;

	class BaseShape : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* elements; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASESHAPE__CTOR_OFFSET))(this);
		}

		::System::String* GetElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASESHAPE_GETELEMENTNAME_OFFSET))(this);
		}
	};
}
