#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_NATIVECLASSATTRIBUTE_SET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x18AB7EF0)
#define UNITYENGINE_NATIVECLASSATTRIBUTE_SET_QUALIFIEDNATIVENAME_OFFSET UNITYSDK_OFFSET(0x18AB7EE0)
#define UNITYENGINE_NATIVECLASSATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18AB7F30)
#define UNITYENGINE_NATIVECLASSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB7F00)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeClassAttribute_TypeDefinitionIndex = 3695;

	class NativeClassAttribute : public ::System::Attribute
	{
	public:
		::System::String* _QualifiedNativeName_k__BackingField; // 0x10
		::System::String* _Declaration_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* qualifiedCppName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVECLASSATTRIBUTE__CTOR_OFFSET))(this, qualifiedCppName);
		}

		::System::Void _ctor_1(::System::String* qualifiedCppName, ::System::String* declaration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVECLASSATTRIBUTE__CTOR_1_OFFSET))(this, qualifiedCppName, declaration);
		}

		::System::Void set_QualifiedNativeName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVECLASSATTRIBUTE_SET_QUALIFIEDNATIVENAME_OFFSET))(this, value);
		}

		::System::Void set_Declaration(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVECLASSATTRIBUTE_SET_DECLARATION_OFFSET))(this, value);
		}
	};
}
