#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_PLAYERPREFS_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1D855A90)
#define UNITYENGINE_PLAYERPREFS_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1D8559B0)
#define UNITYENGINE_PLAYERPREFS_GETINT_1_OFFSET UNITYSDK_OFFSET(0x1D855920)
#define UNITYENGINE_PLAYERPREFS_GETINT_OFFSET UNITYSDK_OFFSET(0x1D855910)
#define UNITYENGINE_PLAYERPREFS_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D855A40)
#define UNITYENGINE_PLAYERPREFS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1D855A30)
#define UNITYENGINE_PLAYERPREFS_GETUSERDATA_OFFSET UNITYSDK_OFFSET(0x1D855850)
#define UNITYENGINE_PLAYERPREFS_HASKEY_OFFSET UNITYSDK_OFFSET(0x1D855A80)
#define UNITYENGINE_PLAYERPREFS_SAVE_OFFSET UNITYSDK_OFFSET(0x1D855AA0)
#define UNITYENGINE_PLAYERPREFS_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1D855930)
#define UNITYENGINE_PLAYERPREFS_SETINT_OFFSET UNITYSDK_OFFSET(0x1D8558A0)
#define UNITYENGINE_PLAYERPREFS_SETSTRING_OFFSET UNITYSDK_OFFSET(0x1D8559C0)
#define UNITYENGINE_PLAYERPREFS_SETUSERDATA_OFFSET UNITYSDK_OFFSET(0x1D855860)
#define UNITYENGINE_PLAYERPREFS_TRYSETFLOAT_OFFSET UNITYSDK_OFFSET(0x1D855880)
#define UNITYENGINE_PLAYERPREFS_TRYSETINT_OFFSET UNITYSDK_OFFSET(0x1D855870)
#define UNITYENGINE_PLAYERPREFS_TRYSETSETSTRING_OFFSET UNITYSDK_OFFSET(0x1D855890)
#define UNITYENGINE_PLAYERPREFS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D855AB0)

namespace UnityEngine
{
	inline static constexpr unsigned int PlayerPrefs_TypeDefinitionIndex = 5311;

	class PlayerPrefs : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 GetUserData(::System::Int32 nType, ::Il2CppArray<::System::Byte>* pBuffer, ::System::UInt32 bufferSize)
		{
			return ((::System::UInt32(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_GETUSERDATA_OFFSET))(nType, pBuffer, bufferSize);
		}

		static ::System::Void SetUserData(::System::String* param)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_SETUSERDATA_OFFSET))(param);
		}

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

		static ::System::Void Save()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFS_SAVE_OFFSET))();
		}
	};
}
