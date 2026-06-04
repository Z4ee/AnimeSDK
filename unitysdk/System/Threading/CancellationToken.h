#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }

#define SYSTEM_THREADING_CANCELLATIONTOKEN_ACTIONTOACTIONOBJSHUNT_OFFSET UNITYSDK_OFFSET(0x18615A20)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x382EFA0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x382EF90)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x382EFD0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_GET_CANBECANCELED_OFFSET UNITYSDK_OFFSET(0x382EE90)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_GET_ISCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x382EE70)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_GET_NONE_OFFSET UNITYSDK_OFFSET(0x186159A0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_INTERNALREGISTERWITHOUTEC_OFFSET UNITYSDK_OFFSET(0x382EF20)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18616490)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18616540)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_1_OFFSET UNITYSDK_OFFSET(0x382EF60)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_OFFSET UNITYSDK_OFFSET(0x382EEB0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_THROWIFCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x382F030)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_THROWIFSOURCEDISPOSED_OFFSET UNITYSDK_OFFSET(0x382F0B0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_THROWOBJECTDISPOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18616760)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_THROWOPERATIONCANCELEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x382F140)
#define SYSTEM_THREADING_CANCELLATIONTOKEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x186167C0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationToken_TypeDefinitionIndex = 795;

	struct alignas(8) CancellationToken
	{
		static ::System::Action_1<::System::Object*>** StaticGet_s_ActionToActionObjShunt()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CancellationToken_TypeDefinitionIndex)->GetStaticField(0x11AB0);
		}
		::System::Threading::CancellationTokenSource* m_source; // 0x10

		::System::Void _ctor(::System::Threading::CancellationTokenSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN__CTOR_OFFSET))(this, a1);
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

		static ::System::Void ActionToActionObjShunt(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_ACTIONTOACTIONOBJSHUNT_OFFSET))(a1);
		}

		/*
		::System::Threading::CancellationTokenRegistration Register(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Threading::CancellationTokenRegistration InternalRegisterWithoutEC(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_INTERNALREGISTERWITHOUTEC_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Threading::CancellationTokenRegistration Register_1(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_1_OFFSET))(this, a1, a2, a3, a4);
		}
		*/

		::System::Boolean Equals(::System::Threading::CancellationToken a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Threading::CancellationToken a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Boolean(*)(::System::Threading::CancellationToken, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Threading::CancellationToken a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Boolean(*)(::System::Threading::CancellationToken, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_OP_INEQUALITY_OFFSET))(a1, a2);
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
	};
}
