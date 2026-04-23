#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_THREADLOCALSTRINGBUILDER_APPENDANY_OFFSET UNITYSDK_OFFSET(0x22EEC30)
#define UNITYENGINE_THREADLOCALSTRINGBUILDER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x22EEC80)
#define UNITYENGINE_THREADLOCALSTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x22EEC60)
#define UNITYENGINE_THREADLOCALSTRINGBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x22EED00)
#define UNITYENGINE_THREADLOCALSTRINGBUILDER_RESERVE_OFFSET UNITYSDK_OFFSET(0x22EECB0)
#define UNITYENGINE_THREADLOCALSTRINGBUILDER_TONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x22EECD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ThreadLocalStringBuilder_TypeDefinitionIndex = 4163;

	struct alignas(1) ThreadLocalStringBuilder
	{
		/*
		::UnityEngine::ThreadLocalStringBuilder AppendAny(::UnityEngine::AnyType value)
		{
			return ((::UnityEngine::ThreadLocalStringBuilder(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUILDER_APPENDANY_OFFSET))(this, value);
		}
		*/

		::UnityEngine::ThreadLocalStringBuilder Append(::System::String* value)
		{
			return ((::UnityEngine::ThreadLocalStringBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUILDER_APPEND_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ThreadLocalStringBuilder Append_1(::UnityEngine::NativeString value)
		{
			return ((::UnityEngine::ThreadLocalStringBuilder(*)(::PVOID, ::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUILDER_APPEND_1_OFFSET))(this, value);
		}
		*/

		::UnityEngine::ThreadLocalStringBuilder Reserve(::System::Int32 size)
		{
			return ((::UnityEngine::ThreadLocalStringBuilder(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUILDER_RESERVE_OFFSET))(this, size);
		}

		/*
		::UnityEngine::NativeString ToNativeString(::System::Boolean autoRelease)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUILDER_TONATIVESTRING_OFFSET))(this, autoRelease);
		}
		*/

		::UnityEngine::ThreadLocalStringBuilder Clear()
		{
			return ((::UnityEngine::ThreadLocalStringBuilder(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUILDER_CLEAR_OFFSET))(this);
		}
	};
}
