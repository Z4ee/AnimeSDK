#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WeLing/SDK/GyroType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace WeLing::SDK { class PipeWrapper_OnReceiveData; }
namespace WeLing::SDK { class PipeWrapper_OnSensorCallbackFun; }

#define WELING_SDK_PIPEWRAPPER_INITGYRO_OFFSET UNITYSDK_OFFSET(0x1B917080)
#define WELING_SDK_PIPEWRAPPER_INITPIPE_OFFSET UNITYSDK_OFFSET(0x1B916F90)
#define WELING_SDK_PIPEWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x1B916DE0)
#define WELING_SDK_PIPEWRAPPER_ONSENSORIMP_OFFSET UNITYSDK_OFFSET(0x1B916BB0)
#define WELING_SDK_PIPEWRAPPER_SENDDATASTRING_OFFSET UNITYSDK_OFFSET(0x1B917200)
#define WELING_SDK_PIPEWRAPPER_SENDDATATOPIPE_OFFSET UNITYSDK_OFFSET(0x1B917170)
#define WELING_SDK_PIPEWRAPPER_SENDDATA_OFFSET UNITYSDK_OFFSET(0x1B916E70)
#define WELING_SDK_PIPEWRAPPER_SETONSENSORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B916F00)
#define WELING_SDK_PIPEWRAPPER_SIMPLECALLBACKIMP_OFFSET UNITYSDK_OFFSET(0x1B916C40)
#define WELING_SDK_PIPEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9173C0)

namespace WeLing::SDK
{
	inline static constexpr unsigned int PipeWrapper_TypeDefinitionIndex = 7483;

	class PipeWrapper : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_OnReceiveDataEvent()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PipeWrapper_TypeDefinitionIndex)->GetStaticField(0x510);
		}
		static ::System::Action_2<::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*>** StaticGet_OnSensorEvent()
		{
			return (::System::Action_2<::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(PipeWrapper_TypeDefinitionIndex)->GetStaticField(0x518);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean Init(::WeLing::SDK::PipeWrapper_OnReceiveData* a1)
		{
			return ((::System::Boolean(*)(::WeLing::SDK::PipeWrapper_OnReceiveData*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_INIT_OFFSET))(a1);
		}

		static ::System::Boolean SendData(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_SENDDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetOnSensorCallback(::WeLing::SDK::PipeWrapper_OnSensorCallbackFun* a1)
		{
			return ((::System::Boolean(*)(::WeLing::SDK::PipeWrapper_OnSensorCallbackFun*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_SETONSENSORCALLBACK_OFFSET))(a1);
		}

		static ::System::Void OnSensorImp(::System::Int32& a1, ::System::IntPtr a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONSENSORIMP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SimpleCallBackImp(::System::IntPtr a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_SIMPLECALLBACKIMP_OFFSET))(a1, a2);
		}

		static ::System::Boolean InitPipe()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_INITPIPE_OFFSET))();
		}

		static ::System::Boolean InitGyro()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_INITGYRO_OFFSET))();
		}

		static ::System::Boolean SendDataToPipe(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_SENDDATATOPIPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean SendDataString(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_SENDDATASTRING_OFFSET))(a1);
		}
	};
}
