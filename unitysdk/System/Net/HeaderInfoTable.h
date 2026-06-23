#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Net { class HeaderInfo; }
namespace System::Net { class HeaderParser; }

#define SYSTEM_NET_HEADERINFOTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B1C4910)
#define SYSTEM_NET_HEADERINFOTABLE_PARSEMULTIVALUE_OFFSET UNITYSDK_OFFSET(0x1B1C21F0)
#define SYSTEM_NET_HEADERINFOTABLE_PARSESINGLEVALUE_OFFSET UNITYSDK_OFFSET(0x1B1C2190)
#define SYSTEM_NET_HEADERINFOTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1C25C0)
#define SYSTEM_NET_HEADERINFOTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C4A10)

namespace System::Net
{
	inline static constexpr unsigned int HeaderInfoTable_TypeDefinitionIndex = 3374;

	class HeaderInfoTable : public ::System::Object
	{
	public:
		static ::System::Net::HeaderParser** StaticGet_MultiParser()
		{
			return (::System::Net::HeaderParser**)Il2CppClass::FromTypeDefinitionIndex(HeaderInfoTable_TypeDefinitionIndex)->GetStaticField(0x2C20);
		}
		static ::System::Net::HeaderInfo** StaticGet_UnknownHeaderInfo()
		{
			return (::System::Net::HeaderInfo**)Il2CppClass::FromTypeDefinitionIndex(HeaderInfoTable_TypeDefinitionIndex)->GetStaticField(0x2C28);
		}
		static ::System::Collections::Hashtable** StaticGet_HeaderHashTable()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(HeaderInfoTable_TypeDefinitionIndex)->GetStaticField(0x2C30);
		}
		static ::System::Net::HeaderParser** StaticGet_SingleParser()
		{
			return (::System::Net::HeaderParser**)Il2CppClass::FromTypeDefinitionIndex(HeaderInfoTable_TypeDefinitionIndex)->GetStaticField(0x2C38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::String*>* ParseSingleValue(::System::String* value)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_PARSESINGLEVALUE_OFFSET))(value);
		}

		static ::Il2CppArray<::System::String*>* ParseMultiValue(::System::String* value)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_PARSEMULTIVALUE_OFFSET))(value);
		}

		::System::Net::HeaderInfo* get_Item(::System::String* name)
		{
			return ((::System::Net::HeaderInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_GET_ITEM_OFFSET))(this, name);
		}
	};
}
