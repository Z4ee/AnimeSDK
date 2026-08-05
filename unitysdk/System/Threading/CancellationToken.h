#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_THREADING_CANCELLATIONTOKEN_ACTIONTOACTIONOBJSHUNT_OFFSET UNITYSDK_OFFSET(0x1C346830)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x909130)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x909120)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x909190)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_GET_CANBECANCELED_OFFSET UNITYSDK_OFFSET(0x908F60)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_GET_ISCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x908F40)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_GET_NONE_OFFSET UNITYSDK_OFFSET(0x1C346540)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_GET_WAITHANDLE_OFFSET UNITYSDK_OFFSET(0x908F80)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_INITIALIZEDEFAULTSOURCE_OFFSET UNITYSDK_OFFSET(0x909290)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_INTERNALREGISTERWITHOUTEC_OFFSET UNITYSDK_OFFSET(0x9090B0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C3472C0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C3472E0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_1_OFFSET UNITYSDK_OFFSET(0x908FB0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_2_OFFSET UNITYSDK_OFFSET(0x909060)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_3_OFFSET UNITYSDK_OFFSET(0x9090F0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_OFFSET UNITYSDK_OFFSET(0x908F90)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_THROWIFCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x9091A0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_THROWIFSOURCEDISPOSED_OFFSET UNITYSDK_OFFSET(0x909220)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_THROWOBJECTDISPOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C347490)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_THROWOPERATIONCANCELEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x909230)
#define SYSTEM_THREADING_CANCELLATIONTOKEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3474F0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationToken_TypeDefinitionIndex = 784;

	struct alignas(8) CancellationToken
	{
		static ::System::Action_1<::System::Object*>** StaticGet_s_ActionToActionObjShunt()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CancellationToken_TypeDefinitionIndex)->GetStaticField(0x1110);
		}
		::System::Threading::CancellationTokenSource* m_source; // 0x10

		::System::Void _ctor(::System::Threading::CancellationTokenSource* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN__CTOR_OFFSET))(this, source);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN__CCTOR_OFFSET))();
		}

		static ::System::Threading::CancellationToken get_None()
		{
			return ((::System::Threading::CancellationToken(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_GET_NONE_OFFSET))();
		}

		::System::Boolean get_IsCancellationRequested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_GET_ISCANCELLATIONREQUESTED_OFFSET))(this);
		}

		::System::Boolean get_CanBeCanceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_GET_CANBECANCELED_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_WaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_GET_WAITHANDLE_OFFSET))(this);
		}

		static ::System::Void ActionToActionObjShunt(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_ACTIONTOACTIONOBJSHUNT_OFFSET))(obj);
		}

		/*
		::System::Threading::CancellationTokenRegistration Register(::System::Action* callback)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_OFFSET))(this, callback);
		}
		*/

		/*
		::System::Threading::CancellationTokenRegistration Register_1(::System::Action_1<::System::Object*>* callback, ::System::Object* state)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_1_OFFSET))(this, callback, state);
		}
		*/

		/*
		::System::Threading::CancellationTokenRegistration Register_2(::System::Action_1<::System::Object*>* callback, ::System::Object* state, ::System::Boolean useSynchronizationContext)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_2_OFFSET))(this, callback, state, useSynchronizationContext);
		}
		*/

		/*
		::System::Threading::CancellationTokenRegistration InternalRegisterWithoutEC(::System::Action_1<::System::Object*>* callback, ::System::Object* state)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_INTERNALREGISTERWITHOUTEC_OFFSET))(this, callback, state);
		}
		*/

		/*
		::System::Threading::CancellationTokenRegistration Register_3(::System::Action_1<::System::Object*>* callback, ::System::Object* state, ::System::Boolean useSynchronizationContext, ::System::Boolean useExecutionContext)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_3_OFFSET))(this, callback, state, useSynchronizationContext, useExecutionContext);
		}
		*/

		::System::Boolean Equals(::System::Threading::CancellationToken other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Threading::CancellationToken left, ::System::Threading::CancellationToken right)
		{
			return ((::System::Boolean(*)(::System::Threading::CancellationToken, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Threading::CancellationToken left, ::System::Threading::CancellationToken right)
		{
			return ((::System::Boolean(*)(::System::Threading::CancellationToken, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Void ThrowIfCancellationRequested()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_THROWIFCANCELLATIONREQUESTED_OFFSET))(this);
		}

		::System::Void ThrowIfSourceDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_THROWIFSOURCEDISPOSED_OFFSET))(this);
		}

		::System::Void ThrowOperationCanceledException()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_THROWOPERATIONCANCELEDEXCEPTION_OFFSET))(this);
		}

		static ::System::Void ThrowObjectDisposedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_THROWOBJECTDISPOSEDEXCEPTION_OFFSET))();
		}

		::System::Void InitializeDefaultSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_INITIALIZEDEFAULTSOURCE_OFFSET))(this);
		}
	};
}
