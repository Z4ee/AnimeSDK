#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_PLAYERPREFS_DELETEALL_OFFSET UNITYSDK_OFFSET(0x1B2B6BF0)
#define UNITYENGINE_PLAYERPREFS_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1B2B6BE0)
#define UNITYENGINE_PLAYERPREFS_GETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1B2B6B40)
#define UNITYENGINE_PLAYERPREFS_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1B2B6B30)
#define UNITYENGINE_PLAYERPREFS_GETINT_1_OFFSET UNITYSDK_OFFSET(0x1B2B6AA0)
#define UNITYENGINE_PLAYERPREFS_GETINT_OFFSET UNITYSDK_OFFSET(0x1B2B6A90)
#define UNITYENGINE_PLAYERPREFS_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x1B2B6BB0)
#define UNITYENGINE_PLAYERPREFS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1B2B6BA0)
#define UNITYENGINE_PLAYERPREFS_HASKEY_OFFSET UNITYSDK_OFFSET(0x1B2B6BD0)
#define UNITYENGINE_PLAYERPREFS_SAVE_OFFSET UNITYSDK_OFFSET(0x1B2B6C00)
#define UNITYENGINE_PLAYERPREFS_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1B2B6AB0)
#define UNITYENGINE_PLAYERPREFS_SETINT_OFFSET UNITYSDK_OFFSET(0x1B2B69E0)
#define UNITYENGINE_PLAYERPREFS_SETSTRING_OFFSET UNITYSDK_OFFSET(0x1B2B6B50)
#define UNITYENGINE_PLAYERPREFS_TRYSETFLOAT_OFFSET UNITYSDK_OFFSET(0x1B2B69C0)
#define UNITYENGINE_PLAYERPREFS_TRYSETINT_OFFSET UNITYSDK_OFFSET(0x1B2B69B0)
#define UNITYENGINE_PLAYERPREFS_TRYSETSETSTRING_OFFSET UNITYSDK_OFFSET(0x1B2B69D0)

namespace UnityEngine
{
	inline static constexpr unsigned int PlayerPrefs_TypeDefinitionIndex = 4219;

	class PlayerPrefs : public ::System::Object
	{
	public:
		static ::System::Boolean TrySetInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_TRYSETINT_OFFSET))(a1, a2);
		}

		static ::System::Boolean TrySetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_TRYSETFLOAT_OFFSET))(a1, a2);
		}

		static ::System::Boolean TrySetSetString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_TRYSETSETSTRING_OFFSET))(a1, a2);
		}

		static ::System::Void SetInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_SETINT_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETINT_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetInt_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETINT_1_OFFSET))(a1);
		}

		static ::System::Void SetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_SETFLOAT_OFFSET))(a1, a2);
		}

		static ::System::Single GetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETFLOAT_OFFSET))(a1, a2);
		}

		static ::System::Single GetFloat_1(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETFLOAT_1_OFFSET))(a1);
		}

		static ::System::Void SetString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_SETSTRING_OFFSET))(a1, a2);
		}

		static ::System::String* GetString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETSTRING_OFFSET))(a1, a2);
		}

		static ::System::String* GetString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETSTRING_1_OFFSET))(a1);
		}

		static ::System::Boolean HasKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_HASKEY_OFFSET))(a1);
		}

		static ::System::Void DeleteKey(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_DELETEKEY_OFFSET))(a1);
		}

		static ::System::Void DeleteAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_DELETEALL_OFFSET))();
		}

		static ::System::Void Save()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_SAVE_OFFSET))();
		}
	};
}
