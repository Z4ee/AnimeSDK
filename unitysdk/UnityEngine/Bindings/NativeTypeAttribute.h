#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Bindings/CodegenOptions.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_CODEGENOPTIONS_OFFSET UNITYSDK_OFFSET(0x1F00F6B0)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_HEADER_OFFSET UNITYSDK_OFFSET(0x1F00F690)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_INTERMEDIATESCRIPTINGSTRUCTNAME_OFFSET UNITYSDK_OFFSET(0x1F00F6A0)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F00F6D0)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F00F6E0)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F00F7B0)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F00F6C0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeTypeAttribute_TypeDefinitionIndex = 3728;

	class NativeTypeAttribute : public ::System::Attribute
	{
	public:
		::System::String* _IntermediateScriptingStructName_k__BackingField; // 0x10
		::System::String* _Header_k__BackingField; // 0x18
		::UnityEngine::Bindings::CodegenOptions _CodegenOptions_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Bindings::CodegenOptions a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bindings::CodegenOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::UnityEngine::Bindings::CodegenOptions a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bindings::CodegenOptions, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void set_Header(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_HEADER_OFFSET))(this, a1);
		}

		::System::Void set_IntermediateScriptingStructName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_INTERMEDIATESCRIPTINGSTRUCTNAME_OFFSET))(this, a1);
		}

		::System::Void set_CodegenOptions(::UnityEngine::Bindings::CodegenOptions a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bindings::CodegenOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_CODEGENOPTIONS_OFFSET))(this, a1);
		}
	};
}
