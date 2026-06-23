#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NameValueCollection.h"

namespace System { class String; }
namespace System::Net::Mime { class MimeBasePart; }

#define SYSTEM_NET_MIME_HEADERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1C2EBCD0)
#define SYSTEM_NET_MIME_HEADERCOLLECTION_GETVALUES_OFFSET UNITYSDK_OFFSET(0x1C2EB4E0)
#define SYSTEM_NET_MIME_HEADERCOLLECTION_GET_OFFSET UNITYSDK_OFFSET(0x1C2EB240)
#define SYSTEM_NET_MIME_HEADERCOLLECTION_INTERNALADD_OFFSET UNITYSDK_OFFSET(0x1C2EB7A0)
#define SYSTEM_NET_MIME_HEADERCOLLECTION_INTERNALREMOVE_OFFSET UNITYSDK_OFFSET(0x1C2EB780)
#define SYSTEM_NET_MIME_HEADERCOLLECTION_INTERNALSET_OFFSET UNITYSDK_OFFSET(0x1C2EB790)
#define SYSTEM_NET_MIME_HEADERCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C2EB030)
#define SYSTEM_NET_MIME_HEADERCOLLECTION_SET_OFFSET UNITYSDK_OFFSET(0x1C2EB820)
#define SYSTEM_NET_MIME_HEADERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2EAFC0)

namespace System::Net::Mime
{
	inline static constexpr unsigned int HeaderCollection_TypeDefinitionIndex = 3615;

	class HeaderCollection : public ::System::Collections::Specialized::NameValueCollection
	{
	public:
		::System::Net::Mime::MimeBasePart* part; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_HEADERCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Remove(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_HEADERCOLLECTION_REMOVE_OFFSET))(this, name);
		}

		::System::String* Get(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_HEADERCOLLECTION_GET_OFFSET))(this, name);
		}

		::Il2CppArray<::System::String*>* GetValues(::System::String* name)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_HEADERCOLLECTION_GETVALUES_OFFSET))(this, name);
		}

		::System::Void InternalRemove(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_HEADERCOLLECTION_INTERNALREMOVE_OFFSET))(this, name);
		}

		::System::Void InternalSet(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_HEADERCOLLECTION_INTERNALSET_OFFSET))(this, name, value);
		}

		::System::Void InternalAdd(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_HEADERCOLLECTION_INTERNALADD_OFFSET))(this, name, value);
		}

		::System::Void Set(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_HEADERCOLLECTION_SET_OFFSET))(this, name, value);
		}

		::System::Void Add(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_HEADERCOLLECTION_ADD_OFFSET))(this, name, value);
		}
	};
}
