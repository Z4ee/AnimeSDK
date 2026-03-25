#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CultureInfo_Data.h"
#include "unitysdk/System/Globalization/CultureTypes.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Globalization { class Calendar; }
namespace System::Globalization { class CompareInfo; }
namespace System::Globalization { class CultureData; }
namespace System::Globalization { class DateTimeFormatInfo; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::Globalization { class TextInfo; }

#define SYSTEM_GLOBALIZATION_CULTUREINFO_CHECKDOMAINSAFETYOBJECT_OFFSET UNITYSDK_OFFSET(0x162F8100)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CHECKNEUTRAL_OFFSET UNITYSDK_OFFSET(0x162F4670)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x162F3B00)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCTCURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x162F2D60)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCTCURRENTUICULTURE_OFFSET UNITYSDK_OFFSET(0x162F31D0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCTINVARIANT_OFFSET UNITYSDK_OFFSET(0x162F4F40)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCT_INTERNAL_LOCALE_FROM_LCID_OFFSET UNITYSDK_OFFSET(0x162F4ED0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCT_INTERNAL_LOCALE_FROM_NAME_OFFSET UNITYSDK_OFFSET(0x162F4F30)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x162F3330)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CREATECALENDAR_OFFSET UNITYSDK_OFFSET(0x162F3390)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CREATECULTURE_OFFSET UNITYSDK_OFFSET(0x162F5D70)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CREATENOTFOUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x162F5AC0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CREATESPECIFICCULTUREFROMNEUTRAL_OFFSET UNITYSDK_OFFSET(0x162F5DC0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CREATESPECIFICCULTURE_OFFSET UNITYSDK_OFFSET(0x162F2E10)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CREATETEXTINFO_OFFSET UNITYSDK_OFFSET(0x162F3AC0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x162F3F70)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTUREINFO_1_OFFSET UNITYSDK_OFFSET(0x162EE270)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTUREINFO_OFFSET UNITYSDK_OFFSET(0x162EF5F0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTURES_OFFSET UNITYSDK_OFFSET(0x162F3FE0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x162F4E40)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x162F4480)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETTEXTINFODATA_OFFSET UNITYSDK_OFFSET(0x162F4400)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CALENDARTYPE_OFFSET UNITYSDK_OFFSET(0x162F4420)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CALENDAR_OFFSET UNITYSDK_OFFSET(0x162F32A0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_COMPAREINFO_OFFSET UNITYSDK_OFFSET(0x162F44A0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x162F2C60)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CURRENTUICULTURE_OFFSET UNITYSDK_OFFSET(0x162F2CE0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CURRENT_LOCALE_NAME_OFFSET UNITYSDK_OFFSET(0x162F2E00)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DATETIMEFORMAT_OFFSET UNITYSDK_OFFSET(0x162F4BA0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DEFAULTTHREADCURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x162F7F50)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DEFAULTTHREADCURRENTUICULTURE_OFFSET UNITYSDK_OFFSET(0x162F7F90)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x162F4DC0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_HASINVARIANTCULTURENAME_OFFSET UNITYSDK_OFFSET(0x162F8260)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_INVARIANTCULTURE_OFFSET UNITYSDK_OFFSET(0x162F2C40)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_ISNEUTRALCULTURE_OFFSET UNITYSDK_OFFSET(0x162F45F0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x162F4E30)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_LCID_OFFSET UNITYSDK_OFFSET(0x162F3280)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x162F3290)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_NUMBERFORMAT_OFFSET UNITYSDK_OFFSET(0x162F4680)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x162F36C0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_SORTNAME_OFFSET UNITYSDK_OFFSET(0x162F7FB0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_TERRITORY_OFFSET UNITYSDK_OFFSET(0x162F3270)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_TEXTINFO_OFFSET UNITYSDK_OFFSET(0x162F3950)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_USERDEFAULTCULTURE_OFFSET UNITYSDK_OFFSET(0x162F8060)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_USERDEFAULTUICULTURE_OFFSET UNITYSDK_OFFSET(0x162F7FC0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_INSERT_INTO_SHARED_TABLES_OFFSET UNITYSDK_OFFSET(0x162F5B90)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_INTERNAL_GET_CULTURES_OFFSET UNITYSDK_OFFSET(0x162F43F0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_SET_DATETIMEFORMAT_OFFSET UNITYSDK_OFFSET(0x162F4CB0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_SET_DEFAULTTHREADCURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x162F7F70)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_SET_NUMBERFORMAT_OFFSET UNITYSDK_OFFSET(0x162F4A90)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x162F4490)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_VERIFYCULTURENAME_OFFSET UNITYSDK_OFFSET(0x162F82E0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x162F8420)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162F5300)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x162F5310)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_3_OFFSET UNITYSDK_OFFSET(0x162F3930)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_4_OFFSET UNITYSDK_OFFSET(0x162F20E0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_5_OFFSET UNITYSDK_OFFSET(0x162F5730)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_6_OFFSET UNITYSDK_OFFSET(0x162F5B80)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x162F3940)

namespace System::Globalization
{
	inline static constexpr unsigned int CultureInfo_TypeDefinitionIndex = 786;

	class CultureInfo : public ::System::Object
	{
	public:
		static ::System::Globalization::CultureInfo** StaticGet_invariant_culture_info()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x45C0);
		}
		static ::System::Object** StaticGet_shared_table_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x45C8);
		}
		static ::System::Globalization::CultureInfo** StaticGet_s_DefaultThreadCurrentCulture()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x45D0);
		}
		static ::System::Globalization::CultureInfo** StaticGet_s_DefaultThreadCurrentUICulture()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x45D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Globalization::CultureInfo*>** StaticGet_shared_by_name()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Globalization::CultureInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x45E0);
		}
		static ::System::Globalization::CultureInfo** StaticGet_default_current_culture()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x45E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Globalization::CultureInfo*>** StaticGet_shared_by_number()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Globalization::CultureInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x45F0);
		}
		static ::System::Boolean* StaticGet_IsTaiwanSku()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x2650);
		}
		// static const ::System::Int32 InvariantCultureId = 0x7F; // 0x0
		// static const ::System::Int32 CalendarTypeBits = 0x8; // 0x0
		// static const ::System::String* MSG_READONLY; // 0x0
		::System::Boolean m_isReadOnly; // 0x10
		::System::Int32 cultureID; // 0x14
		::System::Int32 parent_lcid; // 0x18
		::System::Int32 datetime_index; // 0x1C
		::System::Int32 number_index; // 0x20
		::System::Int32 default_calendar_type; // 0x24
		::System::Boolean m_useUserOverride; // 0x28
		::System::Globalization::NumberFormatInfo* numInfo; // 0x30
		::System::Globalization::DateTimeFormatInfo* dateTimeInfo; // 0x38
		::System::Globalization::TextInfo* textInfo; // 0x40
		::System::String* m_name; // 0x48
		::System::String* englishname; // 0x50
		::System::String* nativename; // 0x58
		::System::String* iso3lang; // 0x60
		::System::String* iso2lang; // 0x68
		::System::String* win3lang; // 0x70
		::System::String* territory; // 0x78
		::Il2CppArray<::System::String*>* native_calendar_names; // 0x80
		::System::Globalization::CompareInfo* compareInfo; // 0x88
		::System::Void* textinfo_data; // 0x90
		::System::Int32 m_dataItem; // 0x98
		::System::Globalization::Calendar* calendar; // 0xA0
		::System::Globalization::CultureInfo* parent_culture; // 0xA8
		::System::Boolean constructed; // 0xB0
		::Il2CppArray<::System::Byte>* cached_serialized_form; // 0xB8
		::System::Globalization::CultureData* m_cultureData; // 0xC0
		::System::Boolean m_isInherited; // 0xC8

		::System::Void _ctor(::System::Int32 culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_OFFSET))(this, culture);
		}

		::System::Void _ctor_1(::System::Int32 culture, ::System::Boolean useUserOverride)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_1_OFFSET))(this, culture, useUserOverride);
		}

		::System::Void _ctor_2(::System::Int32 culture, ::System::Boolean useUserOverride, ::System::Boolean read_only)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_2_OFFSET))(this, culture, useUserOverride, read_only);
		}

		::System::Void _ctor_3(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_3_OFFSET))(this, name);
		}

		::System::Void _ctor_4(::System::String* name, ::System::Boolean useUserOverride)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_4_OFFSET))(this, name, useUserOverride);
		}

		::System::Void _ctor_5(::System::String* name, ::System::Boolean useUserOverride, ::System::Boolean read_only)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_5_OFFSET))(this, name, useUserOverride, read_only);
		}

		::System::Void _ctor_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_6_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CCTOR_OFFSET))();
		}

		static ::System::Globalization::CultureInfo* get_InvariantCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_INVARIANTCULTURE_OFFSET))();
		}

		static ::System::Globalization::CultureInfo* get_CurrentCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CURRENTCULTURE_OFFSET))();
		}

		static ::System::Globalization::CultureInfo* get_CurrentUICulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CURRENTUICULTURE_OFFSET))();
		}

		static ::System::Globalization::CultureInfo* ConstructCurrentCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCTCURRENTCULTURE_OFFSET))();
		}

		static ::System::Globalization::CultureInfo* ConstructCurrentUICulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCTCURRENTUICULTURE_OFFSET))();
		}

		::System::String* get_Territory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_TERRITORY_OFFSET))(this);
		}

		::System::Int32 get_LCID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_LCID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_NAME_OFFSET))(this);
		}

		::System::Globalization::Calendar* get_Calendar()
		{
			return ((::System::Globalization::Calendar*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CALENDAR_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* get_Parent()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_PARENT_OFFSET))(this);
		}

		::System::Globalization::TextInfo* get_TextInfo()
		{
			return ((::System::Globalization::TextInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_TEXTINFO_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_EQUALS_OFFSET))(this, value);
		}

		static ::Il2CppArray<::System::Globalization::CultureInfo*>* GetCultures(::System::Globalization::CultureTypes types)
		{
			return ((::Il2CppArray<::System::Globalization::CultureInfo*>*(*)(::System::Globalization::CultureTypes))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTURES_OFFSET))(types);
		}

		::System::Globalization::CultureInfo_Data GetTextInfoData()
		{
			return ((::System::Globalization::CultureInfo_Data(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETTEXTINFODATA_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_TOSTRING_OFFSET))(this);
		}

		::System::Globalization::CompareInfo* get_CompareInfo()
		{
			return ((::System::Globalization::CompareInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_COMPAREINFO_OFFSET))(this);
		}

		::System::Boolean get_IsNeutralCulture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_ISNEUTRALCULTURE_OFFSET))(this);
		}

		::System::Void CheckNeutral()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CHECKNEUTRAL_OFFSET))(this);
		}

		::System::Globalization::NumberFormatInfo* get_NumberFormat()
		{
			return ((::System::Globalization::NumberFormatInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_NUMBERFORMAT_OFFSET))(this);
		}

		::System::Void set_NumberFormat(::System::Globalization::NumberFormatInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_SET_NUMBERFORMAT_OFFSET))(this, value);
		}

		::System::Globalization::DateTimeFormatInfo* get_DateTimeFormat()
		{
			return ((::System::Globalization::DateTimeFormatInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DATETIMEFORMAT_OFFSET))(this);
		}

		::System::Void set_DateTimeFormat(::System::Globalization::DateTimeFormatInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_SET_DATETIMEFORMAT_OFFSET))(this, value);
		}

		::System::String* get_EnglishName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_ENGLISHNAME_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Object* GetFormat(::System::Type* formatType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETFORMAT_OFFSET))(this, formatType);
		}

		::System::Void Construct()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCT_OFFSET))(this);
		}

		::System::Boolean construct_internal_locale_from_lcid(::System::Int32 lcid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCT_INTERNAL_LOCALE_FROM_LCID_OFFSET))(this, lcid);
		}

		::System::Boolean construct_internal_locale_from_name(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCT_INTERNAL_LOCALE_FROM_NAME_OFFSET))(this, name);
		}

		static ::System::String* get_current_locale_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CURRENT_LOCALE_NAME_OFFSET))();
		}

		static ::Il2CppArray<::System::Globalization::CultureInfo*>* internal_get_cultures(::System::Boolean neutral, ::System::Boolean specific, ::System::Boolean installed)
		{
			return ((::Il2CppArray<::System::Globalization::CultureInfo*>*(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_INTERNAL_GET_CULTURES_OFFSET))(neutral, specific, installed);
		}

		::System::Void ConstructInvariant(::System::Boolean read_only)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCTINVARIANT_OFFSET))(this, read_only);
		}

		::System::Globalization::TextInfo* CreateTextInfo(::System::Boolean readOnly)
		{
			return ((::System::Globalization::TextInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CREATETEXTINFO_OFFSET))(this, readOnly);
		}

		static ::System::Void insert_into_shared_tables(::System::Globalization::CultureInfo* c)
		{
			return ((::System::Void(*)(::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_INSERT_INTO_SHARED_TABLES_OFFSET))(c);
		}

		static ::System::Globalization::CultureInfo* GetCultureInfo(::System::Int32 culture)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTUREINFO_OFFSET))(culture);
		}

		static ::System::Globalization::CultureInfo* GetCultureInfo_1(::System::String* name)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTUREINFO_1_OFFSET))(name);
		}

		static ::System::Globalization::CultureInfo* CreateCulture(::System::String* name, ::System::Boolean reference)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CREATECULTURE_OFFSET))(name, reference);
		}

		static ::System::Globalization::CultureInfo* CreateSpecificCulture(::System::String* name)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CREATESPECIFICCULTURE_OFFSET))(name);
		}

		static ::System::Globalization::CultureInfo* CreateSpecificCultureFromNeutral(::System::String* name)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CREATESPECIFICCULTUREFROMNEUTRAL_OFFSET))(name);
		}

		::System::Int32 get_CalendarType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CALENDARTYPE_OFFSET))(this);
		}

		static ::System::Globalization::Calendar* CreateCalendar(::System::Int32 calendarType)
		{
			return ((::System::Globalization::Calendar*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CREATECALENDAR_OFFSET))(calendarType);
		}

		static ::System::Exception* CreateNotFoundException(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CREATENOTFOUNDEXCEPTION_OFFSET))(name);
		}

		static ::System::Globalization::CultureInfo* get_DefaultThreadCurrentCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DEFAULTTHREADCURRENTCULTURE_OFFSET))();
		}

		static ::System::Void set_DefaultThreadCurrentCulture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_SET_DEFAULTTHREADCURRENTCULTURE_OFFSET))(value);
		}

		static ::System::Globalization::CultureInfo* get_DefaultThreadCurrentUICulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DEFAULTTHREADCURRENTUICULTURE_OFFSET))();
		}

		::System::String* get_SortName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_SORTNAME_OFFSET))(this);
		}

		static ::System::Globalization::CultureInfo* get_UserDefaultUICulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_USERDEFAULTUICULTURE_OFFSET))();
		}

		static ::System::Globalization::CultureInfo* get_UserDefaultCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_USERDEFAULTCULTURE_OFFSET))();
		}

		static ::System::Void CheckDomainSafetyObject(::System::Object* obj, ::System::Object* container)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CHECKDOMAINSAFETYOBJECT_OFFSET))(obj, container);
		}

		::System::Boolean get_HasInvariantCultureName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_HASINVARIANTCULTURENAME_OFFSET))(this);
		}

		static ::System::Boolean VerifyCultureName(::System::String* cultureName, ::System::Boolean throwException)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_VERIFYCULTURENAME_OFFSET))(cultureName, throwException);
		}
	};
}
