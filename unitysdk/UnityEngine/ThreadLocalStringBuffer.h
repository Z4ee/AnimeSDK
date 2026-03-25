#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnyType.h"
#include "unitysdk/UnityEngine/NativeString.h"

namespace System { class String; }

#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDANY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A57200)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDANY_OFFSET UNITYSDK_OFFSET(0x18A571F0)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDNATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A57240)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x18A57220)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDSTRING_OFFSET UNITYSDK_OFFSET(0x18A57210)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0x18A57260)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_RESERVE_OFFSET UNITYSDK_OFFSET(0x18A57250)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_TONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A572A0)
#define UNITYENGINE_THREADLOCALSTRINGBUFFER_TONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x18A57270)

namespace UnityEngine
{
	inline static constexpr unsigned int ThreadLocalStringBuffer_TypeDefinitionIndex = 4162;

	class ThreadLocalStringBuffer : public ::System::Object
	{
	public:
		static ::System::Void AppendAny(::UnityEngine::AnyType value)
		{
			return ((::System::Void(*)(::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDANY_OFFSET))(value);
		}

		static ::System::Void AppendString(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDSTRING_OFFSET))(value);
		}

		static ::System::Void AppendNativeString(::UnityEngine::NativeString value)
		{
			return ((::System::Void(*)(::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDNATIVESTRING_OFFSET))(value);
		}

		static ::System::Void Reserve(::System::Int32 size)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_RESERVE_OFFSET))(size);
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_CLEAR_OFFSET))();
		}

		static ::UnityEngine::NativeString ToNativeString(::System::Boolean autoRelease)
		{
			return ((::UnityEngine::NativeString(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_TONATIVESTRING_OFFSET))(autoRelease);
		}

		static ::System::Void AppendAny_Injected(::UnityEngine::AnyType& value)
		{
			return ((::System::Void(*)(::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDANY_INJECTED_OFFSET))(value);
		}

		static ::System::Void AppendNativeString_Injected(::UnityEngine::NativeString& value)
		{
			return ((::System::Void(*)(::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_APPENDNATIVESTRING_INJECTED_OFFSET))(value);
		}

		static ::System::Void ToNativeString_Injected(::System::Boolean autoRelease, ::UnityEngine::NativeString& ret)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADLOCALSTRINGBUFFER_TONATIVESTRING_INJECTED_OFFSET))(autoRelease, ret);
		}
	};
}
