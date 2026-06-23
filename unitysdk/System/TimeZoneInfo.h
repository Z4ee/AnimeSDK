#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/TimeZoneInfoOptions.h"
#include "unitysdk/System/TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION.h"
#include "unitysdk/System/TimeZoneInfo_TIME_ZONE_INFORMATION.h"
#include "unitysdk/System/TimeZoneInfo_TransitionTime.h"

namespace Microsoft::Win32 { class RegistryKey; }
namespace System { class String; }
namespace System { class TimeType; }
namespace System { class TimeZoneInfo_AdjustmentRule; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::IO { class Stream; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TIMEZONEINFO_BUILDFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x1B8D40B0)
#define SYSTEM_TIMEZONEINFO_CLEARCACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1B8D1FE0)
#define SYSTEM_TIMEZONEINFO_CONVERTTIMEFROMUTC_1_OFFSET UNITYSDK_OFFSET(0x1B8D2A60)
#define SYSTEM_TIMEZONEINFO_CONVERTTIMEFROMUTC_OFFSET UNITYSDK_OFFSET(0x1B8D2AD0)
#define SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_1_OFFSET UNITYSDK_OFFSET(0x1B8D2EE0)
#define SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_2_OFFSET UNITYSDK_OFFSET(0x1B8D2A50)
#define SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_3_OFFSET UNITYSDK_OFFSET(0x1B8D2FA0)
#define SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_OFFSET UNITYSDK_OFFSET(0x1B8D2E10)
#define SYSTEM_TIMEZONEINFO_CONVERTTIME_1_OFFSET UNITYSDK_OFFSET(0x1B8D2190)
#define SYSTEM_TIMEZONEINFO_CONVERTTIME_OFFSET UNITYSDK_OFFSET(0x1B8D2000)
#define SYSTEM_TIMEZONEINFO_CREATEADJUSTMENTRULEFROMTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1B8CD970)
#define SYSTEM_TIMEZONEINFO_CREATEADJUSTMENTRULE_OFFSET UNITYSDK_OFFSET(0x1B8CABF0)
#define SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_1_OFFSET UNITYSDK_OFFSET(0x1B8D3970)
#define SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_2_OFFSET UNITYSDK_OFFSET(0x1B8CC340)
#define SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1B8D1EC0)
#define SYSTEM_TIMEZONEINFO_CREATELOCALUNITY_OFFSET UNITYSDK_OFFSET(0x1B8CBC30)
#define SYSTEM_TIMEZONEINFO_CREATELOCAL_OFFSET UNITYSDK_OFFSET(0x1B8D0210)
#define SYSTEM_TIMEZONEINFO_DATETIMEFROMUNIXTIME_OFFSET UNITYSDK_OFFSET(0x1B8DA270)
#define SYSTEM_TIMEZONEINFO_ENUMDYNAMICTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1B8CC3E0)
#define SYSTEM_TIMEZONEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B8D3A80)
#define SYSTEM_TIMEZONEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B8D3A00)
#define SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYFILENAME_OFFSET UNITYSDK_OFFSET(0x1B8D16D0)
#define SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYIDWINRTFALLBACK_OFFSET UNITYSDK_OFFSET(0x1B8CF8D0)
#define SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYID_OFFSET UNITYSDK_OFFSET(0x1B8D1410)
#define SYSTEM_TIMEZONEINFO_FROMREGISTRYKEY_OFFSET UNITYSDK_OFFSET(0x1B8D3C20)
#define SYSTEM_TIMEZONEINFO_GETADJUSTMENTRULES_OFFSET UNITYSDK_OFFSET(0x1B8D4B20)
#define SYSTEM_TIMEZONEINFO_GETAPPLICABLERULE_OFFSET UNITYSDK_OFFSET(0x1B8D6260)
#define SYSTEM_TIMEZONEINFO_GETDATETIMENOWUTCOFFSETFROMUTC_OFFSET UNITYSDK_OFFSET(0x1B8D3810)
#define SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATIONEFFECTIVEYEARS_OFFSET UNITYSDK_OFFSET(0x1B8CCA70)
#define SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATIONWIN32_OFFSET UNITYSDK_OFFSET(0x1B8CC840)
#define SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1B8CC610)
#define SYSTEM_TIMEZONEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B8D4C40)
#define SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONEINFOWINRTFALLBACK_OFFSET UNITYSDK_OFFSET(0x1B8CF170)
#define SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONEKEYNAMEWIN32FALLBACK_OFFSET UNITYSDK_OFFSET(0x1B8CF6C0)
#define SYSTEM_TIMEZONEINFO_GETLOCALUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x1B8DA2B0)
#define SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONESCORE_OFFSET UNITYSDK_OFFSET(0x1B8D1870)
#define SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONESWINRTFALLBACK_OFFSET UNITYSDK_OFFSET(0x1B8CFD00)
#define SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONES_OFFSET UNITYSDK_OFFSET(0x1B8CFC20)
#define SYSTEM_TIMEZONEINFO_GETTIMEZONEINFORMATIONFORYEAR_OFFSET UNITYSDK_OFFSET(0x1B8CD190)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSETFROMUTC_OFFSET UNITYSDK_OFFSET(0x1B8D3910)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSETHELPER_OFFSET UNITYSDK_OFFSET(0x1B8D5150)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1B8D3440)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSET_2_OFFSET UNITYSDK_OFFSET(0x1B8DA380)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x1B8D2DF0)
#define SYSTEM_TIMEZONEINFO_GET_BASEUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x1B8D0150)
#define SYSTEM_TIMEZONEINFO_GET_LOCALZONEKEY_OFFSET UNITYSDK_OFFSET(0x1B8D1130)
#define SYSTEM_TIMEZONEINFO_GET_LOCAL_OFFSET UNITYSDK_OFFSET(0x1B8D0160)
#define SYSTEM_TIMEZONEINFO_GET_TIMEZONEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1B8D10D0)
#define SYSTEM_TIMEZONEINFO_GET_TIMEZONEKEY_OFFSET UNITYSDK_OFFSET(0x1B8D1DE0)
#define SYSTEM_TIMEZONEINFO_GET_UTC_OFFSET UNITYSDK_OFFSET(0x1B8CF600)
#define SYSTEM_TIMEZONEINFO_HASSAMERULES_OFFSET UNITYSDK_OFFSET(0x1B8D3AE0)
#define SYSTEM_TIMEZONEINFO_ISAMBIGUOUSLOCALDSTFROMUTC_OFFSET UNITYSDK_OFFSET(0x1B8D7030)
#define SYSTEM_TIMEZONEINFO_ISAMBIGUOUSTIME_OFFSET UNITYSDK_OFFSET(0x1B8D6930)
#define SYSTEM_TIMEZONEINFO_ISINDSTFORYEAR_OFFSET UNITYSDK_OFFSET(0x1B8D7470)
#define SYSTEM_TIMEZONEINFO_ISINDST_OFFSET UNITYSDK_OFFSET(0x1B8D67E0)
#define SYSTEM_TIMEZONEINFO_ISINVALIDTIME_OFFSET UNITYSDK_OFFSET(0x1B8D2790)
#define SYSTEM_TIMEZONEINFO_PARSEABBREVIATIONS_OFFSET UNITYSDK_OFFSET(0x1B8D9990)
#define SYSTEM_TIMEZONEINFO_PARSEREGTZI_OFFSET UNITYSDK_OFFSET(0x1B8D4210)
#define SYSTEM_TIMEZONEINFO_PARSETIMESTYPES_OFFSET UNITYSDK_OFFSET(0x1B8D9D40)
#define SYSTEM_TIMEZONEINFO_PARSETRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1B8DA020)
#define SYSTEM_TIMEZONEINFO_PARSETZBUFFER_OFFSET UNITYSDK_OFFSET(0x1B8D83A0)
#define SYSTEM_TIMEZONEINFO_READBIGENDIANINT32_OFFSET UNITYSDK_OFFSET(0x1B8D9970)
#define SYSTEM_TIMEZONEINFO_READLINK_1_OFFSET UNITYSDK_OFFSET(0x1B8D0B60)
#define SYSTEM_TIMEZONEINFO_READLINK_OFFSET UNITYSDK_OFFSET(0x1B8D0AB0)
#define SYSTEM_TIMEZONEINFO_SWAPINT32_OFFSET UNITYSDK_OFFSET(0x1B8D9960)
#define SYSTEM_TIMEZONEINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1B8D76B0)
#define SYSTEM_TIMEZONEINFO_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B8D4E20)
#define SYSTEM_TIMEZONEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B8D7D00)
#define SYSTEM_TIMEZONEINFO_TRANSITIONPOINT_OFFSET UNITYSDK_OFFSET(0x1B8D6DB0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIMEFROMTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1B8CDDF0)
#define SYSTEM_TIMEZONEINFO_TRIMSPECIAL_OFFSET UNITYSDK_OFFSET(0x1B8D1210)
#define SYSTEM_TIMEZONEINFO_TRYADDTICKS_OFFSET UNITYSDK_OFFSET(0x1B8D1F40)
#define SYSTEM_TIMEZONEINFO_TRYCREATETIMEZONE_OFFSET UNITYSDK_OFFSET(0x1B8CDFF0)
#define SYSTEM_TIMEZONEINFO_TRYGETNAMEFROMPATH_OFFSET UNITYSDK_OFFSET(0x1B8D0E00)
#define SYSTEM_TIMEZONEINFO_TRYGETTRANSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1B8D5740)
#define SYSTEM_TIMEZONEINFO_UTCOFFSETOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1B8CABB0)
#define SYSTEM_TIMEZONEINFO_VALIDATERULES_OFFSET UNITYSDK_OFFSET(0x1B8D4930)
#define SYSTEM_TIMEZONEINFO_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1B8D7790)
#define SYSTEM_TIMEZONEINFO_VALIDTZFILE_OFFSET UNITYSDK_OFFSET(0x1B8D80F0)
#define SYSTEM_TIMEZONEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B8CEB90)
#define SYSTEM_TIMEZONEINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B8DA3A0)
#define SYSTEM_TIMEZONEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8D7D10)

namespace System
{
	inline static constexpr unsigned int TimeZoneInfo_TypeDefinitionIndex = 331;

	class TimeZoneInfo : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_timeZoneDirectory()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x7C0);
		}
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>** StaticGet_systemTimeZones()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x7C8);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_timeZoneKey()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x7D0);
		}
		static ::System::TimeZoneInfo** StaticGet_utc()
		{
			return (::System::TimeZoneInfo**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x7D8);
		}
		static ::System::TimeZoneInfo** StaticGet_local()
		{
			return (::System::TimeZoneInfo**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x7E0);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_localZoneKey()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x7E8);
		}
		static ::System::Boolean* StaticGet_readlinkNotFound()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x1C0);
		}
		::System::String* standardDisplayName; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime, ::System::TimeType*>>* transitions; // 0x18
		::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules; // 0x20
		::System::String* daylightDisplayName; // 0x28
		::System::String* displayName; // 0x30
		::System::String* id; // 0x38
		::System::TimeSpan baseUtcOffset; // 0x40
		::System::Boolean supportsDaylightSavingTime; // 0x48

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1(::System::String* id, ::System::TimeSpan baseUtcOffset, ::System::String* displayName, ::System::String* standardDisplayName, ::System::String* daylightDisplayName, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules, ::System::Boolean disableDaylightSavingTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::TimeSpan, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO__CTOR_1_OFFSET))(this, id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO__CTOR_2_OFFSET))(this);
		}

		static ::System::Boolean UtcOffsetOutOfRange(::System::TimeSpan offset)
		{
			return ((::System::Boolean(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_UTCOFFSETOUTOFRANGE_OFFSET))(offset);
		}

		static ::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>* CreateAdjustmentRule(::System::Int32 year, ::Il2CppArray<::System::Int64>*& data, ::Il2CppArray<::System::String*>*& names, ::System::String* standardNameCurrentYear, ::System::String* daylightNameCurrentYear)
		{
			return ((::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>*(*)(::System::Int32, ::Il2CppArray<::System::Int64>*&, ::Il2CppArray<::System::String*>*&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATEADJUSTMENTRULE_OFFSET))(year, data, names, standardNameCurrentYear, daylightNameCurrentYear);
		}

		static ::System::TimeZoneInfo* CreateLocalUnity()
		{
			return ((::System::TimeZoneInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATELOCALUNITY_OFFSET))();
		}

		static ::System::UInt32 EnumDynamicTimeZoneInformation(::System::UInt32 dwIndex, ::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ENUMDYNAMICTIMEZONEINFORMATION_OFFSET))(dwIndex, lpTimeZoneInformation);
		}

		static ::System::UInt32 GetDynamicTimeZoneInformation(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation)
		{
			return ((::System::UInt32(*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATION_OFFSET))(pTimeZoneInformation);
		}

		static ::System::UInt32 GetDynamicTimeZoneInformationWin32(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation)
		{
			return ((::System::UInt32(*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATIONWIN32_OFFSET))(pTimeZoneInformation);
		}

		static ::System::UInt32 GetDynamicTimeZoneInformationEffectiveYears(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation, ::System::UInt32& FirstYear, ::System::UInt32& LastYear)
		{
			return ((::System::UInt32(*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATIONEFFECTIVEYEARS_OFFSET))(lpTimeZoneInformation, FirstYear, LastYear);
		}

		static ::System::Boolean GetTimeZoneInformationForYear(::System::UInt16 wYear, ::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& pdtzi, ::System::TimeZoneInfo_TIME_ZONE_INFORMATION& ptzi)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION&, ::System::TimeZoneInfo_TIME_ZONE_INFORMATION&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETTIMEZONEINFORMATIONFORYEAR_OFFSET))(wYear, pdtzi, ptzi);
		}

		static ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRuleFromTimeZoneInformation(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& timeZoneInformation, ::System::DateTime startDate, ::System::DateTime endDate, ::System::Int32 defaultBaseUtcOffset)
		{
			return ((::System::TimeZoneInfo_AdjustmentRule*(*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION&, ::System::DateTime, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATEADJUSTMENTRULEFROMTIMEZONEINFORMATION_OFFSET))(timeZoneInformation, startDate, endDate, defaultBaseUtcOffset);
		}

		static ::System::Boolean TransitionTimeFromTimeZoneInformation(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, ::System::TimeZoneInfo_TransitionTime& transitionTime, ::System::Boolean readStartDate)
		{
			return ((::System::Boolean(*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION, ::System::TimeZoneInfo_TransitionTime&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIMEFROMTIMEZONEINFORMATION_OFFSET))(timeZoneInformation, transitionTime, readStartDate);
		}

		static ::System::TimeZoneInfo* TryCreateTimeZone(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation)
		{
			return ((::System::TimeZoneInfo*(*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYCREATETIMEZONE_OFFSET))(timeZoneInformation);
		}

		static ::System::TimeZoneInfo* GetLocalTimeZoneInfoWinRTFallback()
		{
			return ((::System::TimeZoneInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONEINFOWINRTFALLBACK_OFFSET))();
		}

		static ::System::String* GetLocalTimeZoneKeyNameWin32Fallback()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONEKEYNAMEWIN32FALLBACK_OFFSET))();
		}

		static ::System::TimeZoneInfo* FindSystemTimeZoneByIdWinRTFallback(::System::String* id)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYIDWINRTFALLBACK_OFFSET))(id);
		}

		static ::System::Collections::Generic::List_1<::System::TimeZoneInfo*>* GetSystemTimeZonesWinRTFallback()
		{
			return ((::System::Collections::Generic::List_1<::System::TimeZoneInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONESWINRTFALLBACK_OFFSET))();
		}

		::System::TimeSpan get_BaseUtcOffset()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_BASEUTCOFFSET_OFFSET))(this);
		}

		static ::System::TimeZoneInfo* get_Local()
		{
			return ((::System::TimeZoneInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_LOCAL_OFFSET))();
		}

		static ::System::Int32 readlink(::System::String* path, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 buflen)
		{
			return ((::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_READLINK_OFFSET))(path, buffer, buflen);
		}

		static ::System::String* readlink_1(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_READLINK_1_OFFSET))(path);
		}

		static ::System::Boolean TryGetNameFromPath(::System::String* path, ::System::String*& name)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYGETNAMEFROMPATH_OFFSET))(path, name);
		}

		static ::System::TimeZoneInfo* CreateLocal()
		{
			return ((::System::TimeZoneInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATELOCAL_OFFSET))();
		}

		static ::System::Void GetSystemTimeZonesCore(::System::Collections::Generic::List_1<::System::TimeZoneInfo*>* systemTimeZones)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::TimeZoneInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONESCORE_OFFSET))(systemTimeZones);
		}

		static ::System::TimeZoneInfo* get_Utc()
		{
			return ((::System::TimeZoneInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_UTC_OFFSET))();
		}

		static ::System::String* get_TimeZoneDirectory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_TIMEZONEDIRECTORY_OFFSET))();
		}

		static ::System::String* TrimSpecial(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRIMSPECIAL_OFFSET))(str);
		}

		static ::Microsoft::Win32::RegistryKey* get_TimeZoneKey()
		{
			return ((::Microsoft::Win32::RegistryKey*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_TIMEZONEKEY_OFFSET))();
		}

		static ::Microsoft::Win32::RegistryKey* get_LocalZoneKey()
		{
			return ((::Microsoft::Win32::RegistryKey*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_LOCALZONEKEY_OFFSET))();
		}

		static ::System::Boolean TryAddTicks(::System::DateTime date, ::System::Int64 ticks, ::System::DateTime& result, ::System::DateTimeKind kind)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::Int64, ::System::DateTime&, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYADDTICKS_OFFSET))(date, ticks, result, kind);
		}

		static ::System::Void ClearCachedData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CLEARCACHEDDATA_OFFSET))();
		}

		static ::System::DateTime ConvertTime(::System::DateTime dateTime, ::System::TimeZoneInfo* destinationTimeZone)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIME_OFFSET))(dateTime, destinationTimeZone);
		}

		static ::System::DateTime ConvertTime_1(::System::DateTime dateTime, ::System::TimeZoneInfo* sourceTimeZone, ::System::TimeZoneInfo* destinationTimeZone)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIME_1_OFFSET))(dateTime, sourceTimeZone, destinationTimeZone);
		}

		::System::DateTime ConvertTimeFromUtc(::System::DateTime dateTime)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIMEFROMUTC_OFFSET))(this, dateTime);
		}

		static ::System::DateTime ConvertTimeFromUtc_1(::System::DateTime dateTime, ::System::TimeZoneInfo* destinationTimeZone)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIMEFROMUTC_1_OFFSET))(dateTime, destinationTimeZone);
		}

		static ::System::DateTime ConvertTimeToUtc(::System::DateTime dateTime)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_OFFSET))(dateTime);
		}

		static ::System::DateTime ConvertTimeToUtc_1(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeZoneInfoOptions))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_1_OFFSET))(dateTime, flags);
		}

		static ::System::DateTime ConvertTimeToUtc_2(::System::DateTime dateTime, ::System::TimeZoneInfo* sourceTimeZone)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_2_OFFSET))(dateTime, sourceTimeZone);
		}

		static ::System::DateTime ConvertTimeToUtc_3(::System::DateTime dateTime, ::System::TimeZoneInfo* sourceTimeZone, ::System::TimeZoneInfoOptions flags)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_3_OFFSET))(dateTime, sourceTimeZone, flags);
		}

		static ::System::TimeSpan GetDateTimeNowUtcOffsetFromUtc(::System::DateTime time, ::System::Boolean& isAmbiguousLocalDst)
		{
			return ((::System::TimeSpan(*)(::System::DateTime, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDATETIMENOWUTCOFFSETFROMUTC_OFFSET))(time, isAmbiguousLocalDst);
		}

		static ::System::TimeZoneInfo* CreateCustomTimeZone(::System::String* id, ::System::TimeSpan baseUtcOffset, ::System::String* displayName, ::System::String* standardDisplayName)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::System::TimeSpan, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_OFFSET))(id, baseUtcOffset, displayName, standardDisplayName);
		}

		static ::System::TimeZoneInfo* CreateCustomTimeZone_1(::System::String* id, ::System::TimeSpan baseUtcOffset, ::System::String* displayName, ::System::String* standardDisplayName, ::System::String* daylightDisplayName, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::System::TimeSpan, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_1_OFFSET))(id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules);
		}

		static ::System::TimeZoneInfo* CreateCustomTimeZone_2(::System::String* id, ::System::TimeSpan baseUtcOffset, ::System::String* displayName, ::System::String* standardDisplayName, ::System::String* daylightDisplayName, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules, ::System::Boolean disableDaylightSavingTime)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::System::TimeSpan, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_2_OFFSET))(id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::TimeZoneInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::TimeZoneInfo* FindSystemTimeZoneById(::System::String* id)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYID_OFFSET))(id);
		}

		static ::System::TimeZoneInfo* FindSystemTimeZoneByFileName(::System::String* id, ::System::String* filepath)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYFILENAME_OFFSET))(id, filepath);
		}

		static ::System::TimeZoneInfo* FromRegistryKey(::System::String* id, ::Microsoft::Win32::RegistryKey* key)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_FROMREGISTRYKEY_OFFSET))(id, key);
		}

		static ::System::Void ParseRegTzi(::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules, ::System::Int32 start_year, ::System::Int32 end_year, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_PARSEREGTZI_OFFSET))(adjustmentRules, start_year, end_year, buffer);
		}

		::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* GetAdjustmentRules()
		{
			return ((::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETADJUSTMENTRULES_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>* GetSystemTimeZones()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONES_OFFSET))();
		}

		::System::TimeSpan GetUtcOffset(::System::DateTime dateTime)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET))(this, dateTime);
		}

		::System::TimeSpan GetUtcOffset_1(::System::DateTime dateTime, ::System::Boolean& isDST, ::System::Boolean forOffset)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTime, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSET_1_OFFSET))(this, dateTime, isDST, forOffset);
		}

		static ::System::TimeSpan GetUtcOffsetHelper(::System::DateTime dateTime, ::System::TimeZoneInfo* tz, ::System::Boolean& isDST, ::System::Boolean forOffset)
		{
			return ((::System::TimeSpan(*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSETHELPER_OFFSET))(dateTime, tz, isDST, forOffset);
		}

		::System::Boolean HasSameRules(::System::TimeZoneInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_HASSAMERULES_OFFSET))(this, other);
		}

		::System::Boolean IsAmbiguousTime(::System::DateTime dateTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISAMBIGUOUSTIME_OFFSET))(this, dateTime);
		}

		::System::Boolean IsAmbiguousLocalDstFromUtc(::System::DateTime dateTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISAMBIGUOUSLOCALDSTFROMUTC_OFFSET))(this, dateTime);
		}

		::System::Boolean IsInDST(::System::TimeZoneInfo_AdjustmentRule* rule, ::System::DateTime dateTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeZoneInfo_AdjustmentRule*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISINDST_OFFSET))(this, rule, dateTime);
		}

		::System::Boolean IsInDSTForYear(::System::TimeZoneInfo_AdjustmentRule* rule, ::System::DateTime dateTime, ::System::Int32 year)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeZoneInfo_AdjustmentRule*, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISINDSTFORYEAR_OFFSET))(this, rule, dateTime, year);
		}

		::System::Boolean IsInvalidTime(::System::DateTime dateTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISINVALIDTIME_OFFSET))(this, dateTime);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		static ::System::Void Validate(::System::String* id, ::System::TimeSpan baseUtcOffset, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules)
		{
			return ((::System::Void(*)(::System::String*, ::System::TimeSpan, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_VALIDATE_OFFSET))(id, baseUtcOffset, adjustmentRules);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TOSTRING_OFFSET))(this);
		}

		::System::TimeZoneInfo_AdjustmentRule* GetApplicableRule(::System::DateTime dateTime)
		{
			return ((::System::TimeZoneInfo_AdjustmentRule*(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETAPPLICABLERULE_OFFSET))(this, dateTime);
		}

		::System::Boolean TryGetTransitionOffset(::System::DateTime dateTime, ::System::TimeSpan& offset, ::System::Boolean& isDst, ::System::Boolean forOffset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime, ::System::TimeSpan&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYGETTRANSITIONOFFSET_OFFSET))(this, dateTime, offset, isDst, forOffset);
		}

		static ::System::DateTime TransitionPoint(::System::TimeZoneInfo_TransitionTime transition, ::System::Int32 year)
		{
			return ((::System::DateTime(*)(::System::TimeZoneInfo_TransitionTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONPOINT_OFFSET))(transition, year);
		}

		static ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* ValidateRules(::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules)
		{
			return ((::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>*(*)(::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_VALIDATERULES_OFFSET))(adjustmentRules);
		}

		static ::System::TimeZoneInfo* BuildFromStream(::System::String* id, ::System::IO::Stream* stream)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_BUILDFROMSTREAM_OFFSET))(id, stream);
		}

		static ::System::Boolean ValidTZFile(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 length)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_VALIDTZFILE_OFFSET))(buffer, length);
		}

		static ::System::Int32 SwapInt32(::System::Int32 i)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_SWAPINT32_OFFSET))(i);
		}

		static ::System::Int32 ReadBigEndianInt32(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 start)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_READBIGENDIANINT32_OFFSET))(buffer, start);
		}

		static ::System::TimeZoneInfo* ParseTZBuffer(::System::String* id, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 length)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_PARSETZBUFFER_OFFSET))(id, buffer, length);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* ParseAbbreviations(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_PARSEABBREVIATIONS_OFFSET))(buffer, index, count);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::TimeType*>* ParseTimesTypes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* abbreviations)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::TimeType*>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_PARSETIMESTYPES_OFFSET))(buffer, index, count, abbreviations);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime, ::System::TimeType*>>* ParseTransitions(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::TimeType*>* time_types)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime, ::System::TimeType*>>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::TimeType*>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_PARSETRANSITIONS_OFFSET))(buffer, index, count, time_types);
		}

		static ::System::DateTime DateTimeFromUnixTime(::System::Int64 unix_time)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_DATETIMEFROMUNIXTIME_OFFSET))(unix_time);
		}

		static ::System::TimeSpan GetLocalUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags)
		{
			return ((::System::TimeSpan(*)(::System::DateTime, ::System::TimeZoneInfoOptions))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETLOCALUTCOFFSET_OFFSET))(dateTime, flags);
		}

		::System::TimeSpan GetUtcOffset_2(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTime, ::System::TimeZoneInfoOptions))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSET_2_OFFSET))(this, dateTime, flags);
		}

		static ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone, ::System::Boolean& isDaylightSavings, ::System::Boolean& isAmbiguousLocalDst)
		{
			return ((::System::TimeSpan(*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSETFROMUTC_OFFSET))(time, zone, isDaylightSavings, isAmbiguousLocalDst);
		}
	};
}
