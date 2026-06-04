#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Net { class HeaderInfo; }
namespace System::Net { class HeaderParser; }

#define SYSTEM_NET_HEADERINFOTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AF7DB10)
#define SYSTEM_NET_HEADERINFOTABLE_PARSEMULTIVALUE_OFFSET UNITYSDK_OFFSET(0x1AF7BC70)
#define SYSTEM_NET_HEADERINFOTABLE_PARSESINGLEVALUE_OFFSET UNITYSDK_OFFSET(0x1AF7BC30)
#define SYSTEM_NET_HEADERINFOTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF7BF50)
#define SYSTEM_NET_HEADERINFOTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF7DBE0)

namespace System::Net
{
	inline static constexpr unsigned int HeaderInfoTable_TypeDefinitionIndex = 2766;

	class HeaderInfoTable : public ::System::Object
	{
	public:
		static ::System::Net::HeaderParser** StaticGet_MultiParser()
		{
			return (::System::Net::HeaderParser**)Il2CppClass::FromTypeDefinitionIndex(HeaderInfoTable_TypeDefinitionIndex)->GetStaticField(0x24D20);
		}
		static ::System::Net::HeaderParser** StaticGet_SingleParser()
		{
			return (::System::Net::HeaderParser**)Il2CppClass::FromTypeDefinitionIndex(HeaderInfoTable_TypeDefinitionIndex)->GetStaticField(0x24D28);
		}
		static ::System::Collections::Hashtable** StaticGet_HeaderHashTable()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(HeaderInfoTable_TypeDefinitionIndex)->GetStaticField(0x24D30);
		}
		static ::System::Net::HeaderInfo** StaticGet_UnknownHeaderInfo()
		{
			return (::System::Net::HeaderInfo**)Il2CppClass::FromTypeDefinitionIndex(HeaderInfoTable_TypeDefinitionIndex)->GetStaticField(0x24D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::String*>* ParseSingleValue(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_PARSESINGLEVALUE_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* ParseMultiValue(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_PARSEMULTIVALUE_OFFSET))(a1);
		}

		::System::Net::HeaderInfo* get_Item(::System::String* a1)
		{
			return ((::System::Net::HeaderInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_GET_ITEM_OFFSET))(this, a1);
		}
	};
}
