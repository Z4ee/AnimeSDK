#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_SECURITY_SECURITYDOCUMENT_ADDSTRING_OFFSET UNITYSDK_OFFSET(0x185D1040)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_ADDTOKEN_OFFSET UNITYSDK_OFFSET(0x185D1DE0)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_APPENDSTRING_OFFSET UNITYSDK_OFFSET(0x185D11F0)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_ENCODEDSTRINGSIZE_OFFSET UNITYSDK_OFFSET(0x185D1340)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x185D1EB0)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_GETROOTELEMENT_OFFSET UNITYSDK_OFFSET(0x185D1E90)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_GETSTRING_OFFSET UNITYSDK_OFFSET(0x185D1360)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_GUARANTEESIZE_OFFSET UNITYSDK_OFFSET(0x185D0FD0)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_INTERNALGETELEMENT_OFFSET UNITYSDK_OFFSET(0x185D1ED0)
#define SYSTEM_SECURITY_SECURITYDOCUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x185D0FB0)

namespace System::Security
{
	inline static constexpr unsigned int SecurityDocument_TypeDefinitionIndex = 934;

	class SecurityDocument : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* m_data; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void GuaranteeSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_GUARANTEESIZE_OFFSET))(this, a1);
		}

		::System::Void AddString(::System::String* a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_ADDSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void AppendString(::System::String* a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_APPENDSTRING_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 EncodedStringSize(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_ENCODEDSTRINGSIZE_OFFSET))(a1);
		}

		::System::String* GetString(::System::Int32& a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_GETSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void AddToken(::System::Byte a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_ADDTOKEN_OFFSET))(this, a1, a2);
		}

		::System::Security::SecurityElement* GetRootElement()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_GETROOTELEMENT_OFFSET))(this);
		}

		::System::Security::SecurityElement* GetElement(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_GETELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Security::SecurityElement* InternalGetElement(::System::Int32& a1, ::System::Boolean a2)
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_INTERNALGETELEMENT_OFFSET))(this, a1, a2);
		}
	};
}
