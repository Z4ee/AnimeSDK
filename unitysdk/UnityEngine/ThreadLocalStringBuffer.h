#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnyType.h"
#include "unitysdk/UnityEngine/NativeString.h"

namespace System { class String; }

#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDANY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F408FD0)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDANY_OFFSET UNITYSDK_OFFSET(0x1F408FC0)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDNATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F409010)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x1F408FF0)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDSTRING_OFFSET UNITYSDK_OFFSET(0x1F408FE0)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F409030)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_RESERVE_OFFSET UNITYSDK_OFFSET(0x1F409020)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_TONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F409070)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_TONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x1F409040)

namespace UnityEngine
{
	inline static constexpr unsigned int ThreadLocalStringBuffer_TypeDefinitionIndex = 4356;

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
