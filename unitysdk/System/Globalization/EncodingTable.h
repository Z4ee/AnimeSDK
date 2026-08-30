#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/InternalCodePageDataItem.h"
#include "unitysdk/System/Globalization/InternalEncodingDataItem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Globalization { class CodePageDataItem; }
namespace System::Text { class EncodingInfo; }

#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_ENC_OFFSET UNITYSDK_OFFSET(0x1BD1D880)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEDATAITEM_OFFSET UNITYSDK_OFFSET(0x1BD243F0)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEFROMNAME_OFFSET UNITYSDK_OFFSET(0x1BD24190)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETENCODINGS_OFFSET UNITYSDK_OFFSET(0x1BD23E50)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETNUMENCODINGITEMS_OFFSET UNITYSDK_OFFSET(0x1BD1D830)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_INTERNALGETCODEPAGEFROMNAME_OFFSET UNITYSDK_OFFSET(0x1BD23BD0)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_MAPCODEPAGEDATAITEM_OFFSET UNITYSDK_OFFSET(0x1BD1D8A0)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD1D8C0)

namespace System::Globalization
{
	inline static constexpr unsigned int EncodingTable_TypeDefinitionIndex = 785;

	class EncodingTable : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_hashByName()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x7A70);
		}
		static ::Il2CppArray<::System::Globalization::InternalEncodingDataItem>** StaticGet_encodingDataPtr()
		{
			return (::Il2CppArray<::System::Globalization::InternalEncodingDataItem>**)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x7A78);
		}
		static ::System::Collections::Hashtable** StaticGet_hashByCodePage()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x7A80);
		}
		static ::Il2CppArray<::System::Globalization::InternalCodePageDataItem>** StaticGet_codePageDataPtr()
		{
			return (::Il2CppArray<::System::Globalization::InternalCodePageDataItem>**)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x7A88);
		}
		static ::System::Int32* StaticGet_lastEncodingItem()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x20F0);
		}
		static ::System::Int32* StaticGet_lastCodePageItem()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x20F4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetNumEncodingItems()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETNUMENCODINGITEMS_OFFSET))();
		}

		static ::System::Globalization::InternalEncodingDataItem ENC(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Globalization::InternalEncodingDataItem(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_ENC_OFFSET))(a1, a2);
		}

		static ::System::Globalization::InternalCodePageDataItem MapCodePageDataItem(::System::UInt16 a1, ::System::UInt16 a2, ::System::String* a3, ::System::UInt32 a4)
		{
			return ((::System::Globalization::InternalCodePageDataItem(*)(::System::UInt16, ::System::UInt16, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_MAPCODEPAGEDATAITEM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 internalGetCodePageFromName(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_INTERNALGETCODEPAGEFROMNAME_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Text::EncodingInfo*>* GetEncodings()
		{
			return ((::Il2CppArray<::System::Text::EncodingInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETENCODINGS_OFFSET))();
		}

		static ::System::Int32 GetCodePageFromName(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEFROMNAME_OFFSET))(a1);
		}

		static ::System::Globalization::CodePageDataItem* GetCodePageDataItem(::System::Int32 a1)
		{
			return ((::System::Globalization::CodePageDataItem*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEDATAITEM_OFFSET))(a1);
		}
	};
}
