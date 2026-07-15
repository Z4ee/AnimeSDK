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

#define SYSTEM_TIMEZONEINFO_BUILDFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x1A74C820)
#define SYSTEM_TIMEZONEINFO_CONVERTTIMEFROMUTC_1_OFFSET UNITYSDK_OFFSET(0x1A74B690)
#define SYSTEM_TIMEZONEINFO_CONVERTTIMEFROMUTC_OFFSET UNITYSDK_OFFSET(0x1A74B700)
#define SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_1_OFFSET UNITYSDK_OFFSET(0x1A74B680)
#define SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_2_OFFSET UNITYSDK_OFFSET(0x1A74BA10)
#define SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_OFFSET UNITYSDK_OFFSET(0x1A74B980)
#define SYSTEM_TIMEZONEINFO_CONVERTTIME_OFFSET UNITYSDK_OFFSET(0x1A74AFC0)
#define SYSTEM_TIMEZONEINFO_CREATEADJUSTMENTRULEFROMTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1A746820)
#define SYSTEM_TIMEZONEINFO_CREATEADJUSTMENTRULE_OFFSET UNITYSDK_OFFSET(0x1A742E20)
#define SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_1_OFFSET UNITYSDK_OFFSET(0x1A74C120)
#define SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_2_OFFSET UNITYSDK_OFFSET(0x1A744BD0)
#define SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1A74AEC0)
#define SYSTEM_TIMEZONEINFO_CREATELOCALUNITY_OFFSET UNITYSDK_OFFSET(0x1A744560)
#define SYSTEM_TIMEZONEINFO_CREATELOCAL_OFFSET UNITYSDK_OFFSET(0x1A748E30)
#define SYSTEM_TIMEZONEINFO_DATETIMEFROMUNIXTIME_OFFSET UNITYSDK_OFFSET(0x1A752710)
#define SYSTEM_TIMEZONEINFO_ENUMDYNAMICTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1A744C50)
#define SYSTEM_TIMEZONEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A74C1F0)
#define SYSTEM_TIMEZONEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A74C190)
#define SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYFILENAME_OFFSET UNITYSDK_OFFSET(0x1A74A120)
#define SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYIDCORE_OFFSET UNITYSDK_OFFSET(0x1A74A320)
#define SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYIDWINRTFALLBACK_OFFSET UNITYSDK_OFFSET(0x1A748260)
#define SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYID_OFFSET UNITYSDK_OFFSET(0x1A749EB0)
#define SYSTEM_TIMEZONEINFO_FROMREGISTRYKEY_OFFSET UNITYSDK_OFFSET(0x1A74C3B0)
#define SYSTEM_TIMEZONEINFO_GETADJUSTMENTRULES_OFFSET UNITYSDK_OFFSET(0x1A74D1F0)
#define SYSTEM_TIMEZONEINFO_GETAPPLICABLERULE_OFFSET UNITYSDK_OFFSET(0x1A74E560)
#define SYSTEM_TIMEZONEINFO_GETDATETIMENOWUTCOFFSETFROMUTC_OFFSET UNITYSDK_OFFSET(0x1A74C000)
#define SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATIONEFFECTIVEYEARS_OFFSET UNITYSDK_OFFSET(0x1A745610)
#define SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATIONWIN32_OFFSET UNITYSDK_OFFSET(0x1A7452D0)
#define SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1A744F90)
#define SYSTEM_TIMEZONEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A74D320)
#define SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONEINFOWINRTFALLBACK_OFFSET UNITYSDK_OFFSET(0x1A747A90)
#define SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONEKEYNAMEWIN32FALLBACK_OFFSET UNITYSDK_OFFSET(0x1A747F80)
#define SYSTEM_TIMEZONEINFO_GETLOCALUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x1A752750)
#define SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONESCORE_OFFSET UNITYSDK_OFFSET(0x1A74A390)
#define SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONESWINRTFALLBACK_OFFSET UNITYSDK_OFFSET(0x1A748810)
#define SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONES_OFFSET UNITYSDK_OFFSET(0x1A7486E0)
#define SYSTEM_TIMEZONEINFO_GETTIMEZONEINFORMATIONFORYEAR_OFFSET UNITYSDK_OFFSET(0x1A745E10)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSETFROMUTC_OFFSET UNITYSDK_OFFSET(0x1A74C0C0)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSETHELPER_OFFSET UNITYSDK_OFFSET(0x1A74D810)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1A74BD70)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSET_2_OFFSET UNITYSDK_OFFSET(0x1A7527F0)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x1A74B960)
#define SYSTEM_TIMEZONEINFO_GET_BASEUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x1A748D80)
#define SYSTEM_TIMEZONEINFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A748D90)
#define SYSTEM_TIMEZONEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A748DA0)
#define SYSTEM_TIMEZONEINFO_GET_ISWINDOWS_OFFSET UNITYSDK_OFFSET(0x1A749B60)
#define SYSTEM_TIMEZONEINFO_GET_LOCALZONEKEY_OFFSET UNITYSDK_OFFSET(0x1A749BF0)
#define SYSTEM_TIMEZONEINFO_GET_LOCAL_OFFSET UNITYSDK_OFFSET(0x1A748DB0)
#define SYSTEM_TIMEZONEINFO_GET_SUPPORTSDAYLIGHTSAVINGTIME_OFFSET UNITYSDK_OFFSET(0x1A74AEB0)
#define SYSTEM_TIMEZONEINFO_GET_TIMEZONEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1A749B00)
#define SYSTEM_TIMEZONEINFO_GET_TIMEZONEKEY_OFFSET UNITYSDK_OFFSET(0x1A74AD70)
#define SYSTEM_TIMEZONEINFO_GET_UTC_OFFSET UNITYSDK_OFFSET(0x1A747F10)
#define SYSTEM_TIMEZONEINFO_HASSAMERULES_OFFSET UNITYSDK_OFFSET(0x1A74C250)
#define SYSTEM_TIMEZONEINFO_ISAMBIGUOUSLOCALDSTFROMUTC_OFFSET UNITYSDK_OFFSET(0x1A74F1D0)
#define SYSTEM_TIMEZONEINFO_ISAMBIGUOUSTIME_OFFSET UNITYSDK_OFFSET(0x1A74EBF0)
#define SYSTEM_TIMEZONEINFO_ISDAYLIGHTSAVINGTIME_1_OFFSET UNITYSDK_OFFSET(0x1A74F870)
#define SYSTEM_TIMEZONEINFO_ISDAYLIGHTSAVINGTIME_OFFSET UNITYSDK_OFFSET(0x1A74F750)
#define SYSTEM_TIMEZONEINFO_ISINDSTFORYEAR_OFFSET UNITYSDK_OFFSET(0x1A74F510)
#define SYSTEM_TIMEZONEINFO_ISINDST_OFFSET UNITYSDK_OFFSET(0x1A74E9B0)
#define SYSTEM_TIMEZONEINFO_ISINVALIDTIME_OFFSET UNITYSDK_OFFSET(0x1A74B430)
#define SYSTEM_TIMEZONEINFO_PARSEABBREVIATIONS_OFFSET UNITYSDK_OFFSET(0x1A751C00)
#define SYSTEM_TIMEZONEINFO_PARSEREGTZI_OFFSET UNITYSDK_OFFSET(0x1A74C9F0)
#define SYSTEM_TIMEZONEINFO_PARSETIMESTYPES_OFFSET UNITYSDK_OFFSET(0x1A7520B0)
#define SYSTEM_TIMEZONEINFO_PARSETRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1A7523D0)
#define SYSTEM_TIMEZONEINFO_PARSETZBUFFER_OFFSET UNITYSDK_OFFSET(0x1A7503F0)
#define SYSTEM_TIMEZONEINFO_READBIGENDIANINT32_OFFSET UNITYSDK_OFFSET(0x1A751BE0)
#define SYSTEM_TIMEZONEINFO_READLINK_1_OFFSET UNITYSDK_OFFSET(0x1A749570)
#define SYSTEM_TIMEZONEINFO_READLINK_OFFSET UNITYSDK_OFFSET(0x1A7494C0)
#define SYSTEM_TIMEZONEINFO_SWAPINT32_OFFSET UNITYSDK_OFFSET(0x1A751BD0)
#define SYSTEM_TIMEZONEINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1A74F880)
#define SYSTEM_TIMEZONEINFO_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A74D520)
#define SYSTEM_TIMEZONEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A74FDA0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONPOINT_OFFSET UNITYSDK_OFFSET(0x1A74EFB0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIMEFROMTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1A746DA0)
#define SYSTEM_TIMEZONEINFO_TRIMSPECIAL_OFFSET UNITYSDK_OFFSET(0x1A749D30)
#define SYSTEM_TIMEZONEINFO_TRYADDTICKS_OFFSET UNITYSDK_OFFSET(0x1A74AF20)
#define SYSTEM_TIMEZONEINFO_TRYCREATETIMEZONE_OFFSET UNITYSDK_OFFSET(0x1A747060)
#define SYSTEM_TIMEZONEINFO_TRYGETNAMEFROMPATH_OFFSET UNITYSDK_OFFSET(0x1A749880)
#define SYSTEM_TIMEZONEINFO_TRYGETTRANSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1A74DC60)
#define SYSTEM_TIMEZONEINFO_UTCOFFSETOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1A742DE0)
#define SYSTEM_TIMEZONEINFO_VALIDATERULES_OFFSET UNITYSDK_OFFSET(0x1A74D100)
#define SYSTEM_TIMEZONEINFO_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1A74F960)
#define SYSTEM_TIMEZONEINFO_VALIDTZFILE_OFFSET UNITYSDK_OFFSET(0x1A750100)
#define SYSTEM_TIMEZONEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A747600)
#define SYSTEM_TIMEZONEINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A752810)
#define SYSTEM_TIMEZONEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74FDB0)

namespace System
{
	inline static constexpr unsigned int TimeZoneInfo_TypeDefinitionIndex = 340;

	class TimeZoneInfo : public ::System::Object
	{
	public:
		static ::System::TimeZoneInfo** StaticGet_utc()
		{
			return (::System::TimeZoneInfo**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x21D20);
		}
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>** StaticGet_systemTimeZones()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x21D28);
		}
		static ::System::TimeZoneInfo** StaticGet_local()
		{
			return (::System::TimeZoneInfo**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x21D30);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_timeZoneKey()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x21D38);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_localZoneKey()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x21D40);
		}
		static ::System::String** StaticGet_timeZoneDirectory()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x21D48);
		}
		static ::System::Boolean* StaticGet_readlinkNotFound()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo_TypeDefinitionIndex)->GetStaticField(0x6B70);
		}
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime, ::System::TimeType*>>* transitions; // 0x10
		::System::String* daylightDisplayName; // 0x18
		::System::String* displayName; // 0x20
		::System::String* standardDisplayName; // 0x28
		::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules; // 0x30
		::System::String* id; // 0x38
		::System::TimeSpan baseUtcOffset; // 0x40
		::System::Boolean supportsDaylightSavingTime; // 0x48

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::TimeSpan a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::TimeSpan, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO__CTOR_2_OFFSET))(this);
		}

		static ::System::Boolean UtcOffsetOutOfRange(::System::TimeSpan a1)
		{
			return ((::System::Boolean(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_UTCOFFSETOUTOFRANGE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>* CreateAdjustmentRule(::System::Int32 a1, ::Il2CppArray<::System::Int64>*& a2, ::Il2CppArray<::System::String*>*& a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>*(*)(::System::Int32, ::Il2CppArray<::System::Int64>*&, ::Il2CppArray<::System::String*>*&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATEADJUSTMENTRULE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::TimeZoneInfo* CreateLocalUnity()
		{
			return ((::System::TimeZoneInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATELOCALUNITY_OFFSET))();
		}

		static ::System::UInt32 EnumDynamicTimeZoneInformation(::System::UInt32 a1, ::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ENUMDYNAMICTIMEZONEINFORMATION_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetDynamicTimeZoneInformation(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& a1)
		{
			return ((::System::UInt32(*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATION_OFFSET))(a1);
		}

		static ::System::UInt32 GetDynamicTimeZoneInformationWin32(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& a1)
		{
			return ((::System::UInt32(*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATIONWIN32_OFFSET))(a1);
		}

		static ::System::UInt32 GetDynamicTimeZoneInformationEffectiveYears(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& a1, ::System::UInt32& a2, ::System::UInt32& a3)
		{
			return ((::System::UInt32(*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATIONEFFECTIVEYEARS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetTimeZoneInformationForYear(::System::UInt16 a1, ::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& a2, ::System::TimeZoneInfo_TIME_ZONE_INFORMATION& a3)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION&, ::System::TimeZoneInfo_TIME_ZONE_INFORMATION&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETTIMEZONEINFORMATIONFORYEAR_OFFSET))(a1, a2, a3);
		}

		static ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRuleFromTimeZoneInformation(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& a1, ::System::DateTime a2, ::System::DateTime a3, ::System::Int32 a4)
		{
			return ((::System::TimeZoneInfo_AdjustmentRule*(*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION&, ::System::DateTime, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATEADJUSTMENTRULEFROMTIMEZONEINFORMATION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TransitionTimeFromTimeZoneInformation(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION a1, ::System::TimeZoneInfo_TransitionTime& a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION, ::System::TimeZoneInfo_TransitionTime&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIMEFROMTIMEZONEINFORMATION_OFFSET))(a1, a2, a3);
		}

		static ::System::TimeZoneInfo* TryCreateTimeZone(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION a1)
		{
			return ((::System::TimeZoneInfo*(*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYCREATETIMEZONE_OFFSET))(a1);
		}

		static ::System::TimeZoneInfo* GetLocalTimeZoneInfoWinRTFallback()
		{
			return ((::System::TimeZoneInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONEINFOWINRTFALLBACK_OFFSET))();
		}

		static ::System::String* GetLocalTimeZoneKeyNameWin32Fallback()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONEKEYNAMEWIN32FALLBACK_OFFSET))();
		}

		static ::System::TimeZoneInfo* FindSystemTimeZoneByIdWinRTFallback(::System::String* a1)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYIDWINRTFALLBACK_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::TimeZoneInfo*>* GetSystemTimeZonesWinRTFallback()
		{
			return ((::System::Collections::Generic::List_1<::System::TimeZoneInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONESWINRTFALLBACK_OFFSET))();
		}

		::System::TimeSpan get_BaseUtcOffset()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_BASEUTCOFFSET_OFFSET))(this);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_ID_OFFSET))(this);
		}

		static ::System::TimeZoneInfo* get_Local()
		{
			return ((::System::TimeZoneInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_LOCAL_OFFSET))();
		}

		static ::System::Int32 readlink(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_READLINK_OFFSET))(a1, a2, a3);
		}

		static ::System::String* readlink_1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_READLINK_1_OFFSET))(a1);
		}

		static ::System::Boolean TryGetNameFromPath(::System::String* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYGETNAMEFROMPATH_OFFSET))(a1, a2);
		}

		static ::System::TimeZoneInfo* CreateLocal()
		{
			return ((::System::TimeZoneInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATELOCAL_OFFSET))();
		}

		static ::System::TimeZoneInfo* FindSystemTimeZoneByIdCore(::System::String* a1)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYIDCORE_OFFSET))(a1);
		}

		static ::System::Void GetSystemTimeZonesCore(::System::Collections::Generic::List_1<::System::TimeZoneInfo*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::TimeZoneInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONESCORE_OFFSET))(a1);
		}

		::System::Boolean get_SupportsDaylightSavingTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_SUPPORTSDAYLIGHTSAVINGTIME_OFFSET))(this);
		}

		static ::System::TimeZoneInfo* get_Utc()
		{
			return ((::System::TimeZoneInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_UTC_OFFSET))();
		}

		static ::System::String* get_TimeZoneDirectory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_TIMEZONEDIRECTORY_OFFSET))();
		}

		static ::System::Boolean get_IsWindows()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_ISWINDOWS_OFFSET))();
		}

		static ::System::String* TrimSpecial(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRIMSPECIAL_OFFSET))(a1);
		}

		static ::Microsoft::Win32::RegistryKey* get_TimeZoneKey()
		{
			return ((::Microsoft::Win32::RegistryKey*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_TIMEZONEKEY_OFFSET))();
		}

		static ::Microsoft::Win32::RegistryKey* get_LocalZoneKey()
		{
			return ((::Microsoft::Win32::RegistryKey*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_LOCALZONEKEY_OFFSET))();
		}

		static ::System::Boolean TryAddTicks(::System::DateTime a1, ::System::Int64 a2, ::System::DateTime& a3, ::System::DateTimeKind a4)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::Int64, ::System::DateTime&, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYADDTICKS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::DateTime ConvertTime(::System::DateTime a1, ::System::TimeZoneInfo* a2, ::System::TimeZoneInfo* a3)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIME_OFFSET))(a1, a2, a3);
		}

		::System::DateTime ConvertTimeFromUtc(::System::DateTime a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIMEFROMUTC_OFFSET))(this, a1);
		}

		static ::System::DateTime ConvertTimeFromUtc_1(::System::DateTime a1, ::System::TimeZoneInfo* a2)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIMEFROMUTC_1_OFFSET))(a1, a2);
		}

		static ::System::DateTime ConvertTimeToUtc(::System::DateTime a1, ::System::TimeZoneInfoOptions a2)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeZoneInfoOptions))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_OFFSET))(a1, a2);
		}

		static ::System::DateTime ConvertTimeToUtc_1(::System::DateTime a1, ::System::TimeZoneInfo* a2)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_1_OFFSET))(a1, a2);
		}

		static ::System::DateTime ConvertTimeToUtc_2(::System::DateTime a1, ::System::TimeZoneInfo* a2, ::System::TimeZoneInfoOptions a3)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_2_OFFSET))(a1, a2, a3);
		}

		static ::System::TimeSpan GetDateTimeNowUtcOffsetFromUtc(::System::DateTime a1, ::System::Boolean& a2)
		{
			return ((::System::TimeSpan(*)(::System::DateTime, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDATETIMENOWUTCOFFSETFROMUTC_OFFSET))(a1, a2);
		}

		static ::System::TimeZoneInfo* CreateCustomTimeZone(::System::String* a1, ::System::TimeSpan a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::System::TimeSpan, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::TimeZoneInfo* CreateCustomTimeZone_1(::System::String* a1, ::System::TimeSpan a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* a6)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::System::TimeSpan, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::TimeZoneInfo* CreateCustomTimeZone_2(::System::String* a1, ::System::TimeSpan a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* a6, ::System::Boolean a7)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::System::TimeSpan, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::TimeZoneInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::TimeZoneInfo* FindSystemTimeZoneById(::System::String* a1)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYID_OFFSET))(a1);
		}

		static ::System::TimeZoneInfo* FindSystemTimeZoneByFileName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYFILENAME_OFFSET))(a1, a2);
		}

		static ::System::TimeZoneInfo* FromRegistryKey(::System::String* a1, ::Microsoft::Win32::RegistryKey* a2)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_FROMREGISTRYKEY_OFFSET))(a1, a2);
		}

		static ::System::Void ParseRegTzi(::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_PARSEREGTZI_OFFSET))(a1, a2, a3, a4);
		}

		::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* GetAdjustmentRules()
		{
			return ((::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETADJUSTMENTRULES_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>* GetSystemTimeZones()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONES_OFFSET))();
		}

		::System::TimeSpan GetUtcOffset(::System::DateTime a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET))(this, a1);
		}

		::System::TimeSpan GetUtcOffset_1(::System::DateTime a1, ::System::Boolean& a2, ::System::Boolean a3)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTime, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSET_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::TimeSpan GetUtcOffsetHelper(::System::DateTime a1, ::System::TimeZoneInfo* a2, ::System::Boolean& a3, ::System::Boolean a4)
		{
			return ((::System::TimeSpan(*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSETHELPER_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean HasSameRules(::System::TimeZoneInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_HASSAMERULES_OFFSET))(this, a1);
		}

		::System::Boolean IsAmbiguousTime(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISAMBIGUOUSTIME_OFFSET))(this, a1);
		}

		::System::Boolean IsAmbiguousLocalDstFromUtc(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISAMBIGUOUSLOCALDSTFROMUTC_OFFSET))(this, a1);
		}

		::System::Boolean IsInDST(::System::TimeZoneInfo_AdjustmentRule* a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeZoneInfo_AdjustmentRule*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISINDST_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInDSTForYear(::System::TimeZoneInfo_AdjustmentRule* a1, ::System::DateTime a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeZoneInfo_AdjustmentRule*, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISINDSTFORYEAR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsDaylightSavingTime(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISDAYLIGHTSAVINGTIME_OFFSET))(this, a1);
		}

		::System::Boolean IsDaylightSavingTime_1(::System::DateTime a1, ::System::TimeZoneInfoOptions a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime, ::System::TimeZoneInfoOptions))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISDAYLIGHTSAVINGTIME_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInvalidTime(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISINVALIDTIME_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		static ::System::Void Validate(::System::String* a1, ::System::TimeSpan a2, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::TimeSpan, ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_VALIDATE_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TOSTRING_OFFSET))(this);
		}

		::System::TimeZoneInfo_AdjustmentRule* GetApplicableRule(::System::DateTime a1)
		{
			return ((::System::TimeZoneInfo_AdjustmentRule*(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETAPPLICABLERULE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetTransitionOffset(::System::DateTime a1, ::System::TimeSpan& a2, ::System::Boolean& a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime, ::System::TimeSpan&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYGETTRANSITIONOFFSET_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::DateTime TransitionPoint(::System::TimeZoneInfo_TransitionTime a1, ::System::Int32 a2)
		{
			return ((::System::DateTime(*)(::System::TimeZoneInfo_TransitionTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONPOINT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>* ValidateRules(::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>* a1)
		{
			return ((::Il2CppArray<::System::TimeZoneInfo_AdjustmentRule*>*(*)(::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_VALIDATERULES_OFFSET))(a1);
		}

		static ::System::TimeZoneInfo* BuildFromStream(::System::String* a1, ::System::IO::Stream* a2)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_BUILDFROMSTREAM_OFFSET))(a1, a2);
		}

		static ::System::Boolean ValidTZFile(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_VALIDTZFILE_OFFSET))(a1, a2);
		}

		static ::System::Int32 SwapInt32(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_SWAPINT32_OFFSET))(a1);
		}

		static ::System::Int32 ReadBigEndianInt32(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_READBIGENDIANINT32_OFFSET))(a1, a2);
		}

		static ::System::TimeZoneInfo* ParseTZBuffer(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::TimeZoneInfo*(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_PARSETZBUFFER_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* ParseAbbreviations(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_PARSEABBREVIATIONS_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::TimeType*>* ParseTimesTypes(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* a4)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::TimeType*>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_PARSETIMESTYPES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime, ::System::TimeType*>>* ParseTransitions(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::TimeType*>* a4)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime, ::System::TimeType*>>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::TimeType*>*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_PARSETRANSITIONS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::DateTime DateTimeFromUnixTime(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_DATETIMEFROMUNIXTIME_OFFSET))(a1);
		}

		static ::System::TimeSpan GetLocalUtcOffset(::System::DateTime a1, ::System::TimeZoneInfoOptions a2)
		{
			return ((::System::TimeSpan(*)(::System::DateTime, ::System::TimeZoneInfoOptions))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETLOCALUTCOFFSET_OFFSET))(a1, a2);
		}

		::System::TimeSpan GetUtcOffset_2(::System::DateTime a1, ::System::TimeZoneInfoOptions a2)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTime, ::System::TimeZoneInfoOptions))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSET_2_OFFSET))(this, a1, a2);
		}

		static ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime a1, ::System::TimeZoneInfo* a2, ::System::Boolean& a3, ::System::Boolean& a4)
		{
			return ((::System::TimeSpan(*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSETFROMUTC_OFFSET))(a1, a2, a3, a4);
		}
	};
}
