#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/StoreLocation.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ChainImpl.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ChainStatus.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ChainStatusFlags.h"

namespace Mono::Security::X509 { class X509Crl; }
namespace Mono::Security::X509 { class X509Crl_X509CrlEntry; }
namespace Mono::Security::X509 { class X509Extension; }
namespace Mono::Security::X509 { class X509Store; }
namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography::X509Certificates { class X500DistinguishedName; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2Collection; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainElement; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainElementCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainPolicy; }
namespace System::Security::Cryptography::X509Certificates { class X509Store; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_BUILDCHAINFROM_OFFSET UNITYSDK_OFFSET(0x1C4A6C60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_BUILD_OFFSET UNITYSDK_OFFSET(0x1C4A6570)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKCRLS_OFFSET UNITYSDK_OFFSET(0x1C4AAFD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKREVOCATIONONCHAIN_OFFSET UNITYSDK_OFFSET(0x1C4A91C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKREVOCATION_1_OFFSET UNITYSDK_OFFSET(0x1C4A9FE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKREVOCATION_OFFSET UNITYSDK_OFFSET(0x1C4A9CB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_FINDCRL_OFFSET UNITYSDK_OFFSET(0x1C4AA250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_FINDPARENT_OFFSET UNITYSDK_OFFSET(0x1C4A7CD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETAUTHORITYKEYIDENTIFIER_1_OFFSET UNITYSDK_OFFSET(0x1C4A9C30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETAUTHORITYKEYIDENTIFIER_2_OFFSET UNITYSDK_OFFSET(0x1C4A9AB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETAUTHORITYKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C4A82B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETSUBJECTKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C4A8340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CERTIFICATEAUTHORITIES_OFFSET UNITYSDK_OFFSET(0x1C4A76C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CERTIFICATECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1C4A7B70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CHAINELEMENTS_OFFSET UNITYSDK_OFFSET(0x1C4A64D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CHAINPOLICY_OFFSET UNITYSDK_OFFSET(0x1C4A64E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CHAINSTATUS_OFFSET UNITYSDK_OFFSET(0x1C4A6500)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1C4A64C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C4A64B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_LMCASTORE_OFFSET UNITYSDK_OFFSET(0x1C4A79D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_LMROOTSTORE_OFFSET UNITYSDK_OFFSET(0x1C4A7480)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_ROOTS_OFFSET UNITYSDK_OFFSET(0x1C4A7100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_USERCASTORE_OFFSET UNITYSDK_OFFSET(0x1C4A7AA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_USERROOTSTORE_OFFSET UNITYSDK_OFFSET(0x1C4A75A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ISCHAINCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C4A7E90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ISSELFISSUED_OFFSET UNITYSDK_OFFSET(0x1C4A8450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ISSIGNEDWITH_OFFSET UNITYSDK_OFFSET(0x1C4A98E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PREPAREFORNEXTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C4A8C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESSCERTIFICATEEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1C4A9930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESSCRLENTRYEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1C4AA7A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESSCRLEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1C4AABA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESS_OFFSET UNITYSDK_OFFSET(0x1C4A85D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_RESET_OFFSET UNITYSDK_OFFSET(0x1C4A6B10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_SELECTBESTFROMCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1C4A80B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_SET_CHAINPOLICY_OFFSET UNITYSDK_OFFSET(0x1C4A64F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_VALIDATECHAIN_OFFSET UNITYSDK_OFFSET(0x1C4A6EB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_WRAPUP_OFFSET UNITYSDK_OFFSET(0x1C4A95E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4AB450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4A6340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C4A6460)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A6330)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainImplMono_TypeDefinitionIndex = 3200;

	class X509ChainImplMono : public ::System::Security::Cryptography::X509Certificates::X509ChainImpl
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>** StaticGet_Empty()
		{
			return (::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>**)Il2CppClass::FromTypeDefinitionIndex(X509ChainImplMono_TypeDefinitionIndex)->GetStaticField(0x2A70);
		}
		::System::Security::Cryptography::AsymmetricAlgorithm* working_public_key; // 0x10
		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* working_issuer_name; // 0x18
		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection; // 0x20
		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* roots; // 0x28
		::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements; // 0x30
		::System::Security::Cryptography::X509Certificates::X509Store* user_ca_store; // 0x38
		::System::Security::Cryptography::X509Certificates::X509Store* ca_store; // 0x40
		::System::Security::Cryptography::X509Certificates::X509Store* user_root_store; // 0x48
		::System::Security::Cryptography::X509Certificates::X509ChainElement* bce_restriction; // 0x50
		::System::Security::Cryptography::X509Certificates::X509Store* root_store; // 0x58
		::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* status; // 0x60
		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* cas; // 0x68
		::System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy; // 0x70
		::System::Security::Cryptography::X509Certificates::StoreLocation location; // 0x78
		::System::Int32 max_path_length; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean useMachineContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CTOR_1_OFFSET))(this, useMachineContext);
		}

		::System::Void _ctor_2(::System::IntPtr chainContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CTOR_2_OFFSET))(this, chainContext);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_ISVALID_OFFSET))(this);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_HANDLE_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CHAINELEMENTS_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CHAINPOLICY_OFFSET))(this);
		}

		::System::Void set_ChainPolicy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_SET_CHAINPOLICY_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* get_ChainStatus()
		{
			return ((::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CHAINSTATUS_OFFSET))(this);
		}

		::System::Boolean Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_BUILD_OFFSET))(this, certificate);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_RESET_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_Roots()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_ROOTS_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_CertificateAuthorities()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CERTIFICATEAUTHORITIES_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Store* get_LMRootStore()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_LMROOTSTORE_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Store* get_UserRootStore()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_USERROOTSTORE_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Store* get_LMCAStore()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_LMCASTORE_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Store* get_UserCAStore()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_USERCASTORE_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_CertificateCollection()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CERTIFICATECOLLECTION_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags BuildChainFrom(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_BUILDCHAINFROM_OFFSET))(this, certificate);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* SelectBestFromCollection(::System::Security::Cryptography::X509Certificates::X509Certificate2* child, ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* c)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_SELECTBESTFROMCOLLECTION_OFFSET))(this, child, c);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* FindParent(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_FINDPARENT_OFFSET))(this, certificate);
		}

		::System::Boolean IsChainComplete(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ISCHAINCOMPLETE_OFFSET))(this, certificate);
		}

		::System::Boolean IsSelfIssued(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ISSELFISSUED_OFFSET))(this, certificate);
		}

		::System::Void ValidateChain(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_VALIDATECHAIN_OFFSET))(this, flag);
		}

		::System::Void Process(::System::Int32 n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESS_OFFSET))(this, n);
		}

		::System::Void PrepareForNextCertificate(::System::Int32 n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PREPAREFORNEXTCERTIFICATE_OFFSET))(this, n);
		}

		::System::Void WrapUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_WRAPUP_OFFSET))(this);
		}

		::System::Void ProcessCertificateExtensions(::System::Security::Cryptography::X509Certificates::X509ChainElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESSCERTIFICATEEXTENSIONS_OFFSET))(this, element);
		}

		::System::Boolean IsSignedWith(::System::Security::Cryptography::X509Certificates::X509Certificate2* signed_, ::System::Security::Cryptography::AsymmetricAlgorithm* pubkey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ISSIGNEDWITH_OFFSET))(this, signed_, pubkey);
		}

		::System::String* GetSubjectKeyIdentifier(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::String*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETSUBJECTKEYIDENTIFIER_OFFSET))(this, certificate);
		}

		static ::System::String* GetAuthorityKeyIdentifier(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::String*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETAUTHORITYKEYIDENTIFIER_OFFSET))(certificate);
		}

		static ::System::String* GetAuthorityKeyIdentifier_1(::Mono::Security::X509::X509Crl* crl)
		{
			return ((::System::String*(*)(::Mono::Security::X509::X509Crl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETAUTHORITYKEYIDENTIFIER_1_OFFSET))(crl);
		}

		static ::System::String* GetAuthorityKeyIdentifier_2(::Mono::Security::X509::X509Extension* ext)
		{
			return ((::System::String*(*)(::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETAUTHORITYKEYIDENTIFIER_2_OFFSET))(ext);
		}

		::System::Void CheckRevocationOnChain(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKREVOCATIONONCHAIN_OFFSET))(this, flag);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags CheckRevocation(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::System::Int32 ca, ::System::Boolean online)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKREVOCATION_OFFSET))(this, certificate, ca, online);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags CheckRevocation_1(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::System::Security::Cryptography::X509Certificates::X509Certificate2* ca_cert, ::System::Boolean online)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKREVOCATION_1_OFFSET))(this, certificate, ca_cert, online);
		}

		static ::Mono::Security::X509::X509Crl* CheckCrls(::System::String* subject, ::System::String* ski, ::Mono::Security::X509::X509Store* store)
		{
			return ((::Mono::Security::X509::X509Crl*(*)(::System::String*, ::System::String*, ::Mono::Security::X509::X509Store*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKCRLS_OFFSET))(subject, ski, store);
		}

		::Mono::Security::X509::X509Crl* FindCrl(::System::Security::Cryptography::X509Certificates::X509Certificate2* caCertificate)
		{
			return ((::Mono::Security::X509::X509Crl*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_FINDCRL_OFFSET))(this, caCertificate);
		}

		::System::Boolean ProcessCrlExtensions(::Mono::Security::X509::X509Crl* crl)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Crl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESSCRLEXTENSIONS_OFFSET))(this, crl);
		}

		::System::Boolean ProcessCrlEntryExtensions(::Mono::Security::X509::X509Crl_X509CrlEntry* entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Crl_X509CrlEntry*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESSCRLENTRYEXTENSIONS_OFFSET))(this, entry);
		}
	};
}
