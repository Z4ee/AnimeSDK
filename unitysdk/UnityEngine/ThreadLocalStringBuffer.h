#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnyType.h"
#include "unitysdk/UnityEngine/NativeString.h"

namespace System { class String; }

#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDANY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2DF5B0)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDANY_OFFSET UNITYSDK_OFFSET(0x1B2DF5A0)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDNATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2DF5F0)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x1B2DF5D0)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDSTRING_OFFSET UNITYSDK_OFFSET(0x1B2DF5C0)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B2DF610)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_RESERVE_OFFSET UNITYSDK_OFFSET(0x1B2DF600)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_TONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2DF650)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_TONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x1B2DF620)

namespace UnityEngine
{
	inline static constexpr unsigned int ThreadLocalStringBuffer_TypeDefinitionIndex = 4338;

	class ThreadLocalStringBuffer : public ::System::Object
	{
	public:
		static ::System::Void AppendAny(::UnityEngine::AnyType a1)
		{
			return ((::System::Void(*)(::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDANY_OFFSET))(a1);
		}

		static ::System::Void AppendString(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDSTRING_OFFSET))(a1);
		}

		static ::System::Void AppendNativeString(::UnityEngine::NativeString a1)
		{
			return ((::System::Void(*)(::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDNATIVESTRING_OFFSET))(a1);
		}

		static ::System::Void Reserve(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_RESERVE_OFFSET))(a1);
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_CLEAR_OFFSET))();
		}

		static ::UnityEngine::NativeString ToNativeString(::System::Boolean a1)
		{
			return ((::UnityEngine::NativeString(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_TONATIVESTRING_OFFSET))(a1);
		}

		static ::System::Void AppendAny_Injected(::UnityEngine::AnyType& a1)
		{
			return ((::System::Void(*)(::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDANY_INJECTED_OFFSET))(a1);
		}

		static ::System::Void AppendNativeString_Injected(::UnityEngine::NativeString& a1)
		{
			return ((::System::Void(*)(::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDNATIVESTRING_INJECTED_OFFSET))(a1);
		}

		static ::System::Void ToNativeString_Injected(::System::Boolean a1, ::UnityEngine::NativeString& a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_TONATIVESTRING_INJECTED_OFFSET))(a1, a2);
		}
	};
}
