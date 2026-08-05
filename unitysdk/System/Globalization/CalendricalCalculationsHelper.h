#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Globalization/CalendricalCalculationsHelper_EphemerisCorrectionAlgorithmMap.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ABERRATION_OFFSET UNITYSDK_OFFSET(0x1E11ED10)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ANGLE_OFFSET UNITYSDK_OFFSET(0x1E1198E0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ASDAYFRACTION_OFFSET UNITYSDK_OFFSET(0x1E119E70)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ASLOCALTIME_OFFSET UNITYSDK_OFFSET(0x1E11B720)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ASSEASON_OFFSET UNITYSDK_OFFSET(0x1E11F4D0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_CENTURIESFROM1900_OFFSET UNITYSDK_OFFSET(0x1E119E80)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1E11F1B0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_COPYSIGN_OFFSET UNITYSDK_OFFSET(0x1E11AC30)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_COSOFDEGREE_OFFSET UNITYSDK_OFFSET(0x1E119800)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_DEFAULTEPHEMERISCORRECTION_OFFSET UNITYSDK_OFFSET(0x1E119F10)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1620TO1699_OFFSET UNITYSDK_OFFSET(0x1E11A580)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1700TO1799_OFFSET UNITYSDK_OFFSET(0x1E11A3F0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1800TO1899_OFFSET UNITYSDK_OFFSET(0x1E11A1F0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1900TO1987_OFFSET UNITYSDK_OFFSET(0x1E119FF0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1988TO2019_OFFSET UNITYSDK_OFFSET(0x1E119FD0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION_OFFSET UNITYSDK_OFFSET(0x1E11A710)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EQUATIONOFTIME_OFFSET UNITYSDK_OFFSET(0x1E11AD70)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ESTIMATEPRIOR_OFFSET UNITYSDK_OFFSET(0x1E11F500)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_GETGREGORIANYEAR_OFFSET UNITYSDK_OFFSET(0x1E119BF0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_GETNUMBEROFDAYS_OFFSET UNITYSDK_OFFSET(0x1E119BC0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_INITLONGITUDE_OFFSET UNITYSDK_OFFSET(0x1E11B8A0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x1E11ABB0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_JULIANCENTURIES_OFFSET UNITYSDK_OFFSET(0x1E11AB30)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_MIDDAYATPERSIANOBSERVATIONSITE_OFFSET UNITYSDK_OFFSET(0x1E11B9C0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_MIDDAY_OFFSET UNITYSDK_OFFSET(0x1E11B7B0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_NORMALIZELONGITUDE_OFFSET UNITYSDK_OFFSET(0x1E119DD0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_NUTATION_OFFSET UNITYSDK_OFFSET(0x1E11EE10)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_OBLIQUITY_OFFSET UNITYSDK_OFFSET(0x1E119910)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_PERIODICTERM_OFFSET UNITYSDK_OFFSET(0x1E11BBC0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_PERSIANNEWYEARONORBEFORE_OFFSET UNITYSDK_OFFSET(0x1E11F830)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_POLYNOMIALSUM_OFFSET UNITYSDK_OFFSET(0x1E119AA0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_RADIANSFROMDEGREES_OFFSET UNITYSDK_OFFSET(0x1E119770)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_REMINDER_OFFSET UNITYSDK_OFFSET(0x1E119D90)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_SINOFDEGREE_OFFSET UNITYSDK_OFFSET(0x1E119790)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_SUMLONGSEQUENCEOFPERIODICTERMS_OFFSET UNITYSDK_OFFSET(0x1E11BCD0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_TANOFDEGREE_OFFSET UNITYSDK_OFFSET(0x1E119870)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11F9E0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E11F9D0)

namespace System::Globalization
{
	inline static constexpr unsigned int CalendricalCalculationsHelper_TypeDefinitionIndex = 697;

	class CalendricalCalculationsHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Double>** StaticGet_AnomalyCoefficients()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1330);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_CoefficientsA()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1338);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_LambdaCoefficients()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1340);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_Coefficients()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1348);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_Coefficients1800to1899()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1350);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_Coefficients1900to1987()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1358);
		}
		static ::Il2CppArray<::System::Globalization::CalendricalCalculationsHelper_EphemerisCorrectionAlgorithmMap>** StaticGet_EphemerisCorrectionTable()
		{
			return (::Il2CppArray<::System::Globalization::CalendricalCalculationsHelper_EphemerisCorrectionAlgorithmMap>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1360);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_Coefficients1620to1699()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1368);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_EccentricityCoefficients()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1370);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_Coefficients1700to1799()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1378);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_CoefficientsB()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1380);
		}
		static ::System::Int64* StaticGet_StartOf1810()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0xCF0);
		}
		static ::System::Int64* StaticGet_StartOf1900Century()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0xCF8);
		}
		// static const ::System::Double FullCircleOfArc; // 0x0
		// static const ::System::Int32 HalfCircleOfArc = 0xB4; // 0x0
		// static const ::System::Double TwelveHours; // 0x0
		// static const ::System::Double Noon2000Jan01; // 0x0
		// static const ::System::Double MeanTropicalYearInDays; // 0x0
		// static const ::System::Double MeanSpeedOfSun; // 0x0
		// static const ::System::Double LongitudeSpring; // 0x0
		// static const ::System::Double TwoDegreesAfterSpring; // 0x0
		// static const ::System::Int32 SecondsPerDay = 0x15180; // 0x0
		// static const ::System::Int32 DaysInUniformLengthCentury = 0x8EAD; // 0x0
		// static const ::System::Int32 SecondsPerMinute = 0x3C; // 0x0
		// static const ::System::Int32 MinutesPerDegree = 0x3C; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER__CCTOR_OFFSET))();
		}

		static ::System::Double RadiansFromDegrees(::System::Double degree)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_RADIANSFROMDEGREES_OFFSET))(degree);
		}

		static ::System::Double SinOfDegree(::System::Double degree)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_SINOFDEGREE_OFFSET))(degree);
		}

		static ::System::Double CosOfDegree(::System::Double degree)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_COSOFDEGREE_OFFSET))(degree);
		}

		static ::System::Double TanOfDegree(::System::Double degree)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_TANOFDEGREE_OFFSET))(degree);
		}

		static ::System::Double Angle(::System::Int32 degrees, ::System::Int32 minutes, ::System::Double seconds)
		{
			return ((::System::Double(*)(::System::Int32, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ANGLE_OFFSET))(degrees, minutes, seconds);
		}

		static ::System::Double Obliquity(::System::Double julianCenturies)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_OBLIQUITY_OFFSET))(julianCenturies);
		}

		static ::System::Int64 GetNumberOfDays(::System::DateTime date)
		{
			return ((::System::Int64(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_GETNUMBEROFDAYS_OFFSET))(date);
		}

		static ::System::Int32 GetGregorianYear(::System::Double numberOfDays)
		{
			return ((::System::Int32(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_GETGREGORIANYEAR_OFFSET))(numberOfDays);
		}

		static ::System::Double Reminder(::System::Double divisor, ::System::Double dividend)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_REMINDER_OFFSET))(divisor, dividend);
		}

		static ::System::Double NormalizeLongitude(::System::Double longitude)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_NORMALIZELONGITUDE_OFFSET))(longitude);
		}

		static ::System::Double AsDayFraction(::System::Double longitude)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ASDAYFRACTION_OFFSET))(longitude);
		}

		static ::System::Double PolynomialSum(::Il2CppArray<::System::Double>* coefficients, ::System::Double indeterminate)
		{
			return ((::System::Double(*)(::Il2CppArray<::System::Double>*, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_POLYNOMIALSUM_OFFSET))(coefficients, indeterminate);
		}

		static ::System::Double CenturiesFrom1900(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_CENTURIESFROM1900_OFFSET))(gregorianYear);
		}

		static ::System::Double DefaultEphemerisCorrection(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_DEFAULTEPHEMERISCORRECTION_OFFSET))(gregorianYear);
		}

		static ::System::Double EphemerisCorrection1988to2019(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1988TO2019_OFFSET))(gregorianYear);
		}

		static ::System::Double EphemerisCorrection1900to1987(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1900TO1987_OFFSET))(gregorianYear);
		}

		static ::System::Double EphemerisCorrection1800to1899(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1800TO1899_OFFSET))(gregorianYear);
		}

		static ::System::Double EphemerisCorrection1700to1799(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1700TO1799_OFFSET))(gregorianYear);
		}

		static ::System::Double EphemerisCorrection1620to1699(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1620TO1699_OFFSET))(gregorianYear);
		}

		static ::System::Double EphemerisCorrection(::System::Double time)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION_OFFSET))(time);
		}

		static ::System::Double JulianCenturies(::System::Double moment)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_JULIANCENTURIES_OFFSET))(moment);
		}

		static ::System::Boolean IsNegative(::System::Double value)
		{
			return ((::System::Boolean(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ISNEGATIVE_OFFSET))(value);
		}

		static ::System::Double CopySign(::System::Double value, ::System::Double sign)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_COPYSIGN_OFFSET))(value, sign);
		}

		static ::System::Double EquationOfTime(::System::Double time)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EQUATIONOFTIME_OFFSET))(time);
		}

		static ::System::Double AsLocalTime(::System::Double apparentMidday, ::System::Double longitude)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ASLOCALTIME_OFFSET))(apparentMidday, longitude);
		}

		static ::System::Double Midday(::System::Double date, ::System::Double longitude)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_MIDDAY_OFFSET))(date, longitude);
		}

		static ::System::Double InitLongitude(::System::Double longitude)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_INITLONGITUDE_OFFSET))(longitude);
		}

		static ::System::Double MiddayAtPersianObservationSite(::System::Double date)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_MIDDAYATPERSIANOBSERVATIONSITE_OFFSET))(date);
		}

		static ::System::Double PeriodicTerm(::System::Double julianCenturies, ::System::Int32 x, ::System::Double y, ::System::Double z)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_PERIODICTERM_OFFSET))(julianCenturies, x, y, z);
		}

		static ::System::Double SumLongSequenceOfPeriodicTerms(::System::Double julianCenturies)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_SUMLONGSEQUENCEOFPERIODICTERMS_OFFSET))(julianCenturies);
		}

		static ::System::Double Aberration(::System::Double julianCenturies)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ABERRATION_OFFSET))(julianCenturies);
		}

		static ::System::Double Nutation(::System::Double julianCenturies)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_NUTATION_OFFSET))(julianCenturies);
		}

		static ::System::Double Compute(::System::Double time)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_COMPUTE_OFFSET))(time);
		}

		static ::System::Double AsSeason(::System::Double longitude)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ASSEASON_OFFSET))(longitude);
		}

		static ::System::Double EstimatePrior(::System::Double longitude, ::System::Double time)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ESTIMATEPRIOR_OFFSET))(longitude, time);
		}

		static ::System::Int64 PersianNewYearOnOrBefore(::System::Int64 numberOfDays)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_PERSIANNEWYEARONORBEFORE_OFFSET))(numberOfDays);
		}
	};
}
