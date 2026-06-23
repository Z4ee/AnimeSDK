#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/InternalCodePageDataItem.h"
#include "unitysdk/System/Globalization/InternalEncodingDataItem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Globalization { class CodePageDataItem; }
namespace System::Text { class EncodingInfo; }

#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_ENC_OFFSET UNITYSDK_OFFSET(0x1BA11390)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEDATAITEM_OFFSET UNITYSDK_OFFSET(0x1BA19D10)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEFROMNAME_OFFSET UNITYSDK_OFFSET(0x1BA19B60)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETENCODINGS_OFFSET UNITYSDK_OFFSET(0x1BA197E0)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETNUMENCODINGITEMS_OFFSET UNITYSDK_OFFSET(0x1BA11310)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_INTERNALGETCODEPAGEFROMNAME_OFFSET UNITYSDK_OFFSET(0x1BA19500)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_MAPCODEPAGEDATAITEM_OFFSET UNITYSDK_OFFSET(0x1BA113B0)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA113D0)

namespace System::Globalization
{
	inline static constexpr unsigned int EncodingTable_TypeDefinitionIndex = 771;

	class EncodingTable : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_hashByName()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0xEC0);
		}
		static ::Il2CppArray<::System::Globalization::InternalCodePageDataItem>** StaticGet_codePageDataPtr()
		{
			return (::Il2CppArray<::System::Globalization::InternalCodePageDataItem>**)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0xEC8);
		}
		static ::System::Collections::Hashtable** StaticGet_hashByCodePage()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0xED0);
		}
		static ::Il2CppArray<::System::Globalization::InternalEncodingDataItem>** StaticGet_encodingDataPtr()
		{
			return (::Il2CppArray<::System::Globalization::InternalEncodingDataItem>**)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0xED8);
		}
		static ::System::Int32* StaticGet_lastEncodingItem()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x480);
		}
		static ::System::Int32* StaticGet_lastCodePageItem()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x484);
		}
		// static const ::System::Int32 MIMECONTF_MAILNEWS = 0x1; // 0x0
		// static const ::System::Int32 MIMECONTF_BROWSER = 0x2; // 0x0
		// static const ::System::Int32 MIMECONTF_MINIMAL = 0x4; // 0x0
		// static const ::System::Int32 MIMECONTF_IMPORT = 0x8; // 0x0
		// static const ::System::Int32 MIMECONTF_SAVABLE_MAILNEWS = 0x100; // 0x0
		// static const ::System::Int32 MIMECONTF_SAVABLE_BROWSER = 0x200; // 0x0
		// static const ::System::Int32 MIMECONTF_EXPORT = 0x400; // 0x0
		// static const ::System::Int32 MIMECONTF_PRIVCONVERTER = 0x10000; // 0x0
		// static const ::System::Int32 MIMECONTF_VALID = 0x20000; // 0x0
		// static const ::System::Int32 MIMECONTF_VALID_NLS = 0x40000; // 0x0
		// static const ::System::Int32 MIMECONTF_MIME_IE4 = 0x10000000; // 0x0
		// static const ::System::Int32 MIMECONTF_MIME_LATEST = 0x20000000; // 0x0
		// static const ::System::Int32 MIMECONTF_MIME_REGISTRY = 0x40000000; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetNumEncodingItems()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETNUMENCODINGITEMS_OFFSET))();
		}

		static ::System::Globalization::InternalEncodingDataItem ENC(::System::String* name, ::System::UInt16 cp)
		{
			return ((::System::Globalization::InternalEncodingDataItem(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_ENC_OFFSET))(name, cp);
		}

		static ::System::Globalization::InternalCodePageDataItem MapCodePageDataItem(::System::UInt16 cp, ::System::UInt16 fcp, ::System::String* names, ::System::UInt32 flags)
		{
			return ((::System::Globalization::InternalCodePageDataItem(*)(::System::UInt16, ::System::UInt16, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_MAPCODEPAGEDATAITEM_OFFSET))(cp, fcp, names, flags);
		}

		static ::System::Int32 internalGetCodePageFromName(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_INTERNALGETCODEPAGEFROMNAME_OFFSET))(name);
		}

		static ::Il2CppArray<::System::Text::EncodingInfo*>* GetEncodings()
		{
			return ((::Il2CppArray<::System::Text::EncodingInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETENCODINGS_OFFSET))();
		}

		static ::System::Int32 GetCodePageFromName(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEFROMNAME_OFFSET))(name);
		}

		static ::System::Globalization::CodePageDataItem* GetCodePageDataItem(::System::Int32 codepage)
		{
			return ((::System::Globalization::CodePageDataItem*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEDATAITEM_OFFSET))(codepage);
		}
	};
}
