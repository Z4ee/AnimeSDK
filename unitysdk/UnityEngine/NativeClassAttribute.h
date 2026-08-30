#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_NATIVECLASSATTRIBUTE_SET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x1F00F880)
#define UNITYENGINE_NATIVECLASSATTRIBUTE_SET_QUALIFIEDNATIVENAME_OFFSET UNITYSDK_OFFSET(0x1F00F870)
#define UNITYENGINE_NATIVECLASSATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F00F8C0)
#define UNITYENGINE_NATIVECLASSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F00F890)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeClassAttribute_TypeDefinitionIndex = 3716;

	class NativeClassAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Declaration_k__BackingField; // 0x10
		::System::String* _QualifiedNativeName_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVECLASSATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVECLASSATTRIBUTE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void set_QualifiedNativeName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVECLASSATTRIBUTE_SET_QUALIFIEDNATIVENAME_OFFSET))(this, a1);
		}

		::System::Void set_Declaration(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVECLASSATTRIBUTE_SET_DECLARATION_OFFSET))(this, a1);
		}
	};
}
