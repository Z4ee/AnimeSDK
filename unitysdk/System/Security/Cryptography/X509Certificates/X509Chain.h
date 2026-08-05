#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ChainStatus.h"

namespace Microsoft::Win32::SafeHandles { class SafeX509ChainHandle; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainElementCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainImpl; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainPolicy; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_BUILD_OFFSET UNITYSDK_OFFSET(0x1E981FD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_CREATE_OFFSET UNITYSDK_OFFSET(0x1E9820A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E9821D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E982120)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E982240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_CHAINCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E981D90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_CHAINELEMENTS_OFFSET UNITYSDK_OFFSET(0x1E981DA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_CHAINPOLICY_OFFSET UNITYSDK_OFFSET(0x1E981E00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_CHAINSTATUS_OFFSET UNITYSDK_OFFSET(0x1E981ED0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x1E981B90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E981BF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_SAFEHANDLE_OFFSET UNITYSDK_OFFSET(0x1E981F80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_RESET_OFFSET UNITYSDK_OFFSET(0x1E982040)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_SET_CHAINPOLICY_OFFSET UNITYSDK_OFFSET(0x1E981E60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_THROWIFCONTEXTINVALID_OFFSET UNITYSDK_OFFSET(0x1E981C00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E981CA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E981CF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E981D40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E981C50)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Chain_TypeDefinitionIndex = 3195;

	class X509Chain : public ::System::Object
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean useMachineContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_1_OFFSET))(this, useMachineContext);
		}

		::System::Void _ctor_2(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_2_OFFSET))(this, impl);
		}

		::System::Void _ctor_3(::System::IntPtr chainContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_3_OFFSET))(this, chainContext);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainImpl* get_Impl()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_IMPL_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_ISVALID_OFFSET))(this);
		}

		::System::Void ThrowIfContextInvalid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_THROWIFCONTEXTINVALID_OFFSET))(this);
		}

		::System::IntPtr get_ChainContext()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_CHAINCONTEXT_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_CHAINELEMENTS_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_CHAINPOLICY_OFFSET))(this);
		}

		::System::Void set_ChainPolicy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_SET_CHAINPOLICY_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* get_ChainStatus()
		{
			return ((::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_CHAINSTATUS_OFFSET))(this);
		}

		::Microsoft::Win32::SafeHandles::SafeX509ChainHandle* get_SafeHandle()
		{
			return ((::Microsoft::Win32::SafeHandles::SafeX509ChainHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_SAFEHANDLE_OFFSET))(this);
		}

		::System::Boolean Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_BUILD_OFFSET))(this, certificate);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_RESET_OFFSET))(this);
		}

		static ::System::Security::Cryptography::X509Certificates::X509Chain* Create()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Chain*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_FINALIZE_OFFSET))(this);
		}
	};
}
