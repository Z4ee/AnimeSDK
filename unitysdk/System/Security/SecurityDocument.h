#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_SECURITY_SECURITYDOCUMENT_ADDSTRING_OFFSET UNITYSDK_OFFSET(0x1B93D620)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_ADDTOKEN_OFFSET UNITYSDK_OFFSET(0x1B93DDF0)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_APPENDSTRING_OFFSET UNITYSDK_OFFSET(0x1B93D8F0)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_ENCODEDSTRINGSIZE_OFFSET UNITYSDK_OFFSET(0x1B93D9C0)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x1B93DF00)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_GETROOTELEMENT_OFFSET UNITYSDK_OFFSET(0x1B93DEE0)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1B93D9E0)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_GUARANTEESIZE_OFFSET UNITYSDK_OFFSET(0x1B93D590)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_INTERNALGETELEMENT_OFFSET UNITYSDK_OFFSET(0x1B93DF20)
#define SYSTEM_SECURITY_SECURITYDOCUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93D550)

namespace System::Security
{
	inline static constexpr unsigned int SecurityDocument_TypeDefinitionIndex = 940;

	class SecurityDocument : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* m_data; // 0x10

		::System::Void _ctor(::System::Int32 numData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT__CTOR_OFFSET))(this, numData);
		}

		::System::Void GuaranteeSize(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_GUARANTEESIZE_OFFSET))(this, size);
		}

		::System::Void AddString(::System::String* str, ::System::Int32& position)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_ADDSTRING_OFFSET))(this, str, position);
		}

		::System::Void AppendString(::System::String* str, ::System::Int32& position)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_APPENDSTRING_OFFSET))(this, str, position);
		}

		static ::System::Int32 EncodedStringSize(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_ENCODEDSTRINGSIZE_OFFSET))(str);
		}

		::System::String* GetString(::System::Int32& position, ::System::Boolean bCreate)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_GETSTRING_OFFSET))(this, position, bCreate);
		}

		::System::Void AddToken(::System::Byte b, ::System::Int32& position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_ADDTOKEN_OFFSET))(this, b, position);
		}

		::System::Security::SecurityElement* GetRootElement()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_GETROOTELEMENT_OFFSET))(this);
		}

		::System::Security::SecurityElement* GetElement(::System::Int32 position, ::System::Boolean bCreate)
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_GETELEMENT_OFFSET))(this, position, bCreate);
		}

		::System::Security::SecurityElement* InternalGetElement(::System::Int32& position, ::System::Boolean bCreate)
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_INTERNALGETELEMENT_OFFSET))(this, position, bCreate);
		}
	};
}
