#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_THREADLOCALSTRINGBUILDER_APPENDANY_OFFSET UNITYSDK_OFFSET(0x3AD2F70)
#define UNITYENGINE_THREADLOCALSTRINGBUILDER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x3AD2FC0)
#define UNITYENGINE_THREADLOCALSTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x3AD2FA0)
#define UNITYENGINE_THREADLOCALSTRINGBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x3AD3040)
#define UNITYENGINE_THREADLOCALSTRINGBUILDER_RESERVE_OFFSET UNITYSDK_OFFSET(0x3AD2FF0)
#define UNITYENGINE_THREADLOCALSTRINGBUILDER_TONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x3AD3010)

namespace UnityEngine
{
	inline static constexpr unsigned int ThreadLocalStringBuilder_TypeDefinitionIndex = 4342;

	struct alignas(1) ThreadLocalStringBuilder
	{
		/*
		::UnityEngine::ThreadLocalStringBuilder AppendAny(::UnityEngine::AnyType a1)
		{
			return ((::UnityEngine::ThreadLocalStringBuilder(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUILDER_APPENDANY_OFFSET))(this, a1);
		}
		*/

		::UnityEngine::ThreadLocalStringBuilder Append(::System::String* a1)
		{
			return ((::UnityEngine::ThreadLocalStringBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUILDER_APPEND_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ThreadLocalStringBuilder Append_1(::UnityEngine::NativeString a1)
		{
			return ((::UnityEngine::ThreadLocalStringBuilder(*)(::PVOID, ::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUILDER_APPEND_1_OFFSET))(this, a1);
		}
		*/

		::UnityEngine::ThreadLocalStringBuilder Reserve(::System::Int32 a1)
		{
			return ((::UnityEngine::ThreadLocalStringBuilder(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUILDER_RESERVE_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::NativeString ToNativeString(::System::Boolean a1)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUILDER_TONATIVESTRING_OFFSET))(this, a1);
		}
		*/

		::UnityEngine::ThreadLocalStringBuilder Clear()
		{
			return ((::UnityEngine::ThreadLocalStringBuilder(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUILDER_CLEAR_OFFSET))(this);
		}
	};
}
