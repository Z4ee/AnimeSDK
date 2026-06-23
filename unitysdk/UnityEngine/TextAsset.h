#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/TextAsset_CreateOptions.h"

namespace System { class String; }

#define UNITYENGINE_TEXTASSET_CASTTOSCRIPTINGSTRING_OFFSET UNITYSDK_OFFSET(0x1D58FBF0)
#define UNITYENGINE_TEXTASSET_GETRAWDATABYTELENGTH_OFFSET UNITYSDK_OFFSET(0x1D58FBE0)
#define UNITYENGINE_TEXTASSET_GETRAWDATAPTR_OFFSET UNITYSDK_OFFSET(0x1D58FBD0)
#define UNITYENGINE_TEXTASSET_GET_BYTES_OFFSET UNITYSDK_OFFSET(0x1D58FA40)
#define UNITYENGINE_TEXTASSET_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1D582E20)
#define UNITYENGINE_TEXTASSET_INTERNAL_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D58FBC0)
#define UNITYENGINE_TEXTASSET_SETBYTES_OFFSET UNITYSDK_OFFSET(0x1D58FA50)
#define UNITYENGINE_TEXTASSET_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1D58FA30)
#define UNITYENGINE_TEXTASSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D58FA60)
#define UNITYENGINE_TEXTASSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D58FB50)
#define UNITYENGINE_TEXTASSET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D58FAD0)
#define UNITYENGINE_TEXTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58FA70)

namespace UnityEngine
{
	inline static constexpr unsigned int TextAsset_TypeDefinitionIndex = 5362;

	class TextAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET__CTOR_1_OFFSET))(this, text);
		}

		::System::Void _ctor_2(::UnityEngine::TextAsset_CreateOptions options, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset_CreateOptions, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET__CTOR_2_OFFSET))(this, options, text);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GET_TEXT_OFFSET))(this);
		}

		::System::Void SetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_SETTEXT_OFFSET))(this, text);
		}

		::Il2CppArray<::System::Byte>* get_bytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GET_BYTES_OFFSET))(this);
		}

		::System::Void SetBytes(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_SETBYTES_OFFSET))(this, bytes);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_TOSTRING_OFFSET))(this);
		}

		static ::System::Void Internal_CreateInstance(::UnityEngine::TextAsset* self, ::System::String* text)
		{
			return ((::System::Void(*)(::UnityEngine::TextAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_INTERNAL_CREATEINSTANCE_OFFSET))(self, text);
		}

		::System::IntPtr GetRawDataPtr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GETRAWDATAPTR_OFFSET))(this);
		}

		::System::Int32 GetRawDataByteLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GETRAWDATABYTELENGTH_OFFSET))(this);
		}

		::System::String* CastToScriptingString(::System::Int32 offsetOnTextAsset, ::System::String* emptyString)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_CASTTOSCRIPTINGSTRING_OFFSET))(this, offsetOnTextAsset, emptyString);
		}
	};
}
