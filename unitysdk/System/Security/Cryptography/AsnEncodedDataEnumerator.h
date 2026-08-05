#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography { class AsnEncodedData; }
namespace System::Security::Cryptography { class AsnEncodedDataCollection; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATAENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C89B7B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATAENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C89B990)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATAENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C89BA10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATAENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C89B8A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATAENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C89BA20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATAENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C89B7A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsnEncodedDataEnumerator_TypeDefinitionIndex = 3167;

	class AsnEncodedDataEnumerator : public ::System::Object
	{
	public:
		::System::Security::Cryptography::AsnEncodedDataCollection* _collection; // 0x10
		::System::Int32 _position; // 0x18

		::System::Void _ctor(::System::Security::Cryptography::AsnEncodedDataCollection* collection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedDataCollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATAENUMERATOR__CTOR_OFFSET))(this, collection);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATAENUMERATOR__CTOR_1_OFFSET))(this);
		}

		::System::Security::Cryptography::AsnEncodedData* get_Current()
		{
			return ((::System::Security::Cryptography::AsnEncodedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATAENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATAENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATAENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATAENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
