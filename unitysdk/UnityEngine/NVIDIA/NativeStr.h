#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_NVIDIA_NATIVESTR_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18A8F090)
#define UNITYENGINE_NVIDIA_NATIVESTR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A8F040)
#define UNITYENGINE_NVIDIA_NATIVESTR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18A8F0C0)
#define UNITYENGINE_NVIDIA_NATIVESTR_GET_PTR_OFFSET UNITYSDK_OFFSET(0x18A8F010)
#define UNITYENGINE_NVIDIA_NATIVESTR_SET_STR_OFFSET UNITYSDK_OFFSET(0x18A8EF70)
#define UNITYENGINE_NVIDIA_NATIVESTR__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8EF60)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int NativeStr_TypeDefinitionIndex = 5170;

	class NativeStr : public ::System::Object
	{
	public:
		::System::String* m_Str; // 0x10
		::System::IntPtr m_MarshalledString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_NATIVESTR__CTOR_OFFSET))(this);
		}

		::System::Void set_Str(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_NATIVESTR_SET_STR_OFFSET))(this, value);
		}

		::System::IntPtr get_Ptr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_NATIVESTR_GET_PTR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_NATIVESTR_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_NATIVESTR_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_NATIVESTR_FINALIZE_OFFSET))(this);
		}
	};
}
