#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_PLAYERPREFS_DELETEALL_OFFSET UNITYSDK_OFFSET(0x1A466F10)
#define UNITYENGINE_PLAYERPREFS_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1A466F00)
#define UNITYENGINE_PLAYERPREFS_GETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1A466E60)
#define UNITYENGINE_PLAYERPREFS_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1A466E50)
#define UNITYENGINE_PLAYERPREFS_GETINT_1_OFFSET UNITYSDK_OFFSET(0x1A466DC0)
#define UNITYENGINE_PLAYERPREFS_GETINT_OFFSET UNITYSDK_OFFSET(0x1A466DB0)
#define UNITYENGINE_PLAYERPREFS_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x1A466ED0)
#define UNITYENGINE_PLAYERPREFS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1A466EC0)
#define UNITYENGINE_PLAYERPREFS_HASKEY_OFFSET UNITYSDK_OFFSET(0x1A466EF0)
#define UNITYENGINE_PLAYERPREFS_SAVE_OFFSET UNITYSDK_OFFSET(0x1A466F20)
#define UNITYENGINE_PLAYERPREFS_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1A466DD0)
#define UNITYENGINE_PLAYERPREFS_SETINT_OFFSET UNITYSDK_OFFSET(0x1A466D00)
#define UNITYENGINE_PLAYERPREFS_SETSTRING_OFFSET UNITYSDK_OFFSET(0x1A466E70)
#define UNITYENGINE_PLAYERPREFS_TRYSETFLOAT_OFFSET UNITYSDK_OFFSET(0x1A466CE0)
#define UNITYENGINE_PLAYERPREFS_TRYSETINT_OFFSET UNITYSDK_OFFSET(0x1A466CD0)
#define UNITYENGINE_PLAYERPREFS_TRYSETSETSTRING_OFFSET UNITYSDK_OFFSET(0x1A466CF0)

namespace UnityEngine
{
	inline static constexpr unsigned int PlayerPrefs_TypeDefinitionIndex = 4045;

	class PlayerPrefs : public ::System::Object
	{
	public:
		static ::System::Boolean TrySetInt(::System::String* key, ::System::Int32 value)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_TRYSETINT_OFFSET))(key, value);
		}

		static ::System::Boolean TrySetFloat(::System::String* key, ::System::Single value)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_TRYSETFLOAT_OFFSET))(key, value);
		}

		static ::System::Boolean TrySetSetString(::System::String* key, ::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_TRYSETSETSTRING_OFFSET))(key, value);
		}

		static ::System::Void SetInt(::System::String* key, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_SETINT_OFFSET))(key, value);
		}

		static ::System::Int32 GetInt(::System::String* key, ::System::Int32 defaultValue)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETINT_OFFSET))(key, defaultValue);
		}

		static ::System::Int32 GetInt_1(::System::String* key)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETINT_1_OFFSET))(key);
		}

		static ::System::Void SetFloat(::System::String* key, ::System::Single value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_SETFLOAT_OFFSET))(key, value);
		}

		static ::System::Single GetFloat(::System::String* key, ::System::Single defaultValue)
		{
			return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETFLOAT_OFFSET))(key, defaultValue);
		}

		static ::System::Single GetFloat_1(::System::String* key)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETFLOAT_1_OFFSET))(key);
		}

		static ::System::Void SetString(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_SETSTRING_OFFSET))(key, value);
		}

		static ::System::String* GetString(::System::String* key, ::System::String* defaultValue)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETSTRING_OFFSET))(key, defaultValue);
		}

		static ::System::String* GetString_1(::System::String* key)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETSTRING_1_OFFSET))(key);
		}

		static ::System::Boolean HasKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_HASKEY_OFFSET))(key);
		}

		static ::System::Void DeleteKey(::System::String* key)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_DELETEKEY_OFFSET))(key);
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
