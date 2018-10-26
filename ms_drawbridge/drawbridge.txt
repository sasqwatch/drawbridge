class RegionDetail {
	uintptr_t                  m_startAddress;       /*     0     8 */
	uintptr_t                  m_endAddress;         /*     8     8 */
	bool                       m_namedRegion;        /*    16     1 */
	bool                       m_regionUsedForInclude; /*    17     1 */

	/* XXX 6 bytes hole, try to pack */

	class shared_ptr<std::__1::vector<bool, std::__1::allocator<bool> > > m_excludeMap; /*    24    16 */

	/* Bitfield combined with previous fields */

	static AdvancedIncludeCallback *  sm_advancedIncludeCallback /*     0     0 */
public:

	void RegionDetail(class RegionDetail *);

	void RegionDetail(class RegionDetail *, uintptr_tconst, uintptr_tconst, boolconst);

	uintptr_t GetStartAddress(const class RegionDetail  *);

	uintptr_t GetEndAddress(const class RegionDetail  *);

	size_t GetRegionSize(const class RegionDetail  *);

	bool HasExcludeMap(const class RegionDetail  *);

	bool IsAddressInRegion(const class RegionDetail  *, uintptr_tconst);

	void ExcludeAddress(class RegionDetail *, uintptr_tconst, boolconst);

	void MarkAllPagesExcluded(class RegionDetail *);

	void ReleaseExcludeMap(class RegionDetail *);

	void IncludeAddress(class RegionDetail *, uintptr_tconst);

	bool IsAddressIncluded(const class RegionDetail  *, uintptr_tconst);

	bool IsRegionNamed(const class RegionDetail  *);

	void MarkRegionNamed(class RegionDetail *);

	bool WasRegionUsedForInclude(const class RegionDetail  *);

	void SetAdvancedIncludeCallback(AdvancedIncludeCallback *);

	void AssertIsInRange(const class RegionDetail  *, uintptr_tconst);

	bool IsBitSet(const class RegionDetail  *, uintptr_tconst);

	void TurnOnBit(class RegionDetail *, uintptr_tconst);

	void TurnOffBit(class RegionDetail *, uintptr_tconst);


	/* size: 40, cachelines: 1, members: 5, static members: 1 */
	/* sum members: 34, holes: 1, sum holes: 6 */
	/* last cacheline: 40 bytes */
};
struct _IO_FILE {
	int                        _flags;               /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	char *                     _IO_read_ptr;         /*     8     8 */
	char *                     _IO_read_end;         /*    16     8 */
	char *                     _IO_read_base;        /*    24     8 */
	char *                     _IO_write_base;       /*    32     8 */
	char *                     _IO_write_ptr;        /*    40     8 */
	char *                     _IO_write_end;        /*    48     8 */
	char *                     _IO_buf_base;         /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	char *                     _IO_buf_end;          /*    64     8 */
	char *                     _IO_save_base;        /*    72     8 */
	char *                     _IO_backup_base;      /*    80     8 */
	char *                     _IO_save_end;         /*    88     8 */
	class _IO_marker *         _markers;             /*    96     8 */
	class _IO_FILE *           _chain;               /*   104     8 */
	int                        _fileno;              /*   112     4 */
	int                        _flags2;              /*   116     4 */
	__off_t                    _old_offset;          /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	unsigned short             _cur_column;          /*   128     2 */
	signed char                _vtable_offset;       /*   130     1 */
	char                       _shortbuf[0];         /*   131     0 */

	/* XXX 5 bytes hole, try to pack */

	_IO_lock_t *               _lock;                /*   136     8 */
	__off64_t                  _offset;              /*   144     8 */
	void *                     __pad1;               /*   152     8 */
	void *                     __pad2;               /*   160     8 */
	void *                     __pad3;               /*   168     8 */
	void *                     __pad4;               /*   176     8 */
	size_t                     __pad5;               /*   184     8 */
	/* --- cacheline 3 boundary (192 bytes) --- */
	int                        _mode;                /*   192     4 */
	char                       _unused2[0];          /*   196     0 */

	/* size: 216, cachelines: 4, members: 29 */
	/* sum members: 187, holes: 2, sum holes: 9 */
	/* padding: 20 */
	/* last cacheline: 24 bytes */
};
struct _IO_marker {
	class _IO_marker *         _next;                /*     0     8 */
	class _IO_FILE *           _sbuf;                /*     8     8 */
	int                        _pos;                 /*    16     4 */

	/* size: 24, cachelines: 1, members: 3 */
	/* padding: 4 */
	/* last cacheline: 24 bytes */
};
struct __va_list_tag {
	unsigned int               gp_offset;            /*     0     4 */
	unsigned int               fp_offset;            /*     4     4 */
	void *                     overflow_arg_area;    /*     8     8 */
	void *                     reg_save_area;        /*    16     8 */

	/* size: 24, cachelines: 1, members: 4 */
	/* last cacheline: 24 bytes */
};
struct tm {
	int                        tm_sec;               /*     0     4 */
	int                        tm_min;               /*     4     4 */
	int                        tm_hour;              /*     8     4 */
	int                        tm_mday;              /*    12     4 */
	int                        tm_mon;               /*    16     4 */
	int                        tm_year;              /*    20     4 */
	int                        tm_wday;              /*    24     4 */
	int                        tm_yday;              /*    28     4 */
	int                        tm_isdst;             /*    32     4 */

	/* XXX 4 bytes hole, try to pack */

	long int                   tm_gmtoff;            /*    40     8 */
	const char  *              tm_zone;              /*    48     8 */

	/* size: 56, cachelines: 1, members: 11 */
	/* sum members: 52, holes: 1, sum holes: 4 */
	/* last cacheline: 56 bytes */
};
struct link_map {
	Elf64_Addr                 l_addr;               /*     0     8 */
	char *                     l_name;               /*     8     8 */
	Elf64_Dyn *                l_ld;                 /*    16     8 */
	class link_map *           l_next;               /*    24     8 */
	class link_map *           l_prev;               /*    32     8 */

	/* size: 40, cachelines: 1, members: 5 */
	/* last cacheline: 40 bytes */
};
class ListEnum {
	int ()(void) * *           _vptr$ListEnum;       /*     0     8 */
	UINT64                     m_anchorAddress;      /*     8     8 */
	UINT64                     m_currentElementAddress; /*    16     8 */
	UINT64                     m_nextElementAddress; /*    24     8 */
	UINT64                     m_elementOffset;      /*    32     8 */
	ssize_t                    m_elementSize;        /*    40     8 */
	UINT64                     m_remainingLimit;     /*    48     8 */
	UINT64                     m_processedElements;  /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	class unique_ptr<char [], std::__1::default_delete<char []> > m_workObject; /*    64     8 */
public:

	void ListEnum(class ListEnum *, UINT64const, UINT64const, UINT64const, UINT64const, boolconst);

	UINT64 GetObjectSize(class ListEnum *);

	UINT64 GetCurrentObjectBaseAddress(class ListEnum *);

	void * GetNext(class ListEnum *);

	bool ProcessList(class ListEnum *);

	UINT64 GetProcessedCount(class ListEnum *);

	bool ReadObject(class ListEnum *, UINT64);

	bool ReadListElement(class ListEnum *, UINT64, class SEListElem *);

	virtual bool ProcessObject(class ListEnum *, UINT64, void *) = 0;

	/* vtable has 1 entries: {
	   [0] = ProcessObject((null)), 
	} */
	/* size: 72, cachelines: 2, members: 9 */
	/* last cacheline: 8 bytes */
};
class ListCapture : public ListEnum {
public:

	/* class ListEnum            <ancestor>; */      /*     0    72 */
	/* --- cacheline 1 boundary (64 bytes) was 8 bytes ago --- */
	enum CaptureTypeconst      m_captureType;        /*    72     4 */

	/* XXX 4 bytes hole, try to pack */

	const char  *              m_objectName;         /*    80     8 */
	void ListCapture(class ListCapture *, UINT64const, UINT64const, UINT64const, UINT64const, enum CaptureTypeconst, const char  *, boolconst);

	virtual bool ProcessObject(class ListCapture *, UINT64, void *);

	/* vtable has 1 entries: {
	   [0] = ProcessObject((null)), 
	} */
	/* size: 88, cachelines: 2, members: 3 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 88 != 12 + 4(holes), diff = 72 */

};
class AutoStopTarget {
	pid_t                      m_targetPid;          /*     0     4 */
	enum ProcessState          m_state;              /*     4     4 */
	enum ProcessState {
		Unknown = 0,
		Running = 1,
		Stopped = 2,
		Killed = 3,
	};

public:

	void AutoStopTarget(class AutoStopTarget *);

	void ~AutoStopTarget(class AutoStopTarget *);

	bool StopTarget(class AutoStopTarget *);

	void ResumeTarget(class AutoStopTarget *);

	void KillTarget(class AutoStopTarget *);

	bool IsTargetKilled(const class AutoStopTarget  *);

	bool IsTargetStopped(const class AutoStopTarget  *);

	pid_t GetTargetPid(class AutoStopTarget *);

	void SetTargetPid(class AutoStopTarget *, pid_tconst);


	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
class GlobalsAndOptions : public AutoStopTarget {
public:

	/* class AutoStopTarget      <ancestor>; */      /*     0     8 */
	string                     m_dumpFileName;       /*     8    24 */
	uint64_t                   m_targetFilterBytes;  /*    32     8 */
	uint64_t                   m_excludedBytes;      /*    40     8 */
	uint64_t                   m_actualMemoryBytes;  /*    48     8 */
	RegionMap                  m_regionMap;          /*    56    24 */
	/* --- cacheline 1 boundary (64 bytes) was 16 bytes ago --- */
	class vector<unsigned long, std::__1::allocator<unsigned long> > m_pagesForIndirectMemoryEvaluation; /*    80    24 */
	class vector<int, std::__1::allocator<int> > m_suspendedThreads; /*   104    24 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	struct DbgStatics          m_statics;            /*   128  4096 */
	/* --- cacheline 66 boundary (4224 bytes) --- */
	int                        m_targetMemoryStream; /*  4224     4 */
	enum DumpType              m_dumpType;           /*  4228     4 */
	enum DumpType {
		Mini = 1,
		MiniPlus = 2,
		Filtered = 3,
		Full = 4,
	};

	bool                       m_verbose;            /*  4232     1 */
	bool                       m_killTarget;         /*  4233     1 */
	bool                       m_outputFinalMaps;    /*  4234     1 */
	bool                       m_resumeTarget;       /*  4235     1 */

	/* XXX 4 bytes hole, try to pack */

	class Logger *             m_logger;             /*  4240     8 */
	void GlobalsAndOptions(class GlobalsAndOptions *);

	void ~GlobalsAndOptions(class GlobalsAndOptions *);

	void InitializeLogging(class GlobalsAndOptions *);

	bool OpenTargetMemory(class GlobalsAndOptions *);

	void CloseTargetMemory(class GlobalsAndOptions *);

	ssize_t ReadTargetMemory(class GlobalsAndOptions *, void *, ssize_tconst, size_tconst, boolconst);

	void EnableVerboseLogging(class GlobalsAndOptions *);

	void DisableKillTarget(class GlobalsAndOptions *);

	bool IsKillTargetEnabled(class GlobalsAndOptions *);

	void DisableFinalMapsOutput(class GlobalsAndOptions *);

	bool IsFinalMapsOutputEnabled(class GlobalsAndOptions *);

	void EnableResumeTarget(class GlobalsAndOptions *);

	bool IsResumeTargetEnabled(class GlobalsAndOptions *);

	void SetDumpType(class GlobalsAndOptions *, enum DumpTypeconst);

	enum DumpType GetDumpType(class GlobalsAndOptions *);

	bool LoadRegionMap(class GlobalsAndOptions *);

	void ConvertRegionsToPageMap(class GlobalsAndOptions *, PageMap &);

	bool TraceTargetThreads(class GlobalsAndOptions *);

	void UnTraceTargetThreads(class GlobalsAndOptions *);

	void SetDumpFileName(class GlobalsAndOptions *, const char  *);

	string GetDumpFileName(class GlobalsAndOptions *);

	iterator FindCoveringRegion(class GlobalsAndOptions *, uintptr_tconst);

	RegionMap * GetRegionMap(class GlobalsAndOptions *);

	void PrintRegionDetails(class GlobalsAndOptions *, const char  *);

	void AddIndirectPageToList(class GlobalsAndOptions *, uint64_tconst);

	void ProcessIndirectPages(class GlobalsAndOptions *);

	void TrimMemory(class GlobalsAndOptions *);

	uintptr_t GetTargetFilterBytes(class GlobalsAndOptions *);

	void AccumulateTargetFilterBytes(class GlobalsAndOptions *, uintptr_tconst);

	uintptr_t GetActualMemoryBytes(class GlobalsAndOptions *);

	void AccumulateActualMemoryBytes(class GlobalsAndOptions *, uintptr_tconst);

	uintptr_t GetExcludedBytes(class GlobalsAndOptions *);

	void AccumulateExcludedBytes(class GlobalsAndOptions *, uintptr_tconst);

	class DbgStatics * GetStatics(class GlobalsAndOptions *);

	class Logger & GetLogger(class GlobalsAndOptions *);


	/* size: 4248, cachelines: 67, members: 16 */
	/* sum members: 4236, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 4248 != 4236 + 4(holes), diff = 8 */

};
class Logger {
public:

	static charconst                  LogSeparator = 46; /*     0     0 */
	class LoggerOutputList    Outputs;               /*     0    72 */
	/* --- cacheline 1 boundary (64 bytes) was 8 bytes ago --- */
	class LoggerFilterList    Filters;               /*    72    72 */
	/* --- cacheline 2 boundary (128 bytes) was 16 bytes ago --- */
	struct atomic<LogLevel>    m_logLevel;           /*   144     4 */
	struct atomic<LogLevel>    m_finalLogLevel;      /*   148     4 */
	class Logger *const        m_parent;             /*   152     8 */
	class mutex               m_lock;                /*   160    40 */
	/* --- cacheline 3 boundary (192 bytes) was 8 bytes ago --- */
	class list<std::__1::unique_ptr<Logger, std::__1::default_delete<Logger> >, std::__1::allocator<std::__1::unique_ptr<Logger, std::__1::default_delete<Logger> > > > m_children; /*   200    24 */
	stringconst                m_name;               /*   224    24 */
	void InitializeRootLogger(class Logger &);

	const char  * LogLevelToString(enum LogLevel);

	enum LogLevel StringToLogLevel(const char  *);

	class Logger & GetOrCreateLog(const string  &);

	void PrintLoggerTree(void);

	void CleanUpAllLoggers(void);

	void Logger(class Logger *, string, class Logger *);

	void ~Logger(class Logger *);

	void Logger(class Logger *, const class Logger  &);

	void Logger(class Logger *, );

	void operator=(class Logger *, const class Logger  &);

	void operator=(class Logger *, );

	void Reset(class Logger *);

	void OutputMessage(class Logger *, enum LogLevel, const char  *, int, int, const char  *);

	const string  & GetName(class Logger *);

	void SetLevel(class Logger *, enum LogLevel);

	enum LogLevel GetLevel(class Logger *);

	volatile int  * GetFinalLogLevelAddress(class Logger *);

	enum LogLevel GetLevelRelaxed(class Logger *);

	enum LogLevel GetLocalLevel(class Logger *);

	bool IsInSubtree(class Logger *, class Logger &);

	void ParseLogVariables(class Logger *, const char  *, int, char *);

	void Output(class Logger *, class LoggerMessage &);

	void UpdateFinalLogLevel(class Logger *);

	void PrintLoggerTree(class Logger *, int);


	/* size: 248, cachelines: 4, members: 8, static members: 1 */
	/* last cacheline: 56 bytes */
};
class LoggerOutputList : public SharedPtrList<LoggerOutput> {
public:

	/* class SharedPtrList<LoggerOutput> <ancestor>; */ /*     0    72 */
	void Output(class LoggerOutputList *, class LoggerMessage &);


	/* size: 72, cachelines: 2, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 72 != 0 + 0(holes), diff = 72 */

};
class SharedPtrList<LoggerOutput> {
	int ()(void) * *           _vptr$SharedPtrList;  /*     0     8 */
protected:

	struct atomic<unsigned long> m_size;             /*     8     8 */
	class mutex               m_writeMtx;            /*    16    40 */
	class shared_ptr<std::__1::vector<std::__1::shared_ptr<LoggerOutput>, std::__1::allocator<std::__1::shared_ptr<LoggerOutput> > > > m_list; /*    56    16 */
public:

	void SharedPtrList(class SharedPtrList<LoggerOutput> *);

	virtual void ~SharedPtrList(class SharedPtrList<LoggerOutput> *);

	void Add(class SharedPtrList<LoggerOutput> *, class shared_ptr<LoggerOutput>);

	void Remove(class SharedPtrList<LoggerOutput> *, class shared_ptr<LoggerOutput>);

	void Remove(class SharedPtrList<LoggerOutput> *, class LoggerOutput &);

	void Reset(class SharedPtrList<LoggerOutput> *);

	class shared_ptr<const std::__1::vector<std::__1::shared_ptr<LoggerOutput>, std::__1::allocator<std::__1::shared_ptr<LoggerOutp GetList(const class SharedPtrList<LoggerOutput>  *);

	size_t GetSize(class SharedPtrList<LoggerOutput> *);

	/* vtable has 1 entries: {
	   [0] = ~SharedPtrList((null)), 
	} */
	/* size: 72, cachelines: 2, members: 4 */
	/* last cacheline: 8 bytes */
};
struct __pthread_internal_list {
	class __pthread_internal_list * __prev;          /*     0     8 */
	class __pthread_internal_list * __next;          /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
class LoggerOutput {
	int ()(void) * *           _vptr$LoggerOutput;   /*     0     8 */
public:

	class LoggerFilterList    Filters;               /*     8    72 */
	/* --- cacheline 1 boundary (64 bytes) was 16 bytes ago --- */
	struct atomic<LogLevel>    m_logLevel;           /*    80     4 */

	/* XXX 4 bytes hole, try to pack */

	class shared_ptr<const std::__1::basic_string<char> > m_format; /*    88    16 */
	void LoggerOutput(class LoggerOutput *, enum LogLevel, string);

	virtual void ~LoggerOutput(class LoggerOutput *);

	void SetLevel(class LoggerOutput *, enum LogLevel);

	enum LogLevel GetLevel(class LoggerOutput *);

	string GetFormat(class LoggerOutput *);

	void SetFormat(class LoggerOutput *, string);

	void Format(class LoggerOutput *, class LoggerMessage &, char *, size_t);

	virtual void Output(class LoggerOutput *, class LoggerMessage &, const char  *) = 0;

	/* vtable has 2 entries: {
	   [0] = ~LoggerOutput((null)), 
	   [2] = Output((null)), 
	} */
	/* size: 104, cachelines: 2, members: 4 */
	/* sum members: 100, holes: 1, sum holes: 4 */
	/* last cacheline: 40 bytes */
};
class LoggerFilterList : public SharedPtrList<LoggerFilter> {
public:

	/* class SharedPtrList<LoggerFilter> <ancestor>; */ /*     0    72 */
	bool Filter(class LoggerFilterList *, class LoggerMessage &);


	/* size: 72, cachelines: 2, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 72 != 0 + 0(holes), diff = 72 */

};
class SharedPtrList<LoggerFilter> {
	int ()(void) * *           _vptr$SharedPtrList;  /*     0     8 */
protected:

	struct atomic<unsigned long> m_size;             /*     8     8 */
	class mutex               m_writeMtx;            /*    16    40 */
	class shared_ptr<std::__1::vector<std::__1::shared_ptr<LoggerFilter>, std::__1::allocator<std::__1::shared_ptr<LoggerFilter> > > > m_list; /*    56    16 */
public:

	void SharedPtrList(class SharedPtrList<LoggerFilter> *);

	virtual void ~SharedPtrList(class SharedPtrList<LoggerFilter> *);

	void Add(class SharedPtrList<LoggerFilter> *, class shared_ptr<LoggerFilter>);

	void Remove(class SharedPtrList<LoggerFilter> *, class shared_ptr<LoggerFilter>);

	void Remove(class SharedPtrList<LoggerFilter> *, class LoggerFilter &);

	void Reset(class SharedPtrList<LoggerFilter> *);

	class shared_ptr<const std::__1::vector<std::__1::shared_ptr<LoggerFilter>, std::__1::allocator<std::__1::shared_ptr<LoggerFilt GetList(const class SharedPtrList<LoggerFilter>  *);

	size_t GetSize(class SharedPtrList<LoggerFilter> *);

	/* vtable has 1 entries: {
	   [0] = ~SharedPtrList((null)), 
	} */
	/* size: 72, cachelines: 2, members: 4 */
	/* last cacheline: 8 bytes */
};
class LoggerFilter {
	int ()(void) * *           _vptr$LoggerFilter;   /*     0     8 */
public:

	virtual void ~LoggerFilter(class LoggerFilter *);

	virtual bool Filter(class LoggerFilter *, class LoggerMessage &) = 0;

	/* vtable has 2 entries: {
	   [0] = ~LoggerFilter((null)), 
	   [2] = Filter((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct LoggerMessage {
	class Logger *             logger;               /*     0     8 */
	enum LogLevel              level;                /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	const char  *              file;                 /*    16     8 */
	int                        line;                 /*    24     4 */
	int                        threadId;             /*    28     4 */
	ULONGLONG                  appThreadId;          /*    32     8 */
	ULONGLONG                  appProcessId;         /*    40     8 */
	id                         cthread;              /*    48     8 */
	long long unsigned int     time;                 /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	const char  *              message;              /*    64     8 */
	void LoggerMessage(class LoggerMessage *);

	bool operator==(const class LoggerMessage  *, const class LoggerMessage  &);

	bool operator!=(const class LoggerMessage  *, const class LoggerMessage  &);


	/* size: 72, cachelines: 2, members: 10 */
	/* sum members: 68, holes: 1, sum holes: 4 */
	/* last cacheline: 8 bytes */
};
class HEThreadCapture : public ListEnum {
public:

	/* class ListEnum            <ancestor>; */      /*     0    72 */
	/* --- cacheline 1 boundary (64 bytes) was 8 bytes ago --- */
	class map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > > processedPebs; /*    72    24 */
	void HEThreadCapture(class HEThreadCapture *, UINT64);

	virtual bool ProcessObject(class HEThreadCapture *, UINT64, void *);

	void ~HEThreadCapture(class HEThreadCapture *);

	/* vtable has 1 entries: {
	   [0] = ProcessObject((null)), 
	} */
	/* size: 96, cachelines: 2, members: 2 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 96 != 24 + 0(holes), diff = 72 */

};
class RingBufferCapture : public ListEnum {
public:

	/* class ListEnum            <ancestor>; */      /*     0    72 */
	void RingBufferCapture(class RingBufferCapture *, UINT64);

	virtual bool ProcessObject(class RingBufferCapture *, UINT64, void *);

	/* vtable has 1 entries: {
	   [0] = ProcessObject((null)), 
	} */
	/* size: 72, cachelines: 2, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 72 != 0 + 0(holes), diff = 72 */

};
class TaskCapture : public ListCapture {
public:

	/* class ListCapture         <ancestor>; */      /*     0    88 */
	void TaskCapture(class TaskCapture *, UINT64);


	/* size: 88, cachelines: 2, members: 1 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 88 != 0 + 0(holes), diff = 88 */

};
class WorkerCapture : public ListCapture {
public:

	/* class ListCapture         <ancestor>; */      /*     0    88 */
	void WorkerCapture(class WorkerCapture *, UINT64);


	/* size: 88, cachelines: 2, members: 1 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 88 != 0 + 0(holes), diff = 88 */

};
class SchedulerCapture : public ListEnum {
public:

	/* class ListEnum            <ancestor>; */      /*     0    72 */
	void SchedulerCapture(class SchedulerCapture *, UINT64);

	virtual bool ProcessObject(class SchedulerCapture *, UINT64, void *);

	/* vtable has 1 entries: {
	   [0] = ProcessObject((null)), 
	} */
	/* size: 72, cachelines: 2, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 72 != 0 + 0(holes), diff = 72 */

};
class SchedulerNodeCapture : public ListEnum {
public:

	/* class ListEnum            <ancestor>; */      /*     0    72 */
	void SchedulerNodeCapture(class SchedulerNodeCapture *, UINT64);

	virtual bool ProcessObject(class SchedulerNodeCapture *, UINT64, void *);

	/* vtable has 1 entries: {
	   [0] = ProcessObject((null)), 
	} */
	/* size: 72, cachelines: 2, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 72 != 0 + 0(holes), diff = 72 */

};
class MemoryNodeCapture : public ListCapture {
public:

	/* class ListCapture         <ancestor>; */      /*     0    88 */
	void MemoryNodeCapture(class MemoryNodeCapture *, UINT64);


	/* size: 88, cachelines: 2, members: 1 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 88 != 0 + 0(holes), diff = 88 */

};
class HEModuleCapture : public ListEnum {
public:

	/* class ListEnum            <ancestor>; */      /*     0    72 */
	void HEModuleCapture(class HEModuleCapture *, UINT64);

	virtual bool ProcessObject(class HEModuleCapture *, UINT64, void *);

	/* vtable has 1 entries: {
	   [0] = ProcessObject((null)), 
	} */
	/* size: 72, cachelines: 2, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 72 != 0 + 0(holes), diff = 72 */

};
class PendingIoCapture : public ListCapture {
public:

	/* class ListCapture         <ancestor>; */      /*     0    88 */
	void PendingIoCapture(class PendingIoCapture *, UINT64);


	/* size: 88, cachelines: 2, members: 1 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 88 != 0 + 0(holes), diff = 88 */

};
class LDRModulesCapture : public ListEnum {
public:

	/* class ListEnum            <ancestor>; */      /*     0    72 */
	void LDRModulesCapture(class LDRModulesCapture *, UINT64);

	virtual bool ProcessObject(class LDRModulesCapture *, UINT64, void *);

	/* vtable has 1 entries: {
	   [0] = ProcessObject((null)), 
	} */
	/* size: 72, cachelines: 2, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 72 != 0 + 0(holes), diff = 72 */

};
struct dirent {
	__ino_t                    d_ino;                /*     0     8 */
	__off_t                    d_off;                /*     8     8 */
	unsigned short             d_reclen;             /*    16     2 */
	unsigned char              d_type;               /*    18     1 */
	char                       d_name[0];            /*    19     0 */

	/* size: 280, cachelines: 5, members: 5 */
	/* padding: 261 */
	/* last cacheline: 24 bytes */
};
struct stat {
	__dev_t                    st_dev;               /*     0     8 */
	__ino_t                    st_ino;               /*     8     8 */
	__nlink_t                  st_nlink;             /*    16     8 */
	__mode_t                   st_mode;              /*    24     4 */
	__uid_t                    st_uid;               /*    28     4 */
	__gid_t                    st_gid;               /*    32     4 */
	int                        __pad0;               /*    36     4 */
	__dev_t                    st_rdev;              /*    40     8 */
	__off_t                    st_size;              /*    48     8 */
	__blksize_t                st_blksize;           /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	__blkcnt_t                 st_blocks;            /*    64     8 */
	struct timespec            st_atim;              /*    72    16 */
	struct timespec            st_mtim;              /*    88    16 */
	struct timespec            st_ctim;              /*   104    16 */
	__syscall_slong_t          __glibc_reserved[0];  /*   120     0 */

	/* size: 144, cachelines: 3, members: 15 */
	/* padding: 24 */
	/* last cacheline: 16 bytes */
};
struct timespec {
	__time_t                   tv_sec;               /*     0     8 */
	__syscall_slong_t          tv_nsec;              /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct RootLoggerData {
	class Logger              rootLogger;            /*     0   248 */
	/* --- cacheline 3 boundary (192 bytes) was 56 bytes ago --- */
	class unordered_map<std::__1::basic_string<char>, Logger *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, Logger *> > > loggerMap; /*   248    40 */
	/* --- cacheline 4 boundary (256 bytes) was 32 bytes ago --- */
	class mutex               loggerMapMutex;        /*   288    40 */
	void RootLoggerData(class RootLoggerData *);

	void ~RootLoggerData(class RootLoggerData *);


	/* size: 328, cachelines: 6, members: 3 */
	/* last cacheline: 8 bytes */
};
class StdOutLoggerOutput : public LoggerOutput {
public:

	/* class LoggerOutput        <ancestor>; */      /*     0   104 */
	/* --- cacheline 1 boundary (64 bytes) was 40 bytes ago --- */
	boolconst                  m_colorSupported;     /*   104     1 */
	void StdOutLoggerOutput(class StdOutLoggerOutput *, enum LogLevel);

	virtual void Output(class StdOutLoggerOutput *, class LoggerMessage &, const char  *);

	/* vtable has 1 entries: {
	   [2] = Output((null)), 
	} */
	/* size: 112, cachelines: 2, members: 2 */
	/* padding: 7 */
	/* last cacheline: 48 bytes */

	/* BRAIN FART ALERT! 112 != 1 + 0(holes), diff = 111 */

};
class LogVariableBase {
	int ()(void) * *           _vptr$LogVariableBase; /*     0     8 */
	static class LogVariableBase *    sm_list        /*     0     0 */
	const char  *              m_name;               /*     8     8 */
	class LogVariableBase *    m_next;               /*    16     8 */
public:

	class LogVariableBase * Find(const char  *);

	string StackToString(void);

	void LogVariableBase(class LogVariableBase *, const char  *);

	void LogVariableBase(class LogVariableBase *, );

	void LogVariableBase(class LogVariableBase *, const class LogVariableBase  &);

	class LogVariableBase & operator=(class LogVariableBase *, const class LogVariableBase  &);

	class LogVariableBase & operator=(class LogVariableBase *, );

	virtual void ~LogVariableBase(class LogVariableBase *);

	virtual size_t Print(class LogVariableBase *, char *, size_t) = 0;

	/* vtable has 2 entries: {
	   [0] = ~LogVariableBase((null)), 
	   [2] = Print((null)), 
	} */
	/* size: 24, cachelines: 1, members: 3, static members: 1 */
	/* last cacheline: 24 bytes */
};
struct LoggerRingBufferData {
	class mutex               allLoggerRingBuffersMutex; /*     0    40 */
	class RingBufferLoggerOutput * allLoggerRingBuffers[0]; /*    40     0 */
	void LoggerRingBufferData(class LoggerRingBufferData *);


	/* size: 552, cachelines: 9, members: 2 */
	/* padding: 512 */
	/* last cacheline: 40 bytes */
};
class RingBufferLoggerOutput : public LoggerOutput {
public:

	/* class LoggerOutput        <ancestor>; */      /*     0   104 */
	/* --- cacheline 1 boundary (64 bytes) was 40 bytes ago --- */
	size_t                     m_allLoggerRingBuffersIndex; /*   104     8 */
	class RingBuffer<std::__1::basic_string<char>, 1024, ConcurrentRingAllocator<std::__1::mutex> > m_ringBuffer; /*   112 90120 */

	/* XXX last struct has 4 bytes of padding */
	void RingBufferLoggerOutput(class RingBufferLoggerOutput *, enum LogLevel);

	virtual void ~RingBufferLoggerOutput(class RingBufferLoggerOutput *);

	virtual void Output(class RingBufferLoggerOutput *, class LoggerMessage &, const char  *);

	string GetEntry(class RingBufferLoggerOutput *, size_t);

	/* vtable has 2 entries: {
	   [0] = ~RingBufferLoggerOutput((null)), 
	   [2] = Output((null)), 
	} */
	/* size: 90232, cachelines: 1410, members: 3 */
	/* paddings: 1, sum paddings: 4 */
	/* last cacheline: 56 bytes */

	/* BRAIN FART ALERT! 90232 != 90128 + 0(holes), diff = 104 */

};
class RingBuffer<std::__1::basic_string<char>, 1024, ConcurrentRingAllocator<std::__1::mutex> > {
	RingEntry                  m_RingBuffer[0];      /*     0     0 */

	/* XXX 24576 bytes hole, try to pack */
	typedef struct pair<ConcurrentRingAllocator<std::__1::mutex>::Header, std::__1::basic_string<char> > RingEntry;


	/* --- cacheline 1408 boundary (90112 bytes) --- */
	Sequence                   m_Sequence;           /* 90112     4 */
public:

	void RingBuffer(class RingBuffer<std::__1::basic_string<char>, 1024, ConcurrentRingAllocator<std::__1::mutex> > *);

	void ~RingBuffer(class RingBuffer<std::__1::basic_string<char>, 1024, ConcurrentRingAllocator<std::__1::mutex> > *);

	const RingEntry  & GetRingEntry(class RingBuffer<std::__1::basic_string<char>, 1024, ConcurrentRingAllocator<std::__1::mutex> > *, size_t);

	void Emplace<const char *&>(class RingBuffer<std::__1::basic_string<char>, 1024, ConcurrentRingAllocator<std::__1::mutex> > *, const char  * &);


	/* size: 90120, cachelines: 1409, members: 2 */
	/* sum members: 4, holes: 1, sum holes: 24576 */
	/* padding: 4 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 90120 != 4 + 24576(holes), diff = 65540 */

};
class ConcurrentRingAllocator<std::__1::mutex> {
	struct Header : RingEntryHeader {
		/* struct RingEntryHeader     <ancestor>; */     /*     0    24 */
		class mutex               m_Lock;                /*    24    40 */
		void Header(class Header *);

		void ~Header(class Header *);


		/* size: 64, cachelines: 1, members: 2 */

		/* BRAIN FART ALERT! 64 != 40 + 0(holes), diff = 24 */

	};

	typedef atomic_uint Sequence;

public:

	void Emplace<std::__1::basic_string<char>, 1024, const char *&>(Sequence &, class pair<ConcurrentRingAllocator<std::__1::mutex>::Header, std::__1::basic_string<char> > *, const char  * &);


	/* size: 1, cachelines: 0, members: 0 */
	/* last cacheline: 1 bytes */
};
struct RingEntryHeader {
	unsigned int               m_Sequence;           /*     0     4 */
	pid_t                      m_Tid;                /*     4     4 */
	unsigned int               m_Cpu;                /*     8     4 */
	unsigned int               m_Node;               /*    12     4 */
	uint64_t                   m_Time;               /*    16     8 */
	void RingEntryHeader(class RingEntryHeader *);

	void Initialize(class RingEntryHeader *, unsigned int);


	/* size: 24, cachelines: 1, members: 5 */
	/* last cacheline: 24 bytes */
};
class VfsStream {
	int ()(void) * *           _vptr$VfsStream;      /*     0     8 */
protected:

	enum StreamType            m_streamType;         /*     8     4 */

	/* XXX 4 bytes hole, try to pack */
	enum StreamType {
		Unknown = 0,
		File = 1,
		Directory = 2,
	};


	class FileUri             m_uri;                 /*    16   256 */
	/* --- cacheline 4 boundary (256 bytes) was 16 bytes ago --- */
	struct stat                m_statistics;         /*   272   144 */

	/* XXX last struct has 24 bytes of padding */

	/* --- cacheline 6 boundary (384 bytes) was 32 bytes ago --- */
	struct statvfs             m_vfsStatInfo;        /*   416   112 */

	/* XXX last struct has 24 bytes of padding */

	/* --- cacheline 8 boundary (512 bytes) was 16 bytes ago --- */
	class shared_ptr<BlockDevice> m_blockDevice;     /*   528    16 */
public:

	void VfsStream(class VfsStream *, enum StreamType);

	virtual void ~VfsStream(class VfsStream *);

	virtual class SystemStatus Delete(class VfsStream *) = 0;

	virtual class SystemStatus RefreshStatistics(class VfsStream *) = 0;

	ino_t GetUniqueId(const class VfsStream  *);

	bool IsDirectory(const class VfsStream  *);

	bool IsFile(const class VfsStream  *);

	virtual size_t GetSize(class VfsStream *);

	size_t GetTotalFileSystemSize(const class VfsStream  *);

	size_t GetAvailableFileSystemSize(const class VfsStream  *);

	time_t GetCreationTime(const class VfsStream  *);

	time_t GetLastWriteTime(const class VfsStream  *);

	blksize_t GetBlockSize(const class VfsStream  *);

	blkcnt_t GetBlockCount(const class VfsStream  *);

	uint32_t GetLogicalSectorSizeInBytes(const class VfsStream  *);

	uint32_t GetPhysicalSectorSizeInBytes(const class VfsStream  *);

	const string  & GetDevicePath(const class VfsStream  *);

	const class stat  & GetStat(const class VfsStream  *);

	const class statvfs  & GetStatvfs(const class VfsStream  *);

	ino_t GenerateUniqueId(string &);

	class SystemStatus UpdateBlockDeviceIfNeeded(class VfsStream *);

	class shared_ptr<BlockDevice> GetBlockDevice(class VfsStream *);

	void SetBlockDevice(class VfsStream *, class shared_ptr<BlockDevice>);

	const class BlockDeviceSysInfo  & GetBlockDeviceSysInfo(const class VfsStream  *);

	void DestroyBlockDevice(class VfsStream *);

	void VfsStream(class VfsStream *, const class VfsStream  &);

	void VfsStream(class VfsStream *, );

	class VfsStream & operator=(class VfsStream *, const class VfsStream  &);

	/* vtable has 4 entries: {
	   [0] = ~VfsStream((null)), 
	   [2] = Delete((null)), 
	   [3] = RefreshStatistics((null)), 
	   [4] = GetSize((null)), 
	} */
	/* size: 544, cachelines: 9, members: 6 */
	/* sum members: 540, holes: 1, sum holes: 4 */
	/* paddings: 2, sum paddings: 48 */
	/* last cacheline: 32 bytes */
};
class FileUri : public Uri {
public:

	/* class Uri                 <ancestor>; */      /*     0   184 */
	/* --- cacheline 2 boundary (128 bytes) was 56 bytes ago --- */
	string                     m_filePath;           /*   184    24 */
	/* --- cacheline 3 boundary (192 bytes) was 16 bytes ago --- */
	string                     m_directoryPath;      /*   208    24 */
	class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > m_pathSegments; /*   232    24 */
	void FileUri(class FileUri *);

	class FileUri & operator=(class FileUri *, const class FileUri  &);

	void Load(class FileUri *, const string  &);

	void LoadEncoded(class FileUri *, const string  &);

	void Load(class FileUri *, const class Uri  &);

	void Merge(class FileUri *, const class Uri  &, const string  &);

	void Merge(class FileUri *, class Uri &, class Uri &);

	const string  & GetUriWithTarget(const class FileUri  *);

	const string  & GetUriWithoutTarget(const class FileUri  *);

	stringconst GetUriTarget(const class FileUri  *);

	const class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >  & GetFileUriPath(const class FileUri  *);

	class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >const GetFileUriFullPath(const class FileUri  *);

	string GenerateDirectoryPath(const class FileUri  *);

	class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >const GetPathSegments(const class FileUri  *);

	void ValidateScheme(const class FileUri  *);

	string DecodeUri(const class FileUri  *, const string  &);

	string EncodeUri(const class FileUri  *, const string  &);

	virtual void ~FileUri(class FileUri *);

	/* vtable has 1 entries: {
	   [0] = ~FileUri((null)), 
	} */
	/* size: 256, cachelines: 4, members: 4 */

	/* BRAIN FART ALERT! 256 != 72 + 0(holes), diff = 184 */

};
class Uri {
	int ()(void) * *           _vptr$Uri;            /*     0     8 */
protected:

	string                     m_scheme;             /*     8    24 */
	string                     m_authority;          /*    32    24 */
	class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > m_path; /*    56    24 */
	/* --- cacheline 1 boundary (64 bytes) was 16 bytes ago --- */
	string                     m_target;             /*    80    24 */
	string                     m_query;              /*   104    24 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	string                     m_fragment;           /*   128    24 */
	string                     m_uri;                /*   152    24 */
	bool                       m_isLoaded;           /*   176     1 */
	bool                       m_isAbsoluteUri;      /*   177     1 */
	bool                       m_hasScheme;          /*   178     1 */
	bool                       m_hasAuthority;       /*   179     1 */
	bool                       m_hasPath;            /*   180     1 */
	bool                       m_hasTarget;          /*   181     1 */
	bool                       m_hasQuery;           /*   182     1 */
	bool                       m_hasFragment;        /*   183     1 */
public:

	void Uri(class Uri *);

	void Uri(class Uri *, const class Uri  &);

	void Load(class Uri *, const string  &);

	void Merge(class Uri *, const class Uri  &, const string  &);

	void Merge(class Uri *, const class Uri  &, const class Uri  &);

	virtual void ~Uri(class Uri *);

	bool IsValid(const class Uri  *);

	bool IsAbsolute(const class Uri  *);

	bool HasScheme(const class Uri  *);

	const string  & GetScheme(const class Uri  *);

	bool HasAuthority(const class Uri  *);

	const string  & GetAuthority(const class Uri  *);

	bool HasPath(const class Uri  *);

	const class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >  & GetPath(const class Uri  *);

	bool HasTarget(const class Uri  *);

	const string  & GetTarget(const class Uri  *);

	bool HasQuery(const class Uri  *);

	const string  & GetQuery(const class Uri  *);

	bool HasFragment(const class Uri  *);

	const string  & GetFragment(const class Uri  *);

	const string  & GetUri(const class Uri  *);

	class Uri & operator=(class Uri *, const class Uri  &);

	void Reset(class Uri *);

protected:

	string Canonicalize(class Uri *, const string  &);

	void Parse(class Uri *, const string  &);

	void MergeHelper(class Uri *, const class Uri  &, const class Uri  &);

	class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > RemoveDotSegments(class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >);

	class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > MergePaths(class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >);

	void BuildUri(class Uri *);

	/* vtable has 1 entries: {
	   [0] = ~Uri((null)), 
	} */
	/* size: 184, cachelines: 3, members: 16 */
	/* last cacheline: 56 bytes */
};
struct statvfs {
	long unsigned int          f_bsize;              /*     0     8 */
	long unsigned int          f_frsize;             /*     8     8 */
	__fsblkcnt_t               f_blocks;             /*    16     8 */
	__fsblkcnt_t               f_bfree;              /*    24     8 */
	__fsblkcnt_t               f_bavail;             /*    32     8 */
	__fsfilcnt_t               f_files;              /*    40     8 */
	__fsfilcnt_t               f_ffree;              /*    48     8 */
	__fsfilcnt_t               f_favail;             /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	long unsigned int          f_fsid;               /*    64     8 */
	long unsigned int          f_flag;               /*    72     8 */
	long unsigned int          f_namemax;            /*    80     8 */
	int                        __f_spare[0];         /*    88     0 */

	/* size: 112, cachelines: 2, members: 12 */
	/* padding: 24 */
	/* last cacheline: 48 bytes */
};
class BlockDevice {
	pthread_t                  m_flushThread;        /*     0     8 */
	class AutoResetEvent      m_wakeupFlushEvent;    /*     8    96 */

	/* XXX last struct has 7 bytes of padding */

	/* --- cacheline 1 boundary (64 bytes) was 40 bytes ago --- */
	struct atomic<bool>        m_stopFlushThread;    /*   104     1 */

	/* XXX 7 bytes hole, try to pack */

	struct atomic<_DK_ASYNC_RESULTS_LINKED *> m_pendingIOHead; /*   112     8 */
	class PthreadSpinlock     m_InitLock;            /*   120     4 */

	/* XXX 4 bytes hole, try to pack */

	/* --- cacheline 2 boundary (128 bytes) --- */
	class BlockDeviceSysInfo  m_blockDeviceSysInfo;  /*   128   224 */
public:

	void BlockDevice(class BlockDevice *);

	void ~BlockDevice(class BlockDevice *);

	void Initialize(class BlockDevice *, const class stat  &);

	void UpdateMinorDevicesInfo(class BlockDevice *, const class stat  &);

	class SystemStatus StartFlushHelper(class BlockDevice *);

	class BlockDeviceSysInfo & GetBlockDeviceSysInfo(class BlockDevice *);

	const class BlockDeviceSysInfo  & GetBlockDeviceSysInfo(const class BlockDevice  *);

	void PendAsyncResult(class BlockDevice *, PDK_ASYNC_RESULTS_LINKED);

	void SignalFlush(class BlockDevice *);

	class SystemStatus CreateBlockDeviceForStream(class VfsStream *);

	dev_t GetCacheKey(dev_tconst);

	dev_t GetCacheKey(const class BlockDevice  *);

	bool DoFlushWork(class BlockDevice *);

	void * FlushThread(void *);

	void BlockDevice(class BlockDevice *, const class BlockDevice  &);

	class BlockDevice & operator=(class BlockDevice *, const class BlockDevice  &);


	/* size: 352, cachelines: 6, members: 6 */
	/* sum members: 341, holes: 2, sum holes: 11 */
	/* paddings: 1, sum paddings: 7 */
	/* last cacheline: 32 bytes */
};
class AutoResetEvent {
	class mutex               m_mutex;               /*     0    40 */
	class condition_variable  m_cond;                /*    40    48 */
	/* --- cacheline 1 boundary (64 bytes) was 24 bytes ago --- */
	bool                       m_signalled;          /*    88     1 */
public:

	void AutoResetEvent(class AutoResetEvent *);

	void Signal(class AutoResetEvent *);

	void Wait(class AutoResetEvent *);

	void AutoResetEvent(class AutoResetEvent *, const class AutoResetEvent  &);

	class AutoResetEvent & operator=(class AutoResetEvent *, const class AutoResetEvent  &);


	/* size: 96, cachelines: 2, members: 3 */
	/* padding: 7 */
	/* last cacheline: 32 bytes */
};
struct _DK_ASYNC_RESULTS_LINKED {
	DK_ASYNC_RESULTS           Result;               /*     0     8 */
	DKHANDLE                   AsyncIOStream;        /*     8     8 */
	BOOLEAN                    FastPath;             /*    16     1 */
	BOOLEAN                    Synchronous;          /*    17     1 */

	/* XXX 6 bytes hole, try to pack */

	DKHANDLE                   AsyncRequestHandle;   /*    24     8 */
	void *                     Next;                 /*    32     8 */
	void *                     Request;              /*    40     8 */
	void *                     Context;              /*    48     8 */
	struct _DK_ALTERNATE_FLUSH_INFO AlternateFlushInfo; /*    56    32 */

	/* XXX last struct has 8 bytes of padding */
	struct _DK_ALTERNATE_FLUSH_INFO {
		BOOLEAN                    Enabled;              /*     0     1 */
		BOOLEAN                    FlushResponse;        /*     1     1 */

		/* XXX 6 bytes hole, try to pack */

		void *                     ParentFile;           /*     8     8 */
		void *                     AioContext;           /*    16     8 */
		char                       _Padding[0];          /*    24     0 */

		/* size: 32, cachelines: 1, members: 5 */
		/* sum members: 18, holes: 1, sum holes: 6 */
		/* padding: 8 */
		/* last cacheline: 32 bytes */
	};


	/* --- cacheline 1 boundary (64 bytes) was 24 bytes ago --- */
	ULONG64                    reserved[0];          /*    88     0 */

	/* XXX 128 bytes hole, try to pack */

	/* --- cacheline 3 boundary (192 bytes) was 24 bytes ago --- */
	PDK_ASYNC_SCATTER_GATHER_DATA reservedScatterGather; /*   216     8 */

	/* size: 224, cachelines: 4, members: 11 */
	/* sum members: 90, holes: 2, sum holes: 134 */
	/* paddings: 1, sum paddings: 8 */
	/* last cacheline: 32 bytes */
};
struct _DK_ASYNC_RESULTS {
	DKSTATUS                   Status;               /*     0     4 */
	union {
		struct {
			ULONG      BytesRead;            /*     4     4 */
		} StreamRead;                            /*     4     4 */
		struct {
			ULONG      BytesWritten;         /*     4     4 */
		} StreamWrite;                           /*     4     4 */
	} u;                                             /*     4     4 */
	union {
		struct {
			ULONG              BytesRead;            /*     0     4 */
		} StreamRead;                                    /*     0     4 */
		struct {
			ULONG              BytesWritten;         /*     0     4 */
		} StreamWrite;                                   /*     0     4 */
	};


	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
struct _DK_ASYNC_SCATTER_GATHER_DATA {
	ULONG64                    Reserved[0];          /*     0     0 */

	/* size: 16384, cachelines: 256, members: 1 */
	/* padding: 16384 */
};
class PthreadSpinlock {
	pthread_spinlock_t         m_lock;               /*     0     4 */
public:

	void PthreadSpinlock(class PthreadSpinlock *);

	void ~PthreadSpinlock(class PthreadSpinlock *);

	void lock(class PthreadSpinlock *);

	bool try_lock(class PthreadSpinlock *);

	void unlock(class PthreadSpinlock *);

	void PthreadSpinlock(class PthreadSpinlock *, const class PthreadSpinlock  &);

	class PthreadSpinlock & operator=(class PthreadSpinlock *, const class PthreadSpinlock  &);


	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
class BlockDeviceSysInfo {
	static uint32_tconst              DefaultSectorSize = 4096; /*     0     0 */
	static boolconst                  m_DpoFuaEnabled /*     0     0 */
	uint32_t                   m_LogicalSectorSize;  /*     0     4 */
	uint32_t                   m_PhysicalSectorSize; /*     4     4 */
	uint64_t                   m_DeviceSize;         /*     8     8 */
	string                     m_DevicePath;         /*    16    24 */
	class unordered_map<int, MinorDevice, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, MinorDevice> > > m_MinorDevices; /*    40    40 */
	/* --- cacheline 1 boundary (64 bytes) was 16 bytes ago --- */
	int                        m_MajorDeviceId;      /*    80     4 */
	int                        m_MinorDeviceId;      /*    84     4 */
	dev_t                      m_RootDeviceId;       /*    88     8 */
	class RWLock              m_MinorDevLock;        /*    96   128 */
public:

	void BlockDeviceSysInfo(class BlockDeviceSysInfo *);

	uint32_t GetDefaultSectorSize(void);

	dev_t GetRootDeviceId(dev_tconst);

	int GetMajorDeviceId(dev_tconst);

	int GetMinorDeviceId(dev_tconst);

	void LoadInfo(class BlockDeviceSysInfo *, const class stat  &);

	class SystemStatus StartFlushHelper(class BlockDeviceSysInfo *, dev_tconst);

	uint32_t GetLogicalSectorSize(const class BlockDeviceSysInfo  *);

	uint32_t GetPhysicalSectorSize(const class BlockDeviceSysInfo  *);

	uint64_t GetDeviceSize(const class BlockDeviceSysInfo  *);

	const string  & GetDevicePath(const class BlockDeviceSysInfo  *);

	int GetMajorDeviceId(const class BlockDeviceSysInfo  *);

	int GetMinorDeviceId(const class BlockDeviceSysInfo  *);

	bool IsPmmDevice(class BlockDeviceSysInfo *, dev_tconst);

	int GetPmmNumaNtNodeId(class BlockDeviceSysInfo *, dev_tconst);

	void AddMinorDeviceIfAbsent(class BlockDeviceSysInfo *, const class stat  &);

	bool IsDpuFUACompliant(const class BlockDeviceSysInfo  *);

	dev_t GetDeviceId(const class BlockDeviceSysInfo  *);

	dev_t GetRootDeviceId(const class BlockDeviceSysInfo  *);

	void SetDeviceIds(class BlockDeviceSysInfo *, dev_tconst);

	class SystemStatus ReadBlockSizeValue(class BlockDeviceSysInfo *, const char  *, const char  *, uint64_t *);

	class SystemStatus SetRootDeviceAttributes(class BlockDeviceSysInfo *);

	void LoadMinorDeviceInfo(class BlockDeviceSysInfo *, const class stat  &, class MinorDevice &);

	void DetectPmemStatus(class BlockDeviceSysInfo *, const class stat  &, class MinorDevice &);

	bool DetectPmemStatusFromSysfs(class BlockDeviceSysInfo *, const class stat  &, const char  *);

	bool ReadProcPartitionFile(class BlockDeviceSysInfo *, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > &, const char  *);

	class SystemStatus GetDevicePathFromId(class BlockDeviceSysInfo *, dev_tconst, class MinorDevice &, const char  *);

	void DetectPmemStatusFromMount(class BlockDeviceSysInfo *, class MinorDevice &);

	void ConvertFileSystemToEnum(class BlockDeviceSysInfo *, const char  *, enum FsType &);

	void BlockDeviceSysInfo(class BlockDeviceSysInfo *, const class BlockDeviceSysInfo  &);

	class BlockDeviceSysInfo & operator=(class BlockDeviceSysInfo *, const class BlockDeviceSysInfo  &);


	/* size: 224, cachelines: 4, members: 9, static members: 2 */
	/* last cacheline: 32 bytes */
};
struct MinorDevice {
	int                        m_PmmNumaNtNodeId;    /*     0     4 */
	enum FsType                m_FsType;             /*     4     4 */
	string                     m_MountOptions;       /*     8    24 */
	string                     m_DevicePath;         /*    32    24 */
	uint64_t                   m_NumOfBlocks;        /*    56     8 */
	void MinorDevice(class MinorDevice *);


	/* size: 64, cachelines: 1, members: 5 */
};
class RWLock {
	pthread_rwlock_t           m_rwLock;             /*     0    56 */
	bool                       m_initialized;        /*    56     1 */

	/* XXX 3 bytes hole, try to pack */

	struct atomic<int>         m_numLocks;           /*    60     4 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	class list<int, std::__1::allocator<int> > m_readLockList; /*    64    24 */
	class mutex               m_readLockListMutex;   /*    88    40 */
public:

	void RWLock(class RWLock *);

	void ~RWLock(class RWLock *);

	class AbiStatus Init(class RWLock *);

	void AcquireReadLock(class RWLock *);

	void AcquireWriteLock(class RWLock *);

	void ReleaseLock(class RWLock *);

	void AssertWriteLockHeld(class RWLock *);

	void AssertReadLockHeld(class RWLock *);

	void RWLock(class RWLock *, const class RWLock  &);

	class RWLock & operator=(class RWLock *, const class RWLock  &);


	/* size: 128, cachelines: 2, members: 5 */
	/* sum members: 125, holes: 1, sum holes: 3 */
};
class AbiStatus {
protected:

	const char  *              m_fileName;           /*     0     8 */
	DKSTATUS                   m_errorCode;          /*     8     4 */
	uint16_t                   m_fileLine;           /*    12     2 */
public:

	void AbiStatus(class AbiStatus *);

	void AbiStatus(class AbiStatus *, const class AbiStatus  &);

	void AbiStatus(class AbiStatus *, const class SystemStatus  &);

	void AbiStatus(class AbiStatus *, DKSTATUS, const char  *, uint16_t);

	void ~AbiStatus(class AbiStatus *);

	bool IsSuccess(const class AbiStatus  *);

	bool IsFailure(const class AbiStatus  *);

	string GetFile(const class AbiStatus  *);

	uint16_t GetLine(const class AbiStatus  *);

	DKSTATUS ToDkStatus(const class AbiStatus  *);

	DKSTATUS operator int(const class AbiStatus  *);

	string GetMessage(const class AbiStatus  *);

	class AbiStatus & operator=(class AbiStatus *, const class AbiStatus  &);

	class AbiStatus & operator=(class AbiStatus *, const class SystemStatus  &);


	/* size: 16, cachelines: 1, members: 3 */
	/* padding: 2 */
	/* last cacheline: 16 bytes */
};
class SystemStatus {
protected:

	const char  *              m_fileName;           /*     0     8 */
	int                        m_errorCode;          /*     8     4 */
	uint16_t                   m_fileLine;           /*    12     2 */
public:

	void SystemStatus(class SystemStatus *);

	void SystemStatus(class SystemStatus *, const class SystemStatus  &);

	void SystemStatus(class SystemStatus *, int, const char  *, uint16_t);

	void ~SystemStatus(class SystemStatus *);

	bool IsSuccess(const class SystemStatus  *);

	bool IsFailure(const class SystemStatus  *);

	string GetFile(const class SystemStatus  *);

	uint16_t GetLine(const class SystemStatus  *);

	int ToErrNo(const class SystemStatus  *);

	int operator int(const class SystemStatus  *);

	string GetMessage(const class SystemStatus  *);

	class SystemStatus & operator=(class SystemStatus *, const class SystemStatus  &);


	/* size: 16, cachelines: 1, members: 3 */
	/* padding: 2 */
	/* last cacheline: 16 bytes */
};
class FileLock {
	enum Strategy              m_strategy;           /*     0     4 */
	enum Strategy {
		Invalid = 0,
		Kernel = 1,
		Posix = 2,
		Default = 1,
	};

	bool                       m_isLocked;           /*     4     1 */

	/* XXX 3 bytes hole, try to pack */

	int                        m_fileDescriptor;     /*     8     4 */
	bool                       m_isNoLock;           /*    12     1 */
public:

	void FileLock(class FileLock *, enum Strategy);

	void ~FileLock(class FileLock *);

	bool IsLocked(const class FileLock  *);

	void EnableNoLock(class FileLock *);

	enum Strategy GetLockingStrategy(const class FileLock  *);

	class SystemStatus Lock(class FileLock *, int, int);

	class SystemStatus Lock(class FileLock *, int, enum RequestType);

	enum RequestType {
		Invalid = 0,
		Shared = 1,
		Exclusive = 2,
	};

	class SystemStatus Unlock(class FileLock *);

	enum RequestType GetLockRequestTypeFromOpenMode(int);

	class SystemStatus LockInternal(class FileLock *, int, enum RequestType);

	class SystemStatus AcquireKernelLock(class FileLock *, int, enum RequestType);

	class SystemStatus ReleaseKernelLock(class FileLock *);

	class SystemStatus AcquirePosixLock(class FileLock *, int, enum RequestType);

	class SystemStatus ReleasePosixLock(class FileLock *);

	void FileLock(class FileLock *, const class FileLock  &);

	class FileLock & operator=(class FileLock *, const class FileLock  &);


	/* size: 16, cachelines: 1, members: 4 */
	/* sum members: 10, holes: 1, sum holes: 3 */
	/* padding: 3 */
	/* last cacheline: 16 bytes */
};
class File : public VfsStream, public FileInterface {
public:

	/* class VfsStream           <ancestor>; */      /*     0   544 */
	/* --- cacheline 8 boundary (512 bytes) was 32 bytes ago --- */
	/* class FileInterface       <ancestor>; */      /*   544     8 */
	static size_tconst                LineLength = 1024; /*     0     0 */
protected:

	static mode_tconst                SparseMask = 512; /*     0     0 */
	static mode_tconst                ExecMask = 73; /*     0     0 */
	static size_tconst                Alignment = 512; /*     0     0 */
	static intconst                   fallocNoHideStaleFlag = 4; /*     0     0 */
	class FileLock            m_fileLock;            /*   552    16 */

	/* XXX last struct has 3 bytes of padding */

	struct tm                  m_initializedTime;    /*   568    56 */
	/* --- cacheline 9 boundary (576 bytes) was 48 bytes ago --- */
	struct tm                  m_closedTime;         /*   624    56 */
	/* --- cacheline 10 boundary (640 bytes) was 40 bytes ago --- */
	struct atomic<unsigned long> m_flushCount;       /*   680     8 */
	int                        m_flags;              /*   688     4 */
	int                        m_fileDescriptor;     /*   692     4 */
	bool                       m_isLoaded;           /*   696     1 */
	bool                       m_isProcSysFile;      /*   697     1 */
	bool                       m_shouldUnlinkOnCreate; /*   698     1 */
	bool                       m_shouldDeleteOnClose; /*   699     1 */
	bool                       m_isLocked;           /*   700     1 */

	/* XXX 3 bytes hole, try to pack */

	/* --- cacheline 11 boundary (704 bytes) --- */
	enum SetLengthOption       m_setLengthOption;    /*   704     4 */
	enum SetLengthOption {
		FallocateNoHideStale = 0,
		Fallocate = 1,
		PosixFallocate = 2,
		Ftruncate = 3,
		Last = 4,
	};

public:

	void File(class File *, enum SetLengthOption, bool);

	virtual void ~File(class File *);

	class SystemStatus Open(class File *, const string  &, int, mode_t, enum ExtraFileFlags);

	class SystemStatus OpenForRead(class File *, const string  &);

	class SystemStatus Load(class File *, int, const string  &, int);

	virtual class SystemStatus Map(class File *, void *, size_t, int, int, off_t, void * &, size_t &);

	virtual class SystemStatus Unmap(class File *, void *, size_t);

	virtual class SystemStatus Move(class File *, const string  &);

	virtual class SystemStatus Delete(class File *);

	const string  & GetFilePath(const class File  *);

	stringconst GetFileName(const class File  *);

	virtual class SystemStatus GetRealPath(class File *, bool &, string &);

	virtual int GetFileDescriptor(const class File  *);

	bool IsSparse(const class File  *);

	bool IsDirect(const class File  *);

	bool IsOdsync(const class File  *);

	bool ShouldPerformAlternateFlush(const class File  *);

	int GetFlags(const class File  *);

	void SetFlags(class File *, int);

	virtual class SystemStatus ReadBytes(class File *, off_t, size_t, void *, size_t &);

	virtual class SystemStatus WriteBytes(class File *, off_t, size_t, void *);

	virtual class SystemStatus SetLength(class File *, uint64_t);

	virtual class SystemStatus Flush(class File *);

	virtual class SystemStatus Flush(class File *, intconst);

	class SystemStatus Close(class File *);

	virtual class SystemStatus RefreshStatistics(class File *);

	virtual bool GetNextLine(class File *, int &, string &);

	virtual class SystemStatus SetSparse(class File *, bool);

	virtual class SystemStatus SetZeroData(class File *, off_t, size_t);

	virtual class SystemStatus QueryAllocatedRanges(class File *, off_t, size_t, uint32_t, DK_FILE_RANGE *, uint32_t &);

	virtual bool IsProcSysFile(const class File  *);

	virtual bool IsPmmFile(const class File  *);

	virtual off_t GetDirectOffset(const class File  *, off_t);

	virtual size_t GetDirectReadLength(const class File  *, size_t, off_t);

	virtual bool IsLocked(const class File  *);

	virtual class SystemStatus Lock(class File *, enum RequestType);

	virtual class SystemStatus LockShared(class File *);

	virtual class SystemStatus LockExclusive(class File *);

	virtual class SystemStatus Unlock(class File *);

	UINT64 GetFlushCount(const class File  *);

	void SetDeleteOnClose(class File *, boolconst);

	bool GetDeleteOnClose(class File *);

protected:

	virtual class SystemStatus FlushInternal(class File *, intconst);

	class SystemStatus LoadInternal(class File *, int, string, int);

	class SystemStatus OpenInternal(class File *, const char  *, int, mode_t);

	virtual class SystemStatus CloseInternal(class File *);

	void AdvanceLengthOptionInternal(class File *);

	void EstablishLockingCapability(class File *);

	class SystemStatus FlushParentDirectory(class File *);

	class SystemStatus WriteZeros(class File *, off_tconst, size_tconst);

	class SystemStatus SetLengthFallback(class File *, uint64_tconst);

	class SystemStatus SetLengthInternal(class File *, uint64_tconst);

	void File(class File *, const class File  &);

	void File(class File *, );

	class File & operator=(class File *, const class File  &);

	/* vtable has 28 entries: {
	   [0] = ~File((null)), 
	   [5] = Map((null)), 
	   [6] = Unmap((null)), 
	   [7] = Move((null)), 
	   [2] = Delete((null)), 
	   [8] = GetRealPath((null)), 
	   [9] = GetFileDescriptor((null)), 
	   [10] = ReadBytes((null)), 
	   [11] = WriteBytes((null)), 
	   [12] = SetLength((null)), 
	   [13] = Flush((null)), 
	   [14] = Flush((null)), 
	   [3] = RefreshStatistics((null)), 
	   [15] = GetNextLine((null)), 
	   [16] = SetSparse((null)), 
	   [17] = SetZeroData((null)), 
	   [18] = QueryAllocatedRanges((null)), 
	   [19] = IsProcSysFile((null)), 
	   [20] = IsPmmFile((null)), 
	   [21] = GetDirectOffset((null)), 
	   [22] = GetDirectReadLength((null)), 
	   [23] = IsLocked((null)), 
	   [24] = Lock((null)), 
	   [25] = LockShared((null)), 
	   [26] = LockExclusive((null)), 
	   [27] = Unlock((null)), 
	   [28] = FlushInternal((null)), 
	   [29] = CloseInternal((null)), 
	} */
	/* size: 712, cachelines: 12, members: 14, static members: 5 */
	/* sum members: 153, holes: 1, sum holes: 3 */
	/* padding: 4 */
	/* paddings: 1, sum paddings: 3 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 712 != 153 + 3(holes), diff = 556 */

};
class FileInterface {
	int ()(void) * *           _vptr$FileInterface;  /*     0     8 */
public:

	virtual void ~FileInterface(class FileInterface *) = 0;

	virtual class SystemStatus ReadBytes(class FileInterface *, off_t, size_t, void *, size_t &) = 0;

	/* vtable has 2 entries: {
	   [0] = ~FileInterface((null)), 
	   [2] = ReadBytes((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct _DK_FILE_RANGE {
	ULONG64                    FileOffset;           /*     0     8 */
	ULONG64                    Length;               /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct WalkDirectoryStatus {
	enum LookupStatus          m_LookupStatus;       /*     0     4 */

	/* XXX 4 bytes hole, try to pack */
	enum LookupStatus {
		NoMatch = 0,
		FileMatched = 1,
		DirMatched = 2,
	};


	class SystemStatus        m_SysStatus;           /*     8    16 */

	/* XXX last struct has 2 bytes of padding */

	bool                       m_ShouldStopWalk;     /*    24     1 */
	void WalkDirectoryStatus(class WalkDirectoryStatus *);


	/* size: 32, cachelines: 1, members: 3 */
	/* sum members: 21, holes: 1, sum holes: 4 */
	/* padding: 7 */
	/* paddings: 1, sum paddings: 2 */
	/* last cacheline: 32 bytes */
};
class Pal {
	int ()(void) * *           _vptr$Pal;            /*     0     8 */
public:

	static size_tconst                StackSize = 4096; /*     0     0 */
protected:

	static bool                       g_PalOnetimeInitialized /*     0     0 */
	enum PalBootStatus         m_palBootStatus;      /*     8     4 */
	enum PalOsType             m_osType;             /*    12     4 */
	DKHANDLE                   m_osBootThread;       /*    16     8 */
	class ProcessorTopology   m_processorTopology;   /*    24   208 */
	/* --- cacheline 3 boundary (192 bytes) was 40 bytes ago --- */
	string                     m_processName;        /*   232    24 */
	/* --- cacheline 4 boundary (256 bytes) --- */
	string                     m_applicationName;    /*   256    24 */
	class shared_ptr<Configuration> m_configuration; /*   280    16 */
	class shared_ptr<DistributionInfo> m_distributionInfo; /*   296    16 */
	class shared_ptr<DockerInfo> m_dockerInfo;       /*   312    16 */
	/* --- cacheline 5 boundary (320 bytes) was 8 bytes ago --- */
	struct PAL_OS_BOOT_INFORMATION m_bootInformation; /*   328    40 */
	class GuestOsInitializationData m_guestInitializationData; /*   368   192 */

	/* XXX last struct has 7 bytes of padding */

	/* --- cacheline 8 boundary (512 bytes) was 48 bytes ago --- */
	string                     m_crashID;            /*   560    24 */
	/* --- cacheline 9 boundary (576 bytes) was 8 bytes ago --- */
	DKHANDLE                   m_asyncStream;        /*   584     8 */
	BlockDeviceCache           m_blockDeviceCache;   /*   592   168 */
public:

	void Pal(class Pal *);

	void GetVersion(const char  * &, const char  * &, const char  * &, const char  * &);

	virtual void ~Pal(class Pal *);

	enum PalInitializeStatus Initialize(class Pal *, class shared_ptr<Configuration>, string, string, bool, bool);

	virtual enum PalBootStatus Boot(class Pal *);

	void Shutdown(bool);

	enum PalBootStatus GetPalStatus(class Pal *);

	enum PalOsType GetOSType(class Pal *);

	class Configuration & GetConfiguration(class Pal *);

	class shared_ptr<DistributionInfo> GetDistributionInfo(class Pal *);

	class shared_ptr<DockerInfo> GetDockerInfo(class Pal *);

	ushort GetLanguageId(class Pal *);

	const string  & GetProcessName(class Pal *);

	const string  & GetApplicationName(class Pal *);

	class ProcessorTopology & GetProcessorTopology(class Pal *);

	DKHANDLE GetOsBootThread(const class Pal  *);

	const string  & GetCrashID(class Pal *);

	virtual bool HasEvaluationExpired(class Pal *);

	virtual unsigned int GetDaysLeftBeforeExpiration(class Pal *);

	bool IsReleaseBuild(class Pal *);

	DKHANDLE GetAsyncStream(class Pal *);

	BlockDeviceCache * GetBlockDeviceCache(class Pal *);

	void * AllocateSqlpalStack(void);

protected:

	enum PalInitializeStatus InternalInit(class Pal *, bool, bool);

	enum PalInitializeStatus InitializeInstanceID(class Pal *);

	virtual bool LoadGuestOs(class Pal *);

	virtual void LoadGuestOsInitializationData(class Pal *);

	virtual time_t GetBuildDate(class Pal *);

	virtual time_t GetCurrentDate(class Pal *);

	/* vtable has 8 entries: {
	   [0] = ~Pal((null)), 
	   [2] = Boot((null)), 
	   [3] = HasEvaluationExpired((null)), 
	   [4] = GetDaysLeftBeforeExpiration((null)), 
	   [5] = LoadGuestOs((null)), 
	   [6] = LoadGuestOsInitializationData((null)), 
	   [7] = GetBuildDate((null)), 
	   [8] = GetCurrentDate((null)), 
	} */
	/* size: 760, cachelines: 12, members: 15, static members: 2 */
	/* paddings: 1, sum paddings: 7 */
	/* last cacheline: 56 bytes */
};
class ProcessorTopology {
	bool                       m_IsValid;            /*     0     1 */

	/* XXX 7 bytes hole, try to pack */

	class vector<ProcessorTopology::Processor, std::__1::allocator<ProcessorTopology::Processor> > m_Processors; /*     8    24 */
	struct Processor {
		int                        ProcessorId;          /*     0     4 */
		int                        CoreId;               /*     4     4 */
		int                        CoreIndex;            /*     8     4 */
		int                        PackageId;            /*    12     4 */
		int                        NodeId;               /*    16     4 */
		int                        ProcessorNtId;        /*    20     4 */
		int                        GroupNtId;            /*    24     4 */
		int                        CoreNtId;             /*    28     4 */
		int                        PackageNtId;          /*    32     4 */
		int                        NodeNtId;             /*    36     4 */
		uint64_t                   ProcessorMask;        /*    40     8 */
		void Processor(class Processor *);


		/* size: 48, cachelines: 1, members: 11 */
		/* last cacheline: 48 bytes */
	};

	class vector<ProcessorTopology::ProcessorCore, std::__1::allocator<ProcessorTopology::ProcessorCore> > m_Cores; /*    32    24 */
	struct ProcessorCore {
		int                        CoreId;               /*     0     4 */
		int                        PackageId;            /*     4     4 */
		class vector<int, std::__1::allocator<int> > Processors; /*     8    24 */
		void ProcessorCore(class ProcessorCore *, int, int);


		/* size: 32, cachelines: 1, members: 3 */
		/* last cacheline: 32 bytes */
	};

	class vector<ProcessorTopology::ProcessorCoreNt, std::__1::allocator<ProcessorTopology::ProcessorCoreNt> > m_CoresNt; /*    56    24 */
	struct ProcessorCoreNt {
		int                        GroupNtId;            /*     0     4 */
		int                        CoreNtId;             /*     4     4 */
		int                        ProcessorCount;       /*     8     4 */

		/* XXX 4 bytes hole, try to pack */

		uint64_t                   ProcessorMask;        /*    16     8 */
		void ProcessorCoreNt(class ProcessorCoreNt *, int, int);


		/* size: 24, cachelines: 1, members: 4 */
		/* sum members: 20, holes: 1, sum holes: 4 */
		/* last cacheline: 24 bytes */
	};

	/* --- cacheline 1 boundary (64 bytes) was 16 bytes ago --- */
	class vector<ProcessorTopology::ProcessorPackage, std::__1::allocator<ProcessorTopology::ProcessorPackage> > m_Packages; /*    80    24 */
	struct ProcessorPackage {
		int                        PackageId;            /*     0     4 */

		/* XXX 4 bytes hole, try to pack */

		class vector<int, std::__1::allocator<int> > Cores; /*     8    24 */
		void ProcessorPackage(class ProcessorPackage *);


		/* size: 32, cachelines: 1, members: 2 */
		/* sum members: 28, holes: 1, sum holes: 4 */
		/* last cacheline: 32 bytes */
	};

	class vector<ProcessorTopology::ProcessorPackageNt, std::__1::allocator<ProcessorTopology::ProcessorPackageNt> > m_PackagesNt; /*   104    24 */
	struct ProcessorPackageNt {
		int                        GroupNtId;            /*     0     4 */
		int                        PackageNtId;          /*     4     4 */
		uint64_t                   ProcessorMask;        /*     8     8 */
		void ProcessorPackageNt(class ProcessorPackageNt *, int, int);


		/* size: 16, cachelines: 1, members: 3 */
		/* last cacheline: 16 bytes */
	};

	/* --- cacheline 2 boundary (128 bytes) --- */
	class vector<ProcessorTopology::NumaNode, std::__1::allocator<ProcessorTopology::NumaNode> > m_NumaNodes; /*   128    24 */
	struct NumaNode {
		int                        NodeId;               /*     0     4 */

		/* XXX 4 bytes hole, try to pack */

		class vector<int, std::__1::allocator<int> > Processors; /*     8    24 */
		void NumaNode(class NumaNode *);


		/* size: 32, cachelines: 1, members: 2 */
		/* sum members: 28, holes: 1, sum holes: 4 */
		/* last cacheline: 32 bytes */
	};

	class vector<ProcessorTopology::NumaNodeNt, std::__1::allocator<ProcessorTopology::NumaNodeNt> > m_NumaNodesNt; /*   152    24 */
	struct NumaNodeNt {
		int                        GroupNtId;            /*     0     4 */
		int                        NodeNtId;             /*     4     4 */
		uint64_t                   ProcessorMask;        /*     8     8 */
		void NumaNodeNt(class NumaNodeNt *, int, int);


		/* size: 16, cachelines: 1, members: 3 */
		/* last cacheline: 16 bytes */
	};

	class vector<ProcessorTopology::ProcessorGroup, std::__1::allocator<ProcessorTopology::ProcessorGroup> > m_ProcessorGroups; /*   176    24 */
	struct ProcessorGroup {
		int                        GroupNtId;            /*     0     4 */
		unsigned int               ProcessorCount;       /*     4     4 */
		uint64_t                   ProcessorMask;        /*     8     8 */
		class vector<int, std::__1::allocator<int> > Processors; /*    16    24 */
		class unordered_map<int, int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, int> > > Cores; /*    40    40 */
		class unordered_map<int, int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, int> > > Packages; /*    80    40 */
		void ProcessorGroup(class ProcessorGroup *, int);


		/* size: 120, cachelines: 2, members: 6 */
		/* last cacheline: 56 bytes */
	};

	/* --- cacheline 3 boundary (192 bytes) was 8 bytes ago --- */
	int                        m_ProcessorNtId;      /*   200     4 */
	int                        m_ProcessorCount;     /*   204     4 */
public:

	void ProcessorTopology(class ProcessorTopology *);

	void Initialize(class ProcessorTopology *);

	void SetInvalid(class ProcessorTopology *);

	bool IsValid(const class ProcessorTopology  *);

	size_t GetProcessorCount(const class ProcessorTopology  *);

	size_t GetCoreCount(const class ProcessorTopology  *);

	size_t GetCoreNtCount(const class ProcessorTopology  *);

	size_t GetPackageCount(const class ProcessorTopology  *);

	size_t GetPackageNtCount(const class ProcessorTopology  *);

	size_t GetNodeCount(const class ProcessorTopology  *);

	size_t GetNodeNtCount(const class ProcessorTopology  *);

	size_t GetGroupCount(const class ProcessorTopology  *);

	const class ProcessorGroup  * GetGroups(const class ProcessorTopology  *);

	const class ProcessorCoreNt  * GetCoresNt(const class ProcessorTopology  *);

	const class ProcessorPackageNt  * GetPackagesNt(const class ProcessorTopology  *);

	const class NumaNodeNt  * GetNodesNt(const class ProcessorTopology  *);

	class AbiStatus SetThreadAffinity(const class ProcessorTopology  *, DKHANDLE, USHORT, ULONG64);

	class AbiStatus AssertThreadAffinity(const class ProcessorTopology  *, DKHANDLE, USHORT, ULONG64);

	bool EnumerateProcessors(class ProcessorTopology *);

	bool ParseCpuinfo(class ProcessorTopology *, const char  *, size_t);

	bool CreatePackagesAndCores(class ProcessorTopology *);

	void SetProcessorNode(class ProcessorTopology *, int, int);

	void CreateProcessorGroups(class ProcessorTopology *);

	int ReadInt(const char  * &, size_t &);

	void SkipPastChar(const char  * &, size_t &, char);

	void SplitNode(class ProcessorTopology *, class NumaNode &);

	void FitWholeNode(class ProcessorTopology *, class NumaNode &, size_t);

	void AssignProcessorToGroup(class ProcessorTopology *, class Processor &, uint64_t &);

	void AssignPackagesAndCores(class ProcessorTopology *);

	pid_t GetThreadId(DKHANDLE);


	/* size: 208, cachelines: 4, members: 11 */
	/* sum members: 201, holes: 1, sum holes: 7 */
	/* last cacheline: 16 bytes */
};
class Configuration {
	bool                       m_isLoaded;           /*     0     1 */
	bool                       m_isWorkingFolderTemp; /*     1     1 */

	/* XXX 6 bytes hole, try to pack */

	class shared_ptr<Directory> m_workingDirectory;  /*     8    16 */
	class shared_ptr<Directory> m_currentDirectory;  /*    24    16 */
	class shared_ptr<Directory> m_systemDirectory;   /*    40    16 */
	class shared_ptr<Directory> m_LogDirectory;      /*    56    16 */
	/* --- cacheline 1 boundary (64 bytes) was 8 bytes ago --- */
	class shared_ptr<Directory> m_secretsDirectory;  /*    72    16 */
	class FileUri             m_errorLogFilePath;    /*    88   256 */
	/* --- cacheline 5 boundary (320 bytes) was 24 bytes ago --- */
	string                     m_loggerConfigurationDirectoryPath; /*   344    24 */
	class FileUri             m_hostWorkingDirectoryPath; /*   368   256 */
	/* --- cacheline 9 boundary (576 bytes) was 48 bytes ago --- */
	string                     m_libOSCurrDirPath;   /*   624    24 */
	/* --- cacheline 10 boundary (640 bytes) was 8 bytes ago --- */
	string                     m_debugLevel;         /*   648    24 */
	string                     m_debugLogLocation;   /*   672    24 */
	string                     m_instanceID;         /*   696    24 */
	/* --- cacheline 11 boundary (704 bytes) was 16 bytes ago --- */
	string                     m_ramdiskLocations;   /*   720    24 */
	unsigned int               m_memorySize;         /*   744     4 */

	/* XXX 4 bytes hole, try to pack */

	uint64_t                   m_pmmMaxMapSize;      /*   752     8 */
	uint64_t                   m_pmmMinMapSize;      /*   760     8 */
	/* --- cacheline 12 boundary (768 bytes) --- */
	unsigned short             m_languageId;         /*   768     2 */
	bool                       m_alternateWriteThroughEnabled; /*   770     1 */
	bool                       m_writeThroughEnabled; /*   771     1 */
	bool                       m_displayVersion;     /*   772     1 */
	bool                       m_logFileLoad;        /*   773     1 */
	bool                       m_displayHelp;        /*   774     1 */
	bool                       m_logUnimplementedApis; /*   775     1 */
	bool                       m_deleteTempSandbox;  /*   776     1 */
	bool                       m_allowAttach;        /*   777     1 */
	bool                       m_allowBreak;         /*   778     1 */
	bool                       m_logRegistry;        /*   779     1 */
	bool                       m_logFusionActivity;  /*   780     1 */
	bool                       m_zeroMemory;         /*   781     1 */
	bool                       m_isSwRaidEnabled;    /*   782     1 */
	bool                       m_isMemoryPressureEnabled; /*   783     1 */
	bool                       m_enableNtLoaderSnaps; /*   784     1 */
	bool                       m_sosDelayPostSosBoot; /*   785     1 */

	/* XXX 6 bytes hole, try to pack */

	class map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > m_environmentVariables; /*   792    24 */
	TcpPortMappings            m_netTcpPortMappings; /*   816    24 */
	/* --- cacheline 13 boundary (832 bytes) was 8 bytes ago --- */
	class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > m_guestApplicationParameters; /*   840    24 */
	class FileUri             m_osEntryPoint;        /*   864   256 */
	/* --- cacheline 17 boundary (1088 bytes) was 32 bytes ago --- */
	class FileUri             m_filterEntryPoint;    /*  1120   256 */
	/* --- cacheline 21 boundary (1344 bytes) was 32 bytes ago --- */
	class FileUri             m_applicationEntryPoint; /*  1376   256 */
	/* --- cacheline 25 boundary (1600 bytes) was 32 bytes ago --- */
	FileSystemMap              m_guestOsFileMappings; /*  1632    40 */
	/* --- cacheline 26 boundary (1664 bytes) was 8 bytes ago --- */
	class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > m_registryHives; /*  1672    24 */
	class vector<PersistentHive, std::__1::allocator<PersistentHive> > m_persistentHives; /*  1696    24 */
	class map<std::__1::basic_string<char>, std::__1::shared_ptr<GuestToHostMapping>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<GuestToHostMapping> > > > m_guestToHostUriMappings; /*  1720    24 */
	/* --- cacheline 27 boundary (1728 bytes) was 16 bytes ago --- */
	class list<std::__1::shared_ptr<UriToHostMapping>, std::__1::allocator<std::__1::shared_ptr<UriToHostMapping> > > m_guestToHostUriMappingsList; /*  1744    24 */
	class map<std::__1::basic_string<char>, Archive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, Archive> > > m_archiveList; /*  1768    24 */
	/* --- cacheline 28 boundary (1792 bytes) --- */
	class vector<Uri, std::__1::allocator<Uri> > m_loaderSandboxWhitelist; /*  1792    24 */
	const char  *              m_buildStamp;         /*  1816     8 */
	class vector<unsigned int, std::__1::allocator<unsigned int> > m_traceFlags; /*  1824    24 */
	struct timespec            m_kernelAioTimeout;   /*  1848    16 */
	/* --- cacheline 29 boundary (1856 bytes) was 8 bytes ago --- */
	class PalSettings         m_palSettings;         /*  1864     8 */
	size_t                     m_HEStackSizeKB;      /*  1872     8 */
	ULONGLONG                  m_uniqueMacID;        /*  1880     8 */
	ULONG                      m_bootID;             /*  1888     4 */

	/* XXX 4 bytes hole, try to pack */

	string                     m_configFilePath;     /*  1896    24 */
	/* --- cacheline 30 boundary (1920 bytes) --- */
	class map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > m_uncMappings; /*  1920    24 */
	bool                       m_runningUnitTests;   /*  1944     1 */
	bool                       m_forceLdaps;         /*  1945     1 */
	bool                       m_disableSSSD;        /*  1946     1 */

	/* XXX 5 bytes hole, try to pack */

	string                     m_privilegedADAccount; /*  1952    24 */
public:

	void Configuration(class Configuration *);

	void ~Configuration(class Configuration *);

	void Load(class Configuration *, const class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >  &);

	void Load(class Configuration *, const class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >  &, const class vector<std::__1::shared_ptr<File>, std::__1::allocator<std::__1::shared_ptr<File> > >  &);

	void SetWorkingDirectory(class Configuration *, class shared_ptr<Directory>const);

	void SetSystemDirectory(class Configuration *, class shared_ptr<Directory>const);

	void SetStaticMappings(class Configuration *);

	void MapDirectory(class Configuration *, const string  &, class shared_ptr<Directory>const, const string  &, enum AccessOptions);

	void SetAppEntryPoint(class Configuration *, const string  &);

	class shared_ptr<Directory> GetWorkingDirectory(const class Configuration  *);

	class shared_ptr<Directory> GetSystemDirectory(const class Configuration  *);

	class shared_ptr<Directory> GetCurrentDirectory(const class Configuration  *);

	void SetCurrentDirectory(class Configuration *, class shared_ptr<Directory>const);

	const string  & GetLibOSCurrentDirectoryPath(const class Configuration  *);

	class shared_ptr<Directory> GetLogDirectory(const class Configuration  *);

	void SetLogDirectory(class Configuration *, class shared_ptr<Directory>const);

	class shared_ptr<Directory> GetSecretsDirectory(const class Configuration  *);

	void SetSecretsDirectory(class Configuration *, class shared_ptr<Directory>const);

	string GetLoggerConfigurationDirectory(const class Configuration  *);

	void SetLoggerConfigurationDirectoryPath(class Configuration *, const string  &);

	const string  & GetInstanceID(const class Configuration  *);

	void SetInstanceID(class Configuration *, const string  &);

	void SetUniqueMacID(class Configuration *, ULONGLONGconst);

	ULONGLONG GetUniqueMacID(const class Configuration  *);

	ULONG GetBootID(const class Configuration  *);

	void SetBootID(class Configuration *, ULONGconst);

	bool IsWriteThroughEnabled(const class Configuration  *);

	void SetWriteThroughEnabled(class Configuration *, boolconst);

	bool IsAlternateWriteThroughEnabled(const class Configuration  *);

	void SetAlternateWriteThroughEnabled(class Configuration *, boolconst);

	void SetDebugLevel(class Configuration *, const string  &);

	const string  & GetDebugLevel(const class Configuration  *);

	void SetMemorySizeOverride(class Configuration *, unsigned int);

	unsigned int GetMemorySizeOverride(const class Configuration  *);

	void SetPmmMaxMapSize(class Configuration *, uint64_t);

	uint64_t GetPmmMaxMapSize(const class Configuration  *);

	void SetPmmMinMapSize(class Configuration *, uint64_t);

	uint64_t GetPmmMinMapSize(const class Configuration  *);

	void SetRamdiskLocations(class Configuration *, const string  &);

	const string  & GetRamdiskLocations(const class Configuration  *);

	void SetLanguageId(class Configuration *, unsigned short);

	unsigned short GetLanguageId(const class Configuration  *);

	void SetDisplayVersion(class Configuration *, bool);

	bool GetDisplayVersion(const class Configuration  *);

	void SetLogFileLoad(class Configuration *, bool);

	bool GetLogFileLoad(const class Configuration  *);

	void SetLogUnimplementedApis(class Configuration *, bool);

	bool GetLogUnimplementedApis(const class Configuration  *);

	void SetAllowAttach(class Configuration *, bool);

	bool GetAllowAttach(const class Configuration  *);

	void EnableAllowBreak(class Configuration *);

	bool GetAllowBreak(const class Configuration  *);

	void SetDeleteTempSandbox(class Configuration *, bool);

	bool GetDeleteTempSandbox(const class Configuration  *);

	void SetEnvironmentVariable(class Configuration *, const string  &, const string  &);

	bool GetEnvironmentVariable(class Configuration *, const string  &, string &);

	void SetDelayPostSosBoot(class Configuration *, boolconst);

	bool GetDelayPostSosBoot(const class Configuration  *);

	bool AddTraceFlags(class Configuration *, const string  &);

	bool AddSingleTraceFlag(class Configuration *, const string  &);

	const class vector<unsigned int, std::__1::allocator<unsigned int> >  & GetTraceFlagsVector(const class Configuration  *);

	const class map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std: GetEnvironmentVariables(const class Configuration  *);

	class GuestToHostMapping GetGuestToHostUriMapping(class Configuration *, const string  &);

	bool IsSandboxUri(class Configuration *, const string  &);

	bool IsSandboxUriWhitelisted(class Configuration *, const string  &);

	const FileSystemMap  & GetOsFileSystemMappings(const class Configuration  *);

	const class FileUri  & GetOsEntryPoint(const class Configuration  *);

	const class FileUri  & GetFilterEntryPoint(const class Configuration  *);

	const class FileUri  & GetStartModuleUri(const class Configuration  *);

	const class FileUri  & GetAppEntryPoint(const class Configuration  *);

	const class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >  & GetRegistryHives(const class Configuration  *);

	const class vector<PersistentHive, std::__1::allocator<PersistentHive> >  & GetPersistentHives(const class Configuration  *);

	void SetGuestApplicationArguments(class Configuration *, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >);

	const class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >  & GetGuestApplicationArguments(const class Configuration  *);

	void SetMapping(class Configuration *, class Uri, class Uri, bool, class shared_ptr<Directory>);

	const char  * GetBuildStamp(const class Configuration  *);

	void SetBuildStamp(class Configuration *, const char  *);

	class timespec GetKernelAioTimeout(class Configuration *);

	void SetKernelAioTimeout(class Configuration *, int, int);

	class PalSettings & GetSettings(class Configuration *);

	bool GetLogRegistry(const class Configuration  *);

	void SetLogRegistry(class Configuration *, bool);

	bool GetLogFusionActivity(const class Configuration  *);

	void SetLogFusionActivity(class Configuration *, bool);

	bool GetEnableNtLoaderSnaps(const class Configuration  *);

	void SetEnableNtLoaderSnaps(class Configuration *, bool);

	void SetHEStackSizeKB(class Configuration *, size_tconst);

	size_t GetHEStackSizeBytes(const class Configuration  *);

	void SetErrorLogFilePath(class Configuration *, const string  &);

	string GetErrorLogFilePath(const class Configuration  *);

	class GuestToHostMapping GetUncToHostUriMapping(class Configuration *, const string  &);

	const string  & GetConfigFile(const class Configuration  *);

	void SetConfigFile(class Configuration *, const string  &);

	const class map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std: GetUncMappings(const class Configuration  *);

	void SetUncMappings(class Configuration *, const class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >  &);

	void SetZeroMemory(class Configuration *);

	bool GetZeroMemory(const class Configuration  *);

	void SetRunningUnitTests(class Configuration *);

	bool GetRunningUnitTests(class Configuration *);

	void SetForceLdaps(class Configuration *, bool);

	bool GetForceLdaps(const class Configuration  *);

	void SetIsSSSDDisabled(class Configuration *, bool);

	bool GetIsSSSDDisabled(const class Configuration  *);

	void SetPrivilegedADAccount(class Configuration *, const string  &);

	string GetPrivilegedADAccount(const class Configuration  *);

	bool GetIsSwRaidEnabled(const class Configuration  *);

	void SetIsSwRaidEnabled(class Configuration *, bool);

	bool GetIsMemoryPressureEnabled(const class Configuration  *);

	void DisableMemoryPressure(class Configuration *);

	void SetNetTcpPortMappings(class Configuration *, );

	void SetNetTcpPortMappings(class Configuration *, const class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >  &, bool);

	const TcpPortMappings  & GetNetTcpPortMappings(const class Configuration  *);

	void LoadAllPackages(class Configuration *, const class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >  &, const class vector<std::__1::shared_ptr<File>, std::__1::allocator<std::__1::shared_ptr<File> > >  &);

	void LoadPackage(class Configuration *, class FileUri &, class Package &, class Manifest &, class shared_ptr<Directory>);

	void MergePackage(class Configuration *, class Manifest &, class FileUri &, class Package &);

	void SetLibOSCurrentDirectoryPath(class Configuration *);

	void ValidateConfiguration(class Configuration *);


	/* size: 1976, cachelines: 31, members: 61 */
	/* sum members: 1951, holes: 5, sum holes: 25 */
	/* last cacheline: 56 bytes */
};
class Directory : public VfsStream, public enable_shared_from_this<Directory> {
public:

	/* class VfsStream           <ancestor>; */      /*     0   544 */
	/* --- cacheline 8 boundary (512 bytes) was 32 bytes ago --- */
	/* class enable_shared_from_this<Directory> <ancestor>; */ /*   544    16 */
	bool                       m_isCaseSensitive;    /*   560     1 */
	void Directory(class Directory *, bool);

	virtual void ~Directory(class Directory *);

	virtual class SystemStatus Load(class Directory *, string);

	virtual class SystemStatus LoadOrCreate(class Directory *, string);

	virtual class SystemStatus LoadCurrentWorkingDirectory(class Directory *);

	virtual class SystemStatus OpenDirectory(class Directory *, const string  &, class shared_ptr<Directory> &);

	virtual class SystemStatus OpenSubdirectory(class Directory *, const string  &, class shared_ptr<Directory> &);

	virtual class SystemStatus OpenParentDirectory(class Directory *, class shared_ptr<Directory> &);

	virtual class SystemStatus GetFile(const class Directory  *, string, mode_t, class shared_ptr<File> &, int, enum ExtraFileFlags);

	virtual class SystemStatus GetReadOnlyFile(class Directory *, const string  &, class shared_ptr<File> &);

	virtual const string  & GetDirectoryPath(const class Directory  *);

	virtual const string  & GetDirectoryName(const class Directory  *);

	virtual class SystemStatus DoesFileExist(const class Directory  *, string &);

	virtual class SystemStatus DoesSubdirectoryExist(const class Directory  *, string &);

	virtual class SystemStatus Delete(class Directory *);

	virtual class SystemStatus GetDirectoryChildren(class Directory *, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > &);

	virtual class SystemStatus GetDirectoryFileChildren(class Directory *, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > &);

	virtual class SystemStatus GetDirectorySubdirectoryChildren(class Directory *, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > &);

	virtual class SystemStatus RefreshStatistics(class Directory *);

	virtual class SystemStatus GetCanonicalPath(const class Directory  *, const string  &, string &);

	virtual class SystemStatus IsDirectory(const class Directory  *, const string  &);

	virtual class shared_ptr<Directory> CreateDirectoryInstance(class Directory *, bool);

	virtual class SystemStatus EmptyAndDelete(const class Directory  *, const string  &);

	virtual bool IsArchiveDirectory(const class Directory  *);

protected:

	class SystemStatus LoadInternal(class Directory *, string, bool);

	virtual class SystemStatus MoveToSubdirectory(class Directory *, string);

	virtual class SystemStatus MoveToParent(class Directory *);

	virtual class SystemStatus GetDirectoryEntryType(const class Directory  *, const string  &, int &);

	virtual class WalkDirectoryStatus WalkDirectory(const class Directory  *, const string  &, class function<WalkDirectoryStatus (int, const char *)>);

	bool IsCaseSensitive(const class Directory  *);

	void Directory(class Directory *, const class Directory  &);

	void Directory(class Directory *, );

	class Directory & operator=(class Directory *, const class Directory  &);

	class SystemStatus GetFileInternal(const class Directory  *, const char  *, mode_t, class shared_ptr<File> &, int, enum ExtraFileFlags);

	class WalkDirectoryStatus ProcessDirEntryForEnumerate(const class Directory  *, int, const char  *, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > *, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > *);

	class WalkDirectoryStatus ProcessDirEntryForLookup(const class Directory  *, int, const char  *, string &, SearchMask);

	class WalkDirectoryStatus ProcessDirEntryForRemove(const class Directory  *, int, const char  *, const string  &, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > *);

	bool IsSearchCaseSensitive(SearchMask);

	bool IsSearchCaseInsensitive(SearchMask);

	bool IsSearchFileOnly(SearchMask);

	bool IsSearchDirOnly(SearchMask);

	bool IsSearchAny(SearchMask);

	/* vtable has 27 entries: {
	   [0] = ~Directory((null)), 
	   [5] = Load((null)), 
	   [6] = LoadOrCreate((null)), 
	   [7] = LoadCurrentWorkingDirectory((null)), 
	   [8] = OpenDirectory((null)), 
	   [9] = OpenSubdirectory((null)), 
	   [10] = OpenParentDirectory((null)), 
	   [11] = GetFile((null)), 
	   [12] = GetReadOnlyFile((null)), 
	   [13] = GetDirectoryPath((null)), 
	   [14] = GetDirectoryName((null)), 
	   [15] = DoesFileExist((null)), 
	   [16] = DoesSubdirectoryExist((null)), 
	   [2] = Delete((null)), 
	   [17] = GetDirectoryChildren((null)), 
	   [18] = GetDirectoryFileChildren((null)), 
	   [19] = GetDirectorySubdirectoryChildren((null)), 
	   [3] = RefreshStatistics((null)), 
	   [20] = GetCanonicalPath((null)), 
	   [21] = IsDirectory((null)), 
	   [22] = CreateDirectoryInstance((null)), 
	   [23] = EmptyAndDelete((null)), 
	   [24] = IsArchiveDirectory((null)), 
	   [25] = MoveToSubdirectory((null)), 
	   [26] = MoveToParent((null)), 
	   [27] = GetDirectoryEntryType((null)), 
	   [28] = WalkDirectory((null)), 
	} */
	/* size: 568, cachelines: 9, members: 3 */
	/* padding: 7 */
	/* last cacheline: 56 bytes */

	/* BRAIN FART ALERT! 568 != 1 + 0(holes), diff = 567 */

};
struct PersistentHive {
	string                     File;                 /*     0    24 */
	string                     RootKey;              /*    24    24 */
	class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > ExcludedKeys; /*    48    24 */

	/* size: 72, cachelines: 2, members: 3 */
	/* last cacheline: 8 bytes */
};
struct GuestToHostMapping {
	string                     HostFileSchema;       /*     0    24 */
	string                     HostFilePath;         /*    24    24 */
	bool                       IsWriteable;          /*    48     1 */

	/* XXX 7 bytes hole, try to pack */

	class shared_ptr<Directory> HostDirectory;       /*    56    16 */
	void GuestToHostMapping(class GuestToHostMapping *, string, string, bool, class shared_ptr<Directory>);


	/* size: 72, cachelines: 2, members: 4 */
	/* sum members: 65, holes: 1, sum holes: 7 */
	/* last cacheline: 8 bytes */
};
class Archive {
	int ()(void) * *           _vptr$Archive;        /*     0     8 */
protected:

	class shared_ptr<ArchiveMetadata> m_data;        /*     8    16 */
public:

	void Archive(class Archive *);

	void Archive(class Archive *, const class Archive  &);

	virtual void ~Archive(class Archive *);

	class SystemStatus Load(class Archive *, string, bool);

	class SystemStatus Load(class Archive *, class shared_ptr<File>, bool);

	class shared_ptr<Directory> GetRootDirectory(class Archive *);

	string GetContentVersion(class Archive *);

	uint16_t GetCalculatedChecksum(const class Archive  *);

	class ArchiveFileHeader GetArchiveFileHeader(const class Archive  *);

	/* vtable has 1 entries: {
	   [0] = ~Archive((null)), 
	} */
	/* size: 24, cachelines: 1, members: 2 */
	/* last cacheline: 24 bytes */
};
class ArchiveMetadata : public enable_shared_from_this<ArchiveMetadata> {
public:

	/* class enable_shared_from_this<ArchiveMetadata> <ancestor>; */ /*     0    16 */
protected:

	class FileUri             m_archiveRootPath;     /*    16   256 */
	/* --- cacheline 4 boundary (256 bytes) was 16 bytes ago --- */
	class shared_ptr<File>    m_file;                /*   272    16 */
	struct ArchiveFileHeader   m_header;             /*   288    96 */

	/* XXX last struct has 36 bytes of padding */

	/* --- cacheline 6 boundary (384 bytes) --- */
	uint16_t                   m_checksum;           /*   384     2 */

	/* XXX 6 bytes hole, try to pack */

	class vector<DirOrFileEntry, std::__1::allocator<DirOrFileEntry> > m_dirInfo; /*   392    24 */
	class map<unsigned int, std::__1::shared_ptr<ArchivedFile>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::shared_ptr<ArchivedFile> > > > m_files; /*   416    24 */
	class map<unsigned int, std::__1::shared_ptr<ArchiveDirectory>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::shared_ptr<ArchiveDirectory> > > > m_directories; /*   440    24 */
public:

	void ArchiveMetadata(class ArchiveMetadata *);

	void ~ArchiveMetadata(class ArchiveMetadata *);

	class SystemStatus Load(class ArchiveMetadata *, class shared_ptr<File>, bool);

	string GetArchivePath(class ArchiveMetadata *);

	string GetContentVersion(class ArchiveMetadata *);

	class shared_ptr<Directory> GetRootDirectory(class ArchiveMetadata *);

	class shared_ptr<Directory> LookupDirectoryByIndex(class ArchiveMetadata *, uint32_t);

	uint32_t GetIndexFromOffset(class ArchiveMetadata *, uint64_t);

	bool IsEntryDirectoryByIndex(class ArchiveMetadata *, uint32_t);

	class shared_ptr<Directory> CreateDirectoryByIndex(class ArchiveMetadata *, uint32_t, string);

	class shared_ptr<File> CreateFileByIndex(class ArchiveMetadata *, uint32_t, string);

	class shared_ptr<File> GetFile(class ArchiveMetadata *);

	uint16_t GetCalculatedChecksum(class ArchiveMetadata *);

	class ArchiveFileHeader GetArchiveFileHeader(const class ArchiveMetadata  *);

protected:

	void GenerateRootPath(class ArchiveMetadata *, class FileUri &);

	class SystemStatus GetVariableLengthValue(class ArchiveMetadata *, class VariableLengthValue &, class vector<unsigned char, std::__1::allocator<unsigned char> > &);

	void DumpDirOrFileEntry(class ArchiveMetadata *, class DirOrFileEntry &, uint64_t);

	class SystemStatus CalculateChecksum(class ArchiveMetadata *, uint16_t &);

	class SystemStatus LoadHeader(class ArchiveMetadata *);

	class SystemStatus LoadDirectoryData(class ArchiveMetadata *);

	class SystemStatus LoadRootDirectoryEntry(class ArchiveMetadata *);

	class SystemStatus ValidateArchive(class ArchiveMetadata *);

	class SystemStatus ValidateHeaderSection(class ArchiveMetadata *);

	class SystemStatus ValidateDirectorySection(class ArchiveMetadata *);

	class SystemStatus ValidateVariableLengthValue(class ArchiveMetadata *, class VariableLengthValue &, uint64_t &);

	class SystemStatus ValidateVariableLengthSection(class ArchiveMetadata *);

	class SystemStatus ValidateFileValue(class ArchiveMetadata *, class VariableLengthValue &, uint64_t &);


	/* size: 464, cachelines: 8, members: 8 */
	/* sum members: 442, holes: 1, sum holes: 6 */
	/* paddings: 1, sum paddings: 36 */
	/* last cacheline: 16 bytes */

	/* BRAIN FART ALERT! 464 != 442 + 6(holes), diff = 16 */

};
struct ArchiveFileHeader {
	uint32le_t                 magicNumber;          /*     0     4 */
	uint32le_t                 version;              /*     4     4 */
	uint32le_t                 checksum;             /*     8     4 */
	uint32le_t                 padding;              /*    12     4 */
	uint64le_t                 directoryStartOffset; /*    16     8 */
	uint64le_t                 variableStartOffset;  /*    24     8 */
	uint64le_t                 fileStartOffset;      /*    32     8 */
	uint64le_t                 endOffset;            /*    40     8 */
	struct VariableLengthValue contentVersion;       /*    48    12 */
	uint8_t                    padding2[0];          /*    60     0 */

	/* size: 96, cachelines: 2, members: 10 */
	/* padding: 36 */
	/* last cacheline: 32 bytes */
};
struct VariableLengthValue {
	uint64le_t                 offset;               /*     0     8 */
	uint32le_t                 length;               /*     8     4 */

	/* size: 12, cachelines: 1, members: 2 */
	/* last cacheline: 12 bytes */
};
struct DirOrFileEntry {
	uint32le_t                 magicNumber;          /*     0     4 */
	struct VariableLengthValue name;                 /*     4    12 */
	uint64le_t                 parent;               /*    16     8 */
	uint32le_t                 isDirectory;          /*    24     4 */
	uint64le_t                 fileSize;             /*    28     8 */
	uint64le_t                 creationTime;         /*    36     8 */
	uint64le_t                 lastUpdateTime;       /*    44     8 */
	uint64le_t                 blockSize;            /*    52     8 */
	uint64le_t                 blockCount;           /*    60     8 */
	/* --- cacheline 1 boundary (64 bytes) was 4 bytes ago --- */
	union {
		struct VariableLengthValue fileContents; /*    68    12 */
		struct VariableLengthValue directoryContents; /*    68    12 */
	};                                               /*    68    12 */
	union {
		struct VariableLengthValue fileContents;         /*     0    12 */
		struct VariableLengthValue directoryContents;    /*     0    12 */
	};

	void DirOrFileEntry(class DirOrFileEntry *);


	/* size: 80, cachelines: 2, members: 10 */
	/* last cacheline: 16 bytes */
};
class PalSettings {
public:

	static const char  *const         DefaultIniFile /*     0     0 */
	static const char  *const         PalSection     /*     0     0 */
	static const char  *const         TraceFlagsKey  /*     0     0 */
	static const char  *const         FileLocationSection /*     0     0 */
	static const char  *const         DefaultDumpDirKey /*     0     0 */
	static const char  *const         ErrorLogFile   /*     0     0 */
	static const char  *const         ControlSection /*     0     0 */
	static const char  *const         HEStackSizeKey /*     0     0 */
	static const char  *const         AlternateWriteThroughKey /*     0     0 */
	static const char  *const         WriteThroughKey /*     0     0 */
	static size_tconst                DefaultHEStackKB = 128; /*     0     0 */
	static const char  *const         NetworkSection /*     0     0 */
	static const char  *const         NetTcpPortMappingSection /*     0     0 */
	static const char  *const         ForceLdapsKey  /*     0     0 */
	static const char  *const         DisableSSSDKey /*     0     0 */
	static const char  *const         PrivilegedADAccountKey /*     0     0 */
	class Configuration *      m_configuration;      /*     0     8 */
	class SystemStatus LoadDefaultIni(class PalSettings *, const char  *);

	class SystemStatus ParseIniFile(class PalSettings *, const string  &);

	void PalSettings(class PalSettings *, class Configuration *);

	void SetIniFilePath(class PalSettings *, const string  &);

	void ParseFileLocationSection(class PalSettings *, class IniFile &);

	void ParseTraceFlagsSection(class PalSettings *, class IniFile &);

	void ParseControlSection(class PalSettings *, class IniFile &);

	void ParseNetworkSection(class PalSettings *, class IniFile &);

	void ParseNetTcpPortMappingSection(class PalSettings *, class IniFile &);

	bool ParseForSection(class PalSettings *, const SectionList  &, const string  &, SectionNameValuePair &);

	bool ParseForKeyValue(class PalSettings *, const SectionNameValuePair  &, const string  &, string &);


	/* size: 8, cachelines: 1, members: 1, static members: 16 */
	/* last cacheline: 8 bytes */
};
class IniFile {
	bool                       m_allowDuplicateValues; /*     0     1 */

	/* XXX 3 bytes hole, try to pack */

	unsigned int               m_lineno;             /*     4     4 */
	bool                       m_isLoaded;           /*     8     1 */

	/* XXX 7 bytes hole, try to pack */

	SectionList                m_sections;           /*    16    24 */
public:

	void IniFile(class IniFile *);

	void LoadFile(class IniFile *, string, bool);

	void LoadFile(class IniFile *, string, class Directory &, bool);

	void Load(class IniFile *, class File &, bool);

	void ~IniFile(class IniFile *);

	SectionList & GetSections(class IniFile *);

	void ParseFile(class IniFile *, class File &);

	bool IsEmptyOrComment(const class IniFile  *, const string  &);

	bool IsSectionHeader(const class IniFile  *, const string  &);

	string ExtractSectionName(const class IniFile  *, const string  &);

	class tuple<std::__1::basic_string<char>, std::__1::basic_string<char> > GetNameValuePair(const class IniFile  *, const string  &);


	/* size: 40, cachelines: 1, members: 4 */
	/* sum members: 30, holes: 2, sum holes: 10 */
	/* last cacheline: 40 bytes */
};
class Package {
	string                     m_hostPackageLocation; /*     0    24 */
	class shared_ptr<Directory> m_directory;         /*    24    16 */
	class Manifest            m_manifest;            /*    40   896 */

	/* XXX last struct has 7 bytes of padding */

	/* --- cacheline 14 boundary (896 bytes) was 40 bytes ago --- */
	bool                       m_isLoaded;           /*   936     1 */
public:

	void Package(class Package *);

	void Load(class Package *, class shared_ptr<Directory>);

	class SystemStatus GetContentDirectory(class Package *, class shared_ptr<Directory> &);

	class Manifest & GetManifest(class Package *);

	void ValidatePackage(class Package *, class Directory &);


	/* size: 944, cachelines: 15, members: 4 */
	/* padding: 7 */
	/* paddings: 1, sum paddings: 7 */
	/* last cacheline: 48 bytes */
};
class Manifest {
	UriMap                     m_readOnlyMappings;   /*     0    24 */
	UriMap                     m_mappings;           /*    24    24 */
	class FileUri             m_osEntryPoint;        /*    48   256 */
	/* --- cacheline 4 boundary (256 bytes) was 48 bytes ago --- */
	class FileUri             m_filterEntryPoint;    /*   304   256 */
	/* --- cacheline 8 boundary (512 bytes) was 48 bytes ago --- */
	class FileUri             m_appEntryPoint;       /*   560   256 */
	/* --- cacheline 12 boundary (768 bytes) was 48 bytes ago --- */
	UriList                    m_registryHives;      /*   816    24 */
	/* --- cacheline 13 boundary (832 bytes) was 8 bytes ago --- */
	class vector<PersistentHive, std::__1::allocator<PersistentHive> > m_persistentHives; /*   840    24 */
	UriList                    m_loaderSandboxWhitelist; /*   864    24 */
	bool                       m_isLoaded;           /*   888     1 */
public:

	void Manifest(class Manifest *);

	void Manifest(class Manifest *, const class Manifest  &);

	class Manifest & operator=(class Manifest *, const class Manifest  &);

	void Load(class Manifest *, const string  &);

	void Load(class Manifest *, const string  &, class Directory &);

	void Load(class Manifest *, class File &);

	bool HasMappings(const class Manifest  *);

	bool HasReadOnlyMappings(const class Manifest  *);

	bool HasOsEntryPoint(const class Manifest  *);

	bool HasFilterEntryPoint(const class Manifest  *);

	bool HasAppEntryPoint(const class Manifest  *);

	bool HasRegistryHives(const class Manifest  *);

	bool HasPersistentHives(const class Manifest  *);

	bool HasLoaderSandboxWhitelist(const class Manifest  *);

	UriMap & GetMappings(class Manifest *);

	UriMap & GetReadOnlyMappings(class Manifest *);

	class FileUri & GetOsEntryPoint(class Manifest *);

	class FileUri & GetFilterEntryPoint(class Manifest *);

	class FileUri & GetAppEntryPoint(class Manifest *);

	UriList & GetRegistryFiles(class Manifest *);

	class vector<PersistentHive, std::__1::allocator<PersistentHive> > & GetPersistentHives(class Manifest *);

	UriList & GetLoaderSandboxWhitelist(class Manifest *);

	void ExtractData(class Manifest *, class IniFile &);


	/* size: 896, cachelines: 14, members: 9 */
	/* padding: 7 */
};
class DistributionInfo {
	bool                       m_isInitialized;      /*     0     1 */

	/* XXX 7 bytes hole, try to pack */

	string                     m_operatingSystemName; /*     8    24 */
	string                     m_distributionName;   /*    32    24 */
	string                     m_releaseName;        /*    56    24 */
	/* --- cacheline 1 boundary (64 bytes) was 16 bytes ago --- */
	string                     m_extendedReleaseName; /*    80    24 */
	string                     m_fullDistributionName; /*   104    24 */
public:

	void DistributionInfo(class DistributionInfo *);

	void Init(class DistributionInfo *);

	const string  & GetOperatingSystemName(const class DistributionInfo  *);

	const string  & GetDistributionName(const class DistributionInfo  *);

	const string  & GetReleaseName(const class DistributionInfo  *);

	const string  & GetExtendedReleaseName(const class DistributionInfo  *);

	const string  & GetFullDistributionName(const class DistributionInfo  *);


	/* size: 128, cachelines: 2, members: 6 */
	/* sum members: 121, holes: 1, sum holes: 7 */
};
class DockerInfo {
	bool                       m_isInitialized;      /*     0     1 */
	bool                       m_isDockerContainer;  /*     1     1 */
public:

	void DockerInfo(class DockerInfo *);

	void Init(class DockerInfo *);

	bool IsDockerContainer(const class DockerInfo  *);

	void CheckControlGroups(class DockerInfo *);

	bool DoesFileExist(const class DockerInfo  *, const string  &);

	void CheckDockerFiles(class DockerInfo *);


	/* size: 2, cachelines: 1, members: 2 */
	/* last cacheline: 2 bytes */
};
struct PAL_OS_BOOT_INFORMATION {
	enum PalOsType             OSType;               /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	PVOID                      EntrypointAddress;    /*     8     8 */
	PVOID                      StackBaseAddress;     /*    16     8 */
	PVOID                      StartModuleBaseAddress; /*    24     8 */
	ULONG64                    StartModuleLength;    /*    32     8 */

	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 36, holes: 1, sum holes: 4 */
	/* last cacheline: 40 bytes */
};
class GuestOsInitializationData {
	DK_LIBOS_INIT_DATA         m_initData;           /*     0   128 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	class GuestOsParameters   m_parameters;          /*   128    32 */

	/* XXX last struct has 7 bytes of padding */

	class GuestOsParameterBuffer m_buffer;           /*   160    24 */
	bool                       m_isLoaded;           /*   184     1 */
public:

	void GuestOsInitializationData(class GuestOsInitializationData *);

	void Load(class GuestOsInitializationData *, const class Configuration  &, PVOID, ULONG64, const DK_CALL_TABLE  &, DK_UPCALL_TABLE &, unsigned intconst);

	void * GetInitializationDataAddress(class GuestOsInitializationData *);

	unsigned int GetInitializationDataSize(class GuestOsInitializationData *);

	void * GetParameterBufferAddress(class GuestOsInitializationData *);

	unsigned int GetParameterBufferSize(class GuestOsInitializationData *);


	/* size: 192, cachelines: 3, members: 4 */
	/* padding: 7 */
	/* paddings: 1, sum paddings: 7 */
};
struct _DK_LIBOS_INIT_DATA {
	ULONG64                    DataLength;           /*     0     8 */
	ULONG                      ApiVersion;           /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	union {
		const DK_CALL_TABLE  * Pointer;          /*    16     8 */
		ULONG64            U64;                  /*    16     8 */
	} CallTable;                                     /*    16     8 */
	union {
		const DK_CALL_TABLE  *     Pointer;              /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		PDK_UPCALL_TABLE   Pointer;              /*    24     8 */
		ULONG64            U64;                  /*    24     8 */
	} UpcallTable;                                   /*    24     8 */
	union {
		PDK_UPCALL_TABLE           Pointer;              /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	ULONG64                    UpcallTableMaxLength; /*    32     8 */
	UNICODE_STRING             StartModuleUri;       /*    40    16 */
	ULONG64                    StartModuleBaseAddress; /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	ULONG64                    StartModuleLength;    /*    64     8 */
	ULONG64                    ParametersAddress;    /*    72     8 */
	ULONG64                    ParametersLength;     /*    80     8 */
	BOOLEAN                    DebuggerPresent;      /*    88     1 */

	/* XXX 7 bytes hole, try to pack */

	ULONGLONG                  UniqueMacID;          /*    96     8 */
	ULONG                      BootID;               /*   104     4 */
	union {
		DK_LIBOS_INIT_DATA_X86 x86;              /*   108    12 */
		DK_LIBOS_INIT_DATA_X64 x64;              /*   108    16 */
	} Arch;                                          /*   108    16 */
	union {
		DK_LIBOS_INIT_DATA_X86     x86;                  /*     0    12 */
		DK_LIBOS_INIT_DATA_X64     x64;                  /*     0    16 */
	};


	/* size: 128, cachelines: 2, members: 14 */
	/* sum members: 113, holes: 2, sum holes: 11 */
	/* padding: 4 */
};
struct _DK_CALL_TABLE {
	ULONG                      TableLength;          /*     0     4 */
	ULONG                      ApiVersion;           /*     4     4 */
	union {
		DKAPI_AsyncCancel * Function;            /*     8     8 */
		ULONG64            U64;                  /*     8     8 */
	} AsyncCancel;                                   /*     8     8 */
	union {
		DKAPI_AsyncCancel *        Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_AsyncPoll *  Function;             /*    16     8 */
		ULONG64            U64;                  /*    16     8 */
	} AsyncPoll;                                     /*    16     8 */
	union {
		DKAPI_AsyncPoll *          Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ConsoleCreate * Function;          /*    24     8 */
		ULONG64            U64;                  /*    24     8 */
	} ConsoleCreate;                                 /*    24     8 */
	union {
		DKAPI_ConsoleCreate *      Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ConsoleEventPoll * Function;       /*    32     8 */
		ULONG64            U64;                  /*    32     8 */
	} ConsoleEventPoll;                              /*    32     8 */
	union {
		DKAPI_ConsoleEventPoll *   Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ConsoleNotifyUpdate * Function;    /*    40     8 */
		ULONG64            U64;                  /*    40     8 */
	} ConsoleNotifyUpdate;                           /*    40     8 */
	union {
		DKAPI_ConsoleNotifyUpdate * Function;            /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_DebugStringPrint * Function;       /*    48     8 */
		ULONG64            U64;                  /*    48     8 */
	} DebugStringPrint;                              /*    48     8 */
	union {
		DKAPI_DebugStringPrint *   Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_EventClear * Function;             /*    56     8 */
		ULONG64            U64;                  /*    56     8 */
	} EventClear;                                    /*    56     8 */
	union {
		DKAPI_EventClear *         Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	/* --- cacheline 1 boundary (64 bytes) --- */
	union {
		DKAPI_EventPeek *  Function;             /*    64     8 */
		ULONG64            U64;                  /*    64     8 */
	} EventPeek;                                     /*    64     8 */
	union {
		DKAPI_EventPeek *          Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_EventSet *   Function;             /*    72     8 */
		ULONG64            U64;                  /*    72     8 */
	} EventSet;                                      /*    72     8 */
	union {
		DKAPI_EventSet *           Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ExceptionRecordFree * Function;    /*    80     8 */
		ULONG64            U64;                  /*    80     8 */
	} ExceptionRecordFree;                           /*    80     8 */
	union {
		DKAPI_ExceptionRecordFree * Function;            /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_InstructionCacheFlush * Function;  /*    88     8 */
		ULONG64            U64;                  /*    88     8 */
	} InstructionCacheFlush;                         /*    88     8 */
	union {
		DKAPI_InstructionCacheFlush * Function;          /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_NotificationEventCreate * Function; /*    96     8 */
		ULONG64            U64;                  /*    96     8 */
	} NotificationEventCreate;                       /*    96     8 */
	union {
		DKAPI_NotificationEventCreate * Function;        /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ObjectClose * Function;            /*   104     8 */
		ULONG64            U64;                  /*   104     8 */
	} ObjectClose;                                   /*   104     8 */
	union {
		DKAPI_ObjectClose *        Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ObjectReference * Function;        /*   112     8 */
		ULONG64            U64;                  /*   112     8 */
	} ObjectReference;                               /*   112     8 */
	union {
		DKAPI_ObjectReference *    Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ObjectsWaitAny * Function;         /*   120     8 */
		ULONG64            U64;                  /*   120     8 */
	} ObjectsWaitAny;                                /*   120     8 */
	union {
		DKAPI_ObjectsWaitAny *     Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	/* --- cacheline 2 boundary (128 bytes) --- */
	union {
		DKAPI_ProcessCreate * Function;          /*   128     8 */
		ULONG64            U64;                  /*   128     8 */
	} ProcessCreate;                                 /*   128     8 */
	union {
		DKAPI_ProcessCreate *      Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ProcessExit * Function;            /*   136     8 */
		ULONG64            U64;                  /*   136     8 */
	} ProcessExit;                                   /*   136     8 */
	union {
		DKAPI_ProcessExit *        Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ProcessGetExitCode * Function;     /*   144     8 */
		ULONG64            U64;                  /*   144     8 */
	} ProcessGetExitCode;                            /*   144     8 */
	union {
		DKAPI_ProcessGetExitCode * Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ProcessTerminate * Function;       /*   152     8 */
		ULONG64            U64;                  /*   152     8 */
	} ProcessTerminate;                              /*   152     8 */
	union {
		DKAPI_ProcessTerminate *   Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_RandomBitsRead * Function;         /*   160     8 */
		ULONG64            U64;                  /*   160     8 */
	} RandomBitsRead;                                /*   160     8 */
	union {
		DKAPI_RandomBitsRead *     Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_SemaphoreCreate * Function;        /*   168     8 */
		ULONG64            U64;                  /*   168     8 */
	} SemaphoreCreate;                               /*   168     8 */
	union {
		DKAPI_SemaphoreCreate *    Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_SemaphorePeek * Function;          /*   176     8 */
		ULONG64            U64;                  /*   176     8 */
	} SemaphorePeek;                                 /*   176     8 */
	union {
		DKAPI_SemaphorePeek *      Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_SemaphoreRelease * Function;       /*   184     8 */
		ULONG64            U64;                  /*   184     8 */
	} SemaphoreRelease;                              /*   184     8 */
	union {
		DKAPI_SemaphoreRelease *   Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	/* --- cacheline 3 boundary (192 bytes) --- */
	union {
		DKAPI_StreamAttributesQuery * Function;  /*   192     8 */
		ULONG64            U64;                  /*   192     8 */
	} StreamAttributesQuery;                         /*   192     8 */
	union {
		DKAPI_StreamAttributesQuery * Function;          /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamAttributesQueryByHandle * Function; /*   200     8 */
		ULONG64            U64;                  /*   200     8 */
	} StreamAttributesQueryByHandle;                 /*   200     8 */
	union {
		DKAPI_StreamAttributesQueryByHandle * Function;  /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamChangesPoll * Function;      /*   208     8 */
		ULONG64            U64;                  /*   208     8 */
	} StreamChangesPoll;                             /*   208     8 */
	union {
		DKAPI_StreamChangesPoll *  Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamChangesRegister * Function;  /*   216     8 */
		ULONG64            U64;                  /*   216     8 */
	} StreamChangesRegister;                         /*   216     8 */
	union {
		DKAPI_StreamChangesRegister * Function;          /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamDelete * Function;           /*   224     8 */
		ULONG64            U64;                  /*   224     8 */
	} StreamDelete;                                  /*   224     8 */
	union {
		DKAPI_StreamDelete *       Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamEnableSparse * Function;     /*   232     8 */
		ULONG64            U64;                  /*   232     8 */
	} StreamEnableSparse;                            /*   232     8 */
	union {
		DKAPI_StreamEnableSparse * Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamEnumerateChildren * Function; /*   240     8 */
		ULONG64            U64;                  /*   240     8 */
	} StreamEnumerateChildren;                       /*   240     8 */
	union {
		DKAPI_StreamEnumerateChildren * Function;        /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamFlush * Function;            /*   248     8 */
		ULONG64            U64;                  /*   248     8 */
	} StreamFlush;                                   /*   248     8 */
	union {
		DKAPI_StreamFlush *        Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	/* --- cacheline 4 boundary (256 bytes) --- */
	union {
		DKAPI_StreamMap *  Function;             /*   256     8 */
		ULONG64            U64;                  /*   256     8 */
	} StreamMap;                                     /*   256     8 */
	union {
		DKAPI_StreamMap *          Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamMapPeBinary * Function;      /*   264     8 */
		ULONG64            U64;                  /*   264     8 */
	} StreamMapPeBinary;                             /*   264     8 */
	union {
		DKAPI_StreamMapPeBinary *  Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamOpen * Function;             /*   272     8 */
		ULONG64            U64;                  /*   272     8 */
	} StreamOpen;                                    /*   272     8 */
	union {
		DKAPI_StreamOpen *         Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamQueryAllocatedRanges * Function; /*   280     8 */
		ULONG64            U64;                  /*   280     8 */
	} StreamQueryAllocatedRanges;                    /*   280     8 */
	union {
		DKAPI_StreamQueryAllocatedRanges * Function;     /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamRangeLock * Function;        /*   288     8 */
		ULONG64            U64;                  /*   288     8 */
	} StreamRangeLock;                               /*   288     8 */
	union {
		DKAPI_StreamRangeLock *    Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamRangeUnlock * Function;      /*   296     8 */
		ULONG64            U64;                  /*   296     8 */
	} StreamRangeUnlock;                             /*   296     8 */
	union {
		DKAPI_StreamRangeUnlock *  Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamRead * Function;             /*   304     8 */
		ULONG64            U64;                  /*   304     8 */
	} StreamRead;                                    /*   304     8 */
	union {
		DKAPI_StreamRead *         Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamReadScatter * Function;      /*   312     8 */
		ULONG64            U64;                  /*   312     8 */
	} StreamReadScatter;                             /*   312     8 */
	union {
		DKAPI_StreamReadScatter *  Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	/* --- cacheline 5 boundary (320 bytes) --- */
	union {
		DKAPI_StreamRename * Function;           /*   320     8 */
		ULONG64            U64;                  /*   320     8 */
	} StreamRename;                                  /*   320     8 */
	union {
		DKAPI_StreamRename *       Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamSetLength * Function;        /*   328     8 */
		ULONG64            U64;                  /*   328     8 */
	} StreamSetLength;                               /*   328     8 */
	union {
		DKAPI_StreamSetLength *    Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamSetZeroData * Function;      /*   336     8 */
		ULONG64            U64;                  /*   336     8 */
	} StreamSetZeroData;                             /*   336     8 */
	union {
		DKAPI_StreamSetZeroData *  Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamUnmap * Function;            /*   344     8 */
		ULONG64            U64;                  /*   344     8 */
	} StreamUnmap;                                   /*   344     8 */
	union {
		DKAPI_StreamUnmap *        Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamGetEvent * Function;         /*   352     8 */
		ULONG64            U64;                  /*   352     8 */
	} StreamGetEvent;                                /*   352     8 */
	union {
		DKAPI_StreamGetEvent *     Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamWrite * Function;            /*   360     8 */
		ULONG64            U64;                  /*   360     8 */
	} StreamWrite;                                   /*   360     8 */
	union {
		DKAPI_StreamWrite *        Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamWriteGather * Function;      /*   368     8 */
		ULONG64            U64;                  /*   368     8 */
	} StreamWriteGather;                             /*   368     8 */
	union {
		DKAPI_StreamWriteGather *  Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_SynchronizationEventCreate * Function; /*   376     8 */
		ULONG64            U64;                  /*   376     8 */
	} SynchronizationEventCreate;                    /*   376     8 */
	union {
		DKAPI_SynchronizationEventCreate * Function;     /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	/* --- cacheline 6 boundary (384 bytes) --- */
	union {
		DKAPI_SystemTimeQuery * Function;        /*   384     8 */
		ULONG64            U64;                  /*   384     8 */
	} SystemTimeQuery;                               /*   384     8 */
	union {
		DKAPI_SystemTimeQuery *    Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ThreadCreate * Function;           /*   392     8 */
		ULONG64            U64;                  /*   392     8 */
	} ThreadCreate;                                  /*   392     8 */
	union {
		DKAPI_ThreadCreate *       Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ThreadExit * Function;             /*   400     8 */
		ULONG64            U64;                  /*   400     8 */
	} ThreadExit;                                    /*   400     8 */
	union {
		DKAPI_ThreadExit *         Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ThreadInterrupt * Function;        /*   408     8 */
		ULONG64            U64;                  /*   408     8 */
	} ThreadInterrupt;                               /*   408     8 */
	union {
		DKAPI_ThreadInterrupt *    Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ThreadSetRegisters * Function;     /*   416     8 */
		ULONG64            U64;                  /*   416     8 */
	} ThreadSetRegisters;                            /*   416     8 */
	union {
		DKAPI_ThreadSetRegisters * Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ThreadYieldExecution * Function;   /*   424     8 */
		ULONG64            U64;                  /*   424     8 */
	} ThreadYieldExecution;                          /*   424     8 */
	union {
		DKAPI_ThreadYieldExecution * Function;           /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_VirtualMemoryAllocate * Function;  /*   432     8 */
		ULONG64            U64;                  /*   432     8 */
	} VirtualMemoryAllocate;                         /*   432     8 */
	union {
		DKAPI_VirtualMemoryAllocate * Function;          /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_VirtualMemoryFree * Function;      /*   440     8 */
		ULONG64            U64;                  /*   440     8 */
	} VirtualMemoryFree;                             /*   440     8 */
	union {
		DKAPI_VirtualMemoryFree *  Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	/* --- cacheline 7 boundary (448 bytes) --- */
	union {
		DKAPI_VirtualMemoryProtect * Function;   /*   448     8 */
		ULONG64            U64;                  /*   448     8 */
	} VirtualMemoryProtect;                          /*   448     8 */
	union {
		DKAPI_VirtualMemoryProtect * Function;           /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamControl * Function;          /*   456     8 */
		ULONG64            U64;                  /*   456     8 */
	} StreamControl;                                 /*   456     8 */
	union {
		DKAPI_StreamControl *      Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_Syscall *    Function;             /*   464     8 */
		ULONG64            U64;                  /*   464     8 */
	} Syscall;                                       /*   464     8 */
	union {
		DKAPI_Syscall *            Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_AsyncCancelPumpIoRequest * Function; /*   472     8 */
		ULONG64            U64;                  /*   472     8 */
	} AsyncCancelPumpIoRequest;                      /*   472     8 */
	union {
		DKAPI_AsyncCancelPumpIoRequest * Function;       /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_SemaphoreReleaseEx * Function;     /*   480     8 */
		ULONG64            U64;                  /*   480     8 */
	} SemaphoreReleaseEx;                            /*   480     8 */
	union {
		DKAPI_SemaphoreReleaseEx * Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamEventSelect * Function;      /*   488     8 */
		ULONG64            U64;                  /*   488     8 */
	} StreamEventSelect;                             /*   488     8 */
	union {
		DKAPI_StreamEventSelect *  Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_StreamEventEnum * Function;        /*   496     8 */
		ULONG64            U64;                  /*   496     8 */
	} StreamEventEnum;                               /*   496     8 */
	union {
		DKAPI_StreamEventEnum *    Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_PacketAssociate * Function;        /*   504     8 */
		ULONG64            U64;                  /*   504     8 */
	} PacketAssociate;                               /*   504     8 */
	union {
		DKAPI_PacketAssociate *    Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	/* --- cacheline 8 boundary (512 bytes) --- */
	union {
		DKAPI_PacketCreate * Function;           /*   512     8 */
		ULONG64            U64;                  /*   512     8 */
	} PacketCreate;                                  /*   512     8 */
	union {
		DKAPI_PacketCreate *       Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_ThreadSetAffinity * Function;      /*   520     8 */
		ULONG64            U64;                  /*   520     8 */
	} ThreadSetAffinity;                             /*   520     8 */
	union {
		DKAPI_ThreadSetAffinity *  Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};


	/* size: 528, cachelines: 9, members: 67 */
	/* last cacheline: 16 bytes */
};
struct _DK_CONSOLE_PARAMETERS {
	ULONG                      VideoId;              /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	PVOID                      FrameBuffer;          /*     8     8 */
	ULONG                      BitsPerPixel;         /*    16     4 */
	ULONG                      WidthInPixels;        /*    20     4 */
	ULONG                      HeightInPixels;       /*    24     4 */
	ULONG                      ScanLineInBytes;      /*    28     4 */

	/* size: 32, cachelines: 1, members: 6 */
	/* sum members: 28, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */
};
struct _DK_INPUT_EVENT {
	DK_INPUT_EVENT_TYPE        Type;                 /*     0     4 */
	union {
		DK_KEY_INPUT_EVENT KeyEvent;             /*     4    12 */
		DK_MOUSE_INPUT_EVENT MouseEvent;         /*     4    12 */
	} u;                                             /*     4    12 */
	union {
		DK_KEY_INPUT_EVENT         KeyEvent;             /*     0    12 */
		DK_MOUSE_INPUT_EVENT       MouseEvent;           /*     0    12 */
	};


	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct _DK_KEY_INPUT_EVENT {
	DK_KEY_INPUT_EVENT_TYPE    Type;                 /*     0     4 */
	USHORT                     HardwareScanCode;     /*     4     2 */
	USHORT                     VirtualKey;           /*     6     2 */
	BOOLEAN                    ExtendedKey;          /*     8     1 */

	/* size: 12, cachelines: 1, members: 4 */
	/* padding: 3 */
	/* last cacheline: 12 bytes */
};
struct _DK_MOUSE_INPUT_EVENT {
	DK_MOUSE_INPUT_EVENT_FLAGS Flags;                /*     0     4 */
	ULONG                      X;                    /*     4     4 */
	ULONG                      Y;                    /*     8     4 */

	/* size: 12, cachelines: 1, members: 3 */
	/* last cacheline: 12 bytes */
};
struct _DK_RECTANGLE {
	ULONG                      Left;                 /*     0     4 */
	ULONG                      Top;                  /*     4     4 */
	ULONG                      Right;                /*     8     4 */
	ULONG                      Bottom;               /*    12     4 */

	/* size: 16, cachelines: 1, members: 4 */
	/* last cacheline: 16 bytes */
};
struct _ASCII_STRING {
	USHORT                     Length;               /*     0     2 */
	USHORT                     MaximumLength;        /*     2     2 */

	/* XXX 4 bytes hole, try to pack */

	PCHAR                      Buffer;               /*     8     8 */

	/* size: 16, cachelines: 1, members: 3 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
struct _DK_EXCEPTION {
	DK_EXCEPTION_TYPE          Type;                 /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	union {
		PVOID              Pointer;              /*     8     8 */
		ULONG64            U64;                  /*     8     8 */
	} ExceptionAddress;                              /*     8     8 */
	union {
		PVOID                      Pointer;              /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		const DK_MACHINE_CONTEXT  * Pointer;     /*    16     8 */
		ULONG64            U64;                  /*    16     8 */
	} MachineContext;                                /*    16     8 */
	union {
		const DK_MACHINE_CONTEXT  * Pointer;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		struct {
			DK_MEMORY_ACCESS_TYPE AccessType; /*    24     4 */

			/* XXX 4 bytes hole, try to pack */

			union {
				PVOID Pointer;           /*    32     8 */
				ULONG64 U64;             /*    32     8 */
			} AccessedAddress;               /*    32     8 */
			union {
				PVOID      Pointer;              /*    24     8 */
				ULONG64    U64;                  /*    24     8 */
			} PageFault;

		} PageFault;                             /*    24    16 */
		struct {
			DK_SOFTWARE_INTERRUPT_TYPE Type; /*    24     4 */
			union {
				struct {
					ULONG  InterruptCode; /*    28     4 */
				} InterruptInstruction;  /*    28     4 */
			} u;                             /*    28     4 */
			union {
				struct {
					ULONG InterruptCode;     /*    24     4 */
				} InterruptInstruction;          /*    24     4 */
			} SoftwareInterrupt;

		} SoftwareInterrupt;                     /*    24     8 */
		struct {
			ULONG      HostSpecificCode;     /*    24     4 */
			ULONG      HostSpecificNumber;   /*    28     4 */
			ULONG64    HostSpecificInfo[0];  /*    32     0 */
		} Unknown;                               /*    24    40 */
	} u;                                             /*    24    40 */
	union {
		struct {
			DK_MEMORY_ACCESS_TYPE AccessType;        /*     0     4 */

			/* XXX 4 bytes hole, try to pack */

			union {
				PVOID      Pointer;              /*     8     8 */
				ULONG64    U64;                  /*     8     8 */
			} AccessedAddress;                       /*     8     8 */
			union {
				PVOID              Pointer;              /*     0     8 */
				ULONG64            U64;                  /*     0     8 */
			} PageFault;

		} PageFault;                                     /*     0    16 */
		struct {
			DK_SOFTWARE_INTERRUPT_TYPE Type;         /*     0     4 */
			union {
				struct {
					ULONG InterruptCode;     /*     4     4 */
				} InterruptInstruction;          /*     4     4 */
			} u;                                     /*     4     4 */
			union {
				struct {
					ULONG      InterruptCode;        /*     0     4 */
				} InterruptInstruction;                  /*     0     4 */
			} SoftwareInterrupt;

		} SoftwareInterrupt;                             /*     0     8 */
		struct {
			ULONG              HostSpecificCode;     /*     0     4 */
			ULONG              HostSpecificNumber;   /*     4     4 */
			ULONG64            HostSpecificInfo[0];  /*     8     0 */
		} Unknown;                                       /*     0    40 */
	};


	/* size: 64, cachelines: 1, members: 4 */
	/* sum members: 60, holes: 1, sum holes: 4 */
};
struct _DK_MACHINE_CONTEXT_X64 {
	ULONG                      EFlags;               /*     0     4 */
	USHORT                     SegCs;                /*     4     2 */
	USHORT                     SegDs;                /*     6     2 */
	USHORT                     SegEs;                /*     8     2 */
	USHORT                     SegFs;                /*    10     2 */
	USHORT                     SegSs;                /*    12     2 */

	/* XXX 2 bytes hole, try to pack */

	ULONG64                    Rax;                  /*    16     8 */
	ULONG64                    Rbx;                  /*    24     8 */
	ULONG64                    Rcx;                  /*    32     8 */
	ULONG64                    Rdx;                  /*    40     8 */
	ULONG64                    Rsp;                  /*    48     8 */
	ULONG64                    Rbp;                  /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	ULONG64                    Rsi;                  /*    64     8 */
	ULONG64                    Rdi;                  /*    72     8 */
	ULONG64                    R8;                   /*    80     8 */
	ULONG64                    R9;                   /*    88     8 */
	ULONG64                    R10;                  /*    96     8 */
	ULONG64                    R11;                  /*   104     8 */
	ULONG64                    R12;                  /*   112     8 */
	ULONG64                    R13;                  /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	ULONG64                    R14;                  /*   128     8 */
	ULONG64                    R15;                  /*   136     8 */
	ULONG64                    Rip;                  /*   144     8 */
	ULONG64                    Reserved;             /*   152     8 */
	union {
		struct {
			M128       Xmm0;                 /*   160    16 */
			M128       Xmm1;                 /*   176    16 */
			/* --- cacheline 3 boundary (192 bytes) --- */
			M128       Xmm2;                 /*   192    16 */
			M128       Xmm3;                 /*   208    16 */
			M128       Xmm4;                 /*   224    16 */
			M128       Xmm5;                 /*   240    16 */
			/* --- cacheline 4 boundary (256 bytes) --- */
			M128       Xmm6;                 /*   256    16 */
			M128       Xmm7;                 /*   272    16 */
			M128       Xmm8;                 /*   288    16 */
			M128       Xmm9;                 /*   304    16 */
			/* --- cacheline 5 boundary (320 bytes) --- */
			M128       Xmm10;                /*   320    16 */
			M128       Xmm11;                /*   336    16 */
			M128       Xmm12;                /*   352    16 */
			M128       Xmm13;                /*   368    16 */
			/* --- cacheline 6 boundary (384 bytes) --- */
			M128       Xmm14;                /*   384    16 */
			M128       Xmm15;                /*   400    16 */
		};                                       /*   160   256 */
		M128               Xmm[0];               /*   160     0 */
	};                                               /*   160   256 */
	union {
		struct {
			M128               Xmm0;                 /*     0    16 */
			M128               Xmm1;                 /*    16    16 */
			M128               Xmm2;                 /*    32    16 */
			M128               Xmm3;                 /*    48    16 */
			M128               Xmm4;                 /*    64    16 */
			M128               Xmm5;                 /*    80    16 */
			M128               Xmm6;                 /*    96    16 */
			M128               Xmm7;                 /*   112    16 */
			M128               Xmm8;                 /*   128    16 */
			M128               Xmm9;                 /*   144    16 */
			M128               Xmm10;                /*   160    16 */
			M128               Xmm11;                /*   176    16 */
			/* --- cacheline 3 boundary (192 bytes) --- */
			M128               Xmm12;                /*   192    16 */
			M128               Xmm13;                /*   208    16 */
			M128               Xmm14;                /*   224    16 */
			M128               Xmm15;                /*   240    16 */
		};                                               /*     0   256 */
		M128                       Xmm[0];               /*     0     0 */
	};

	/* --- cacheline 6 boundary (384 bytes) was 32 bytes ago --- */
	DK_FLOATING_POINT_CONTEXT_X64 FpState;           /*   416   160 */

	/* size: 576, cachelines: 9, members: 26 */
	/* sum members: 574, holes: 1, sum holes: 2 */
};
struct _M128 {
	ULONG64                    Low;                  /*     0     8 */
	LONG64                     High;                 /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct _DK_FLOATING_POINT_CONTEXT_X64 {
	USHORT                     ControlWord;          /*     0     2 */
	USHORT                     StatusWord;           /*     2     2 */
	UCHAR                      TagWord;              /*     4     1 */

	/* XXX 1 byte hole, try to pack */

	USHORT                     ErrorOpcode;          /*     6     2 */
	ULONG                      ErrorOffset;          /*     8     4 */
	USHORT                     ErrorSelector;        /*    12     2 */

	/* XXX 2 bytes hole, try to pack */

	ULONG                      DataOffset;           /*    16     4 */
	USHORT                     DataSelector;         /*    20     2 */

	/* XXX 2 bytes hole, try to pack */

	ULONG                      MxCsr;                /*    24     4 */
	ULONG                      MxCsrMask;            /*    28     4 */
	M128                       FloatRegisters[0];    /*    32     0 */

	/* size: 160, cachelines: 3, members: 11 */
	/* sum members: 27, holes: 3, sum holes: 5 */
	/* padding: 128 */
	/* last cacheline: 32 bytes */
};
struct _DK_PROCESS_CREATE_PARAMETERS {
	UNICODE_STRING             ApplicationVfsPath;   /*     0    16 */
	UNICODE_STRING             ApplicationArguments; /*    16    16 */
	struct {
		ULONG              Count;                /*    32     4 */

		/* XXX 4 bytes hole, try to pack */

		PDK_KEY_VALUE_PAIR Pairs;                /*    40     8 */
	} EnvironmentVariables;                          /*    32    16 */
	struct {
		ULONG                      Count;                /*     0     4 */

		/* XXX 4 bytes hole, try to pack */

		PDK_KEY_VALUE_PAIR         Pairs;                /*     8     8 */

		/* size: 16, cachelines: 1, members: 2 */
		/* sum members: 12, holes: 1, sum holes: 4 */
		/* last cacheline: 16 bytes */
	};

	DKHANDLE                   StandardInput;        /*    48     8 */
	DKHANDLE                   StandardOutput;       /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	DKHANDLE                   StandardError;        /*    64     8 */

	/* size: 72, cachelines: 2, members: 6 */
	/* last cacheline: 8 bytes */
};
struct _UNICODE_STRING {
	USHORT                     Length;               /*     0     2 */
	USHORT                     MaximumLength;        /*     2     2 */

	/* XXX 4 bytes hole, try to pack */

	PWCHAR                     Buffer;               /*     8     8 */

	/* size: 16, cachelines: 1, members: 3 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
struct _DK_KEY_VALUE_PAIR {
	UNICODE_STRING             Key;                  /*     0    16 */
	UNICODE_STRING             Value;                /*    16    16 */

	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */
};
struct _DK_STREAM_ATTRIBUTES {
	DK_STREAM_TYPE_FLAGS       Flags;                /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	LONG64                     CreationTime;         /*     8     8 */
	LONG64                     LastWriteTime;        /*    16     8 */
	LONG64                     FileAllocationSize;   /*    24     8 */
	LONG64                     FileLength;           /*    32     8 */
	LONG64                     TotalDirectorySize;   /*    40     8 */
	LONG64                     AvailableDirectorySize; /*    48     8 */
	ULONG                      LogicalBlockSize;     /*    56     4 */
	ULONG                      PhysicalBlockSize;    /*    60     4 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	ULONG                      UniqueIdLength;       /*    64     4 */

	/* XXX 4 bytes hole, try to pack */

	M128                       UniqueId;             /*    72    16 */

	/* size: 88, cachelines: 2, members: 11 */
	/* sum members: 80, holes: 2, sum holes: 8 */
	/* last cacheline: 24 bytes */
};
struct _DK_OPEN_OPTIONS {
	DK_OPEN_OPTION_PAIR *      Options;              /*     0     8 */
	ULONG                      OptionCount;          /*     8     4 */

	/* size: 16, cachelines: 1, members: 2 */
	/* padding: 4 */
	/* last cacheline: 16 bytes */
};
struct _DK_OPEN_OPTION_PAIR {
	GUID                       Key;                  /*     0    16 */
	PVOID                      Value;                /*    16     8 */
	ULONG                      ValueLength;          /*    24     4 */

	/* size: 32, cachelines: 1, members: 3 */
	/* padding: 4 */
	/* last cacheline: 32 bytes */
};
struct _GUID {
	ULONG                      Data1;                /*     0     4 */
	USHORT                     Data2;                /*     4     2 */
	USHORT                     Data3;                /*     6     2 */
	UCHAR                      Data4[0];             /*     8     0 */

	/* size: 16, cachelines: 1, members: 4 */
	/* padding: 8 */
	/* last cacheline: 16 bytes */
};
struct _DK_THREAD_START_PARAMETERS {
	union {
		PVOID              Pointer;              /*     0     8 */
		ULONG64            U64;                  /*     0     8 */
	} HostParameter;                                 /*     0     8 */
	union {
		PVOID                      Pointer;              /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};


	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct _DK_THREAD_CREATE_PARAMETERS {
	DK_THREAD_REGISTER_VALUES  RegisterValues;       /*     0    16 */

	/* size: 16, cachelines: 1, members: 1 */
	/* last cacheline: 16 bytes */
};
struct _DK_THREAD_REGISTER_VALUES {
	union {
		DK_THREAD_REGISTER_VALUES_X86 x86;       /*     0     8 */
		DK_THREAD_REGISTER_VALUES_X64 x64;       /*     0    16 */
	} Arch;                                          /*     0    16 */
	union {
		DK_THREAD_REGISTER_VALUES_X86 x86;               /*     0     8 */
		DK_THREAD_REGISTER_VALUES_X64 x64;               /*     0    16 */
	};


	/* size: 16, cachelines: 1, members: 1 */
	/* last cacheline: 16 bytes */
};
struct _DK_THREAD_REGISTER_VALUES_X86 {
	ULONG                      FsBase;               /*     0     4 */
	ULONG                      GsBase;               /*     4     4 */

	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
struct _DK_THREAD_REGISTER_VALUES_X64 {
	ULONG64                    FsBase;               /*     0     8 */
	ULONG64                    GsBase;               /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct _DK_CANCEL_PUMP_IO_REQUEST_DATA {
	PDK_ASYNC_RESULTS_LINKED   AsyncResultLinked;    /*     0     8 */
	DKHANDLE                   FileStream;           /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct _DK_UPCALL_TABLE {
	ULONG64                    TableLength;          /*     0     8 */
	ULONG                      ApiVersion;           /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	union {
		LIBOS_ExceptionDispatch * Function;      /*    16     8 */
		ULONG64            U64;                  /*    16     8 */
	} ExceptionDispatch;                             /*    16     8 */
	union {
		LIBOS_ExceptionDispatch *  Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};


	/* size: 24, cachelines: 1, members: 3 */
	/* sum members: 20, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */
};
struct _DK_LIBOS_INIT_DATA_X86 {
	ULONG                      SegmentSelectorFs;    /*     0     4 */
	ULONG                      SegmentSelectorCode32; /*     4     4 */
	ULONG                      SegmentSelectorData;  /*     8     4 */

	/* size: 12, cachelines: 1, members: 3 */
	/* last cacheline: 12 bytes */
};
struct _DK_LIBOS_INIT_DATA_X64 {
	ULONG                      SegmentSelectorFs;    /*     0     4 */
	ULONG                      SegmentSelectorCode32; /*     4     4 */
	ULONG                      SegmentSelectorCode64; /*     8     4 */
	ULONG                      SegmentSelectorData;  /*    12     4 */

	/* size: 16, cachelines: 1, members: 4 */
	/* last cacheline: 16 bytes */
};
class GuestOsParameters {
	class GuestOsParameterBuffer m_buffer;           /*     0    24 */
	bool                       m_isLoaded;           /*    24     1 */
public:

	void GuestOsParameters(class GuestOsParameters *);

	void Load(class GuestOsParameters *, const class Configuration  &, uintptr_t);

	void * GetParametersStructure(class GuestOsParameters *);

	unsigned int GetBufferLength(class GuestOsParameters *);

	class WINDOWS_LIBOS_PARAMETERS * GetLibOsParameters(class GuestOsParameters *);

	void WriteHardwareParameters(class GuestOsParameters *, const class Configuration  &, const char  *);

	void WriteEnvironmentVariableParameters(class GuestOsParameters *, const class Configuration  &);

	void WriteRegistryParameters(class GuestOsParameters *, const class Configuration  &);

	void WritePersistentRegistryParameters(class GuestOsParameters *, const class Configuration  &);

	void WriteFileSystemParameters(class GuestOsParameters *, const class Configuration  &);

	void WriteApplicationPathParameter(class GuestOsParameters *, const class Configuration  &);

	void WriteGuestApplicationArgumentsParameter(class GuestOsParameters *, const class Configuration  &);

	void WriteNetworkConfiguration(class GuestOsParameters *);

	void WriteNetworkParameter(class GuestOsParameters *, const string  &, const string  &, class PARAMETER_DESCRIPTOR &, size_tconst);

	void WriteHostOsDistributionInfoParameters(class GuestOsParameters *);

	void WriteHostOsDockerInfoParameters(class GuestOsParameters *);

	void WriteLanguageIdParameter(class GuestOsParameters *);

	void WriteProcessorConfigurationParameter(class GuestOsParameters *);

	void WriteTimeZoneParameters(class GuestOsParameters *);

	void WriteFlagParameters(class GuestOsParameters *, const class Configuration  &);

	void WriteRingBufferInfoListLocation(class GuestOsParameters *);

	void AddFlag(class GuestOsParameters *, intconst);

	void WriteTraceFlags(class GuestOsParameters *, const class Configuration  &);

	void WriteWorkingDirectoryPath(class GuestOsParameters *, const class Configuration  &);

	void WriteBuildStamp(class GuestOsParameters *, const class Configuration  &);

	unsigned int GetCpuCount(class GuestOsParameters *);

	unsigned int GetMachineMemorySize(class GuestOsParameters *);

	unsigned int GetCgroupMemoryLimit(class GuestOsParameters *, const char  *);

	string GetHostName(class GuestOsParameters *);

	string GetDomainName(class GuestOsParameters *);

	void WriteNetTcpPortMappingParameters(class GuestOsParameters *, const class Configuration  &);


	/* size: 32, cachelines: 1, members: 2 */
	/* padding: 7 */
	/* last cacheline: 32 bytes */
};
class GuestOsParameterBuffer {
	class vector<unsigned char, std::__1::allocator<unsigned char> > m_buffer; /*     0    24 */
public:

	void GuestOsParameterBuffer(class GuestOsParameterBuffer *);

	void * GetBuffer(class GuestOsParameterBuffer *);

	unsigned int GetLength(class GuestOsParameterBuffer *);

	void InsertString(class GuestOsParameterBuffer *, const string  &, unsigned int &, unsigned int &);

	void InsertStringNoNullTerminator(class GuestOsParameterBuffer *, const string  &, unsigned int &, unsigned int &);

	unsigned int InsertBinary(class GuestOsParameterBuffer *, const void  *, unsigned int);


	/* size: 24, cachelines: 1, members: 1 */
	/* last cacheline: 24 bytes */
};
struct WINDOWS_LIBOS_PARAMETERS {
	ULONG                      HeaderLength;         /*     0     4 */
	ULONG                      Length;               /*     4     4 */
	ULONG                      Version;              /*     8     4 */
	ULONG                      HostAbiVersion;       /*    12     4 */
	enum WINDOWS_LIBOS_FLAGS   Flags;                /*    16     4 */
	ULONG                      ExternalPid;          /*    20     4 */
	ULONG                      NtGlobalFlag;         /*    24     4 */

	/* XXX 4 bytes hole, try to pack */

	ULONG64                    KernalTraceFlags;     /*    32     8 */
	ULONG                      DesktopWidth;         /*    40     4 */
	ULONG                      DesktopHeight;        /*    44     4 */
	LONG                       VirtualMonitorCount;  /*    48     4 */
	ULONG                      PhysicalMemorySize;   /*    52     4 */
	ULONG64                    VirtualMemoryStart;   /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	ULONG64                    VirtualMemoryEnd;     /*    64     8 */
	ULONG                      NumberOfProcessors;   /*    72     4 */
	USHORT                     LanguageId;           /*    76     2 */

	/* XXX 2 bytes hole, try to pack */

	enum ContainerType         ContainerTypeEntry;   /*    80     4 */
	struct PARAMETER_DESCRIPTOR RegistryUris;        /*    84     8 */
	struct PARAMETER_DESCRIPTOR RegistryOutput;      /*    92     8 */
	struct PARAMETER_DESCRIPTOR PersistentRegistryHives; /*   100     8 */
	struct PARAMETER_DESCRIPTOR KnownDlls;           /*   108     8 */
	struct UNIONFS_DEFINITION  FsDefinition;         /*   116     8 */
	struct PARAMETER_DESCRIPTOR ScratchFolderUri;    /*   124     8 */
	/* --- cacheline 2 boundary (128 bytes) was 4 bytes ago --- */
	struct PARAMETER_DESCRIPTOR AppVfsPath;          /*   132     8 */
	struct PARAMETER_DESCRIPTOR ApplicationArguments; /*   140     8 */
	struct PARAMETER_DESCRIPTOR Environment;         /*   148     8 */
	struct PARAMETER_DESCRIPTOR WorkingDirPath;      /*   156     8 */
	struct PARAMETER_DESCRIPTOR HostName;            /*   164     8 */
	struct PARAMETER_DESCRIPTOR DomainName;          /*   172     8 */
	struct PARAMETER_DESCRIPTOR AddressList;         /*   180     8 */
	struct PARAMETER_DESCRIPTOR PortMappings;        /*   188     8 */
	/* --- cacheline 3 boundary (192 bytes) was 4 bytes ago --- */
	struct PARAMETER_DESCRIPTOR TimeZoneKeyName;     /*   196     8 */
	BOOLEAN                    DaylightTimeEnabled;  /*   204     1 */

	/* XXX 3 bytes hole, try to pack */

	struct PARAMETER_DESCRIPTOR StandardInput;       /*   208     8 */
	struct PARAMETER_DESCRIPTOR StandardOutput;      /*   216     8 */
	struct PARAMETER_DESCRIPTOR StandardError;       /*   224     8 */
	struct PARAMETER_DESCRIPTOR ClockStreamUri;      /*   232     8 */
	struct PARAMETER_DESCRIPTOR ProcessorConfiguration; /*   240     8 */
	struct PARAMETER_DESCRIPTOR HostOsName;          /*   248     8 */
	/* --- cacheline 4 boundary (256 bytes) --- */
	struct PARAMETER_DESCRIPTOR HostOsDistributionName; /*   256     8 */
	struct PARAMETER_DESCRIPTOR HostOsReleaseName;   /*   264     8 */
	struct PARAMETER_DESCRIPTOR HostOsExtendedReleaseName; /*   272     8 */
	struct PARAMETER_DESCRIPTOR HostOsFullDistributionName; /*   280     8 */
	struct PARAMETER_DESCRIPTOR BuildStamp;          /*   288     8 */
	ULONG                      TraceFlagEntryCount;  /*   296     4 */
	ULONG                      TraceFlagEntryTableOffset; /*   300     4 */
	HeRingBufferInfo * *       HeRingBufferInfoList; /*   304     8 */

	/* size: 312, cachelines: 5, members: 47 */
	/* sum members: 303, holes: 3, sum holes: 9 */
	/* last cacheline: 56 bytes */
};
struct PARAMETER_DESCRIPTOR {
	ULONG                      DataOffset;           /*     0     4 */
	ULONG                      Length;               /*     4     4 */

	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
struct UNIONFS_DEFINITION {
	struct PARAMETER_DESCRIPTOR FirstComponent;      /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct _HeRingBufferInfo {
	void *                     Next;                 /*     0     8 */
	UINT32                     Id;                   /*     8     4 */
	HeRingBufferType           Type;                 /*    12     4 */
	PVOID                      RingBuffer;           /*    16     8 */
	PVOID                      FirstEntry;           /*    24     8 */
	PUINT32                    SequenceNumber;       /*    32     8 */
	ULONG64                    NumEntries;           /*    40     8 */
	ULONG_PTR                  EntrySize;            /*    48     8 */
	ULONG_PTR                  EntryDataOffset;      /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	ULONG_PTR                  EntryDataSize;        /*    64     8 */
	ULONG_PTR                  EntryTimestampOffset; /*    72     8 */

	/* size: 80, cachelines: 2, members: 11 */
	/* last cacheline: 16 bytes */
};
class LockedMapBase<std::__1::unordered_map<unsigned long, std::__1::shared_ptr<BlockDevice>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<BlockDevice> > > >, unsigned long, std::__1::shared_ptr<BlockDevice> > {
	class RWLock              m_lock;                /*     0   128 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	class unordered_map<unsigned long, std::__1::shared_ptr<BlockDevice>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<BlockDevice> > > > m_entries; /*   128    40 */
public:

	void LockedMapBase(class LockedMapBase<std::__1::unordered_map<unsigned long, std::__1::shared_ptr<BlockDevice>, std::__1::hash<unsigned long>, st);

	bool Find(class LockedMapBase<std::__1::unordered_map<unsigned long, std::__1::shared_ptr<BlockDevice>, std::__1::hash<unsigned long>, st, long unsigned intconst, class shared_ptr<BlockDevice> &);

	void Erase(class LockedMapBase<std::__1::unordered_map<unsigned long, std::__1::shared_ptr<BlockDevice>, std::__1::hash<unsigned long>, st, long unsigned intconst);

	const class shared_ptr<BlockDevice>  & Emplace(class LockedMapBase<std::__1::unordered_map<unsigned long, std::__1::shared_ptr<BlockDevice>, std::__1::hash<unsigned long>, st, long unsigned intconst, class shared_ptr<BlockDevice>);

	void Clear(class LockedMapBase<std::__1::unordered_map<unsigned long, std::__1::shared_ptr<BlockDevice>, std::__1::hash<unsigned long>, st);


	/* size: 168, cachelines: 3, members: 2 */
	/* last cacheline: 40 bytes */
};
class FileLoggerOutput : public LoggerOutput {
public:

	/* class LoggerOutput        <ancestor>; */      /*     0   104 */
	/* --- cacheline 1 boundary (64 bytes) was 40 bytes ago --- */
	stringconst                m_filename;           /*   104    24 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	ofstream                   m_file;               /*   128   328 */
	/* --- cacheline 7 boundary (448 bytes) was 8 bytes ago --- */
	class mutex               m_lock;                /*   456    40 */
	void FileLoggerOutput(class FileLoggerOutput *, string, enum LogLevel);

	virtual void ~FileLoggerOutput(class FileLoggerOutput *);

	virtual void Output(class FileLoggerOutput *, class LoggerMessage &, const char  *);

	bool IsOpen(class FileLoggerOutput *);

	/* vtable has 2 entries: {
	   [0] = ~FileLoggerOutput((null)), 
	   [2] = Output((null)), 
	} */
	/* size: 496, cachelines: 8, members: 4 */
	/* last cacheline: 48 bytes */

	/* BRAIN FART ALERT! 496 != 392 + 0(holes), diff = 104 */

};
class FunctionLoggerOutput : public LoggerOutput {
public:

	/* class LoggerOutput        <ancestor>; */      /*     0   104 */

	/* XXX 8 bytes hole, try to pack */

	/* --- cacheline 1 boundary (64 bytes) was 48 bytes ago --- */
	class function<void (LoggerMessage &, const char *)> m_function; /*   112    48 */

	/* XXX last struct has 8 bytes of padding */
	void FunctionLoggerOutput(class FunctionLoggerOutput *, class function<void (LoggerMessage &, const char *)>, enum LogLevel);

	virtual void Output(class FunctionLoggerOutput *, class LoggerMessage &, const char  *);

	virtual void ~FunctionLoggerOutput(class FunctionLoggerOutput *);

	/* vtable has 2 entries: {
	   [2] = Output((null)), 
	   [0] = ~FunctionLoggerOutput((null)), 
	} */
	/* size: 160, cachelines: 3, members: 2 */
	/* sum members: 48, holes: 1, sum holes: 8 */
	/* paddings: 1, sum paddings: 8 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 160 != 48 + 8(holes), diff = 104 */

};
class FunctionLoggerFilter : public LoggerFilter {
public:

	/* class LoggerFilter        <ancestor>; */      /*     0     8 */

	/* XXX 8 bytes hole, try to pack */

	class function<bool (LoggerMessage &)> m_func;   /*    16    48 */

	/* XXX last struct has 8 bytes of padding */
	void FunctionLoggerFilter(class FunctionLoggerFilter *, class function<bool (LoggerMessage &)>);

	virtual bool Filter(class FunctionLoggerFilter *, class LoggerMessage &);

	virtual void ~FunctionLoggerFilter(class FunctionLoggerFilter *);

	/* vtable has 2 entries: {
	   [2] = Filter((null)), 
	   [0] = ~FunctionLoggerFilter((null)), 
	} */
	/* size: 64, cachelines: 1, members: 2 */
	/* sum members: 48, holes: 1, sum holes: 8 */
	/* paddings: 1, sum paddings: 8 */

	/* BRAIN FART ALERT! 64 != 48 + 8(holes), diff = 8 */

};
class MatchStringLoggerFilter : public LoggerFilter {
public:

	/* class LoggerFilter        <ancestor>; */      /*     0     8 */
	stringconst                m_match;              /*     8    24 */
	void MatchStringLoggerFilter(class MatchStringLoggerFilter *, string);

	virtual bool Filter(class MatchStringLoggerFilter *, class LoggerMessage &);

	virtual void ~MatchStringLoggerFilter(class MatchStringLoggerFilter *);

	/* vtable has 2 entries: {
	   [2] = Filter((null)), 
	   [0] = ~MatchStringLoggerFilter((null)), 
	} */
	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 0(holes), diff = 8 */

};
class IgnoreStringLoggerFilter : public LoggerFilter {
public:

	/* class LoggerFilter        <ancestor>; */      /*     0     8 */
	stringconst                m_ignore;             /*     8    24 */
	void IgnoreStringLoggerFilter(class IgnoreStringLoggerFilter *, string);

	virtual bool Filter(class IgnoreStringLoggerFilter *, class LoggerMessage &);

	virtual void ~IgnoreStringLoggerFilter(class IgnoreStringLoggerFilter *);

	/* vtable has 2 entries: {
	   [2] = Filter((null)), 
	   [0] = ~IgnoreStringLoggerFilter((null)), 
	} */
	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 0(holes), diff = 8 */

};
class MatchFileLoggerFilter : public LoggerFilter {
public:

	/* class LoggerFilter        <ancestor>; */      /*     0     8 */
	stringconst                m_filename;           /*     8    24 */
	void MatchFileLoggerFilter(class MatchFileLoggerFilter *, string);

	virtual bool Filter(class MatchFileLoggerFilter *, class LoggerMessage &);

	virtual void ~MatchFileLoggerFilter(class MatchFileLoggerFilter *);

	/* vtable has 2 entries: {
	   [2] = Filter((null)), 
	   [0] = ~MatchFileLoggerFilter((null)), 
	} */
	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 0(holes), diff = 8 */

};
class IgnoreFileLoggerFilter : public LoggerFilter {
public:

	/* class LoggerFilter        <ancestor>; */      /*     0     8 */
	stringconst                m_filename;           /*     8    24 */
	void IgnoreFileLoggerFilter(class IgnoreFileLoggerFilter *, string);

	virtual bool Filter(class IgnoreFileLoggerFilter *, class LoggerMessage &);

	virtual void ~IgnoreFileLoggerFilter(class IgnoreFileLoggerFilter *);

	/* vtable has 2 entries: {
	   [2] = Filter((null)), 
	   [0] = ~IgnoreFileLoggerFilter((null)), 
	} */
	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 0(holes), diff = 8 */

};
class RingBufferInfoList {
	class mutex               m_Mutex;               /*     0    40 */
	HeRingBufferInfo *         m_Head;               /*    40     8 */
	uint32_t                   m_CurrRingBufferId;   /*    48     4 */
public:

	class RingBufferInfoList * Instance(void);

	void ~RingBufferInfoList(class RingBufferInfoList *);

	void Push(class RingBufferInfoList *, HeRingBufferInfo *);

	void Remove(class RingBufferInfoList *, void *);

	HeRingBufferInfo * * Head(class RingBufferInfoList *);

	void RingBufferInfoList(class RingBufferInfoList *);


	/* size: 56, cachelines: 1, members: 3 */
	/* padding: 4 */
	/* last cacheline: 56 bytes */
};
struct _HeSocketRingRecord {
	SocketOperation            Operation;            /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	PVOID                      Stream;               /*     8     8 */
	PVOID                      DbSocket;             /*    16     8 */
	LONG                       Status;               /*    24     4 */
	SOCKET_IP_ATTRIBUTES       LocalIpAttributes;    /*    28    22 */
	SOCKET_IP_ATTRIBUTES       RemoteIpAttributes;   /*    50    22 */

	/* size: 72, cachelines: 2, members: 6 */
	/* sum members: 68, holes: 1, sum holes: 4 */
	/* last cacheline: 8 bytes */
};
struct _SOCKET_IP_ATTRIBUTES {
	USHORT                     IpAddrLength;         /*     0     2 */
	UCHAR                      Address[0];           /*     2     0 */

	/* XXX 16 bytes hole, try to pack */

	USHORT                     Port;                 /*    18     2 */
	USHORT                     IsCreate;             /*    20     2 */

	/* size: 22, cachelines: 1, members: 4 */
	/* sum members: 6, holes: 1, sum holes: 16 */
	/* last cacheline: 22 bytes */
};
class ConfigurationException : public exception {
public:

	/* class exception           <ancestor>; */      /*     0     8 */
	string                     m_message;            /*     8    24 */
	void ConfigurationException(class ConfigurationException *, const string  &);

	void ConfigurationException(class ConfigurationException *, const class ConfigurationException  &);

	virtual void ~ConfigurationException(class ConfigurationException *);

	virtual const char  * what(const class ConfigurationException  *);

	/* vtable has 2 entries: {
	   [0] = ~ConfigurationException((null)), 
	   [2] = what((null)), 
	} */
	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 0(holes), diff = 8 */

};
struct UriToHostMapping {
	string                     GuestUri;             /*     0    24 */
	class shared_ptr<GuestToHostMapping> HostMapping; /*    24    16 */
	void UriToHostMapping(class UriToHostMapping *, string, class shared_ptr<GuestToHostMapping>);

	void ~UriToHostMapping(class UriToHostMapping *);


	/* size: 40, cachelines: 1, members: 2 */
	/* last cacheline: 40 bytes */
};
class DynamicConfiguration {
public:

	static const char  *const         uncMapping     /*     0     0 */
	class IniFile             m_iniFile;             /*     0    40 */
	bool                       m_isLoaded;           /*    40     1 */
	void DynamicConfiguration(class DynamicConfiguration *);

	bool LoadFile(class DynamicConfiguration *, const string  &);

	bool GetUncMapping(class DynamicConfiguration *, const string  &, string &);

	void ~DynamicConfiguration(class DynamicConfiguration *);


	/* size: 48, cachelines: 1, members: 2, static members: 1 */
	/* padding: 7 */
	/* last cacheline: 48 bytes */
};
class ParseException : public exception {
public:

	/* class exception           <ancestor>; */      /*     0     8 */
	string                     m_message;            /*     8    24 */
	void ParseException(class ParseException *, const string  &);

	void ParseException(class ParseException *, const class ParseException  &);

	virtual void ~ParseException(class ParseException *);

	virtual const char  * what(const class ParseException  *);

	/* vtable has 2 entries: {
	   [0] = ~ParseException((null)), 
	   [2] = what((null)), 
	} */
	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 0(holes), diff = 8 */

};
struct iocb {
	__u64                      aio_data;             /*     0     8 */
	__u32                      aio_key;              /*     8     4 */
	__u32                      aio_reserved1;        /*    12     4 */
	__u16                      aio_lio_opcode;       /*    16     2 */
	__s16                      aio_reqprio;          /*    18     2 */
	__u32                      aio_fildes;           /*    20     4 */
	__u64                      aio_buf;              /*    24     8 */
	__u64                      aio_nbytes;           /*    32     8 */
	__s64                      aio_offset;           /*    40     8 */
	__u64                      aio_reserved2;        /*    48     8 */
	__u32                      aio_flags;            /*    56     4 */
	__u32                      aio_resfd;            /*    60     4 */

	/* size: 64, cachelines: 1, members: 12 */
};
struct io_event {
	__u64                      data;                 /*     0     8 */
	__u64                      obj;                  /*     8     8 */
	__s64                      res;                  /*    16     8 */
	__s64                      res2;                 /*    24     8 */

	/* size: 32, cachelines: 1, members: 4 */
	/* last cacheline: 32 bytes */
};
struct statfs {
	__fsword_t                 f_type;               /*     0     8 */
	__fsword_t                 f_bsize;              /*     8     8 */
	__fsblkcnt_t               f_blocks;             /*    16     8 */
	__fsblkcnt_t               f_bfree;              /*    24     8 */
	__fsblkcnt_t               f_bavail;             /*    32     8 */
	__fsfilcnt_t               f_files;              /*    40     8 */
	__fsfilcnt_t               f_ffree;              /*    48     8 */
	__fsid_t                   f_fsid;               /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	__fsword_t                 f_namelen;            /*    64     8 */
	__fsword_t                 f_frsize;             /*    72     8 */
	__fsword_t                 f_flags;              /*    80     8 */
	__fsword_t                 f_spare[0];           /*    88     0 */

	/* size: 120, cachelines: 2, members: 12 */
	/* padding: 32 */
	/* last cacheline: 56 bytes */
};
struct iovec {
	void *                     iov_base;             /*     0     8 */
	size_t                     iov_len;              /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
class ReadLockGuard {
	class RWLock *             m_rwLock;             /*     0     8 */
public:

	void ReadLockGuard(class ReadLockGuard *, class RWLock *);

	void ~ReadLockGuard(class ReadLockGuard *);

	void ReadLockGuard(class ReadLockGuard *);

	void ReadLockGuard(class ReadLockGuard *, const class ReadLockGuard  &);

	class ReadLockGuard & operator=(class ReadLockGuard *, const class ReadLockGuard  &);


	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
class WriteLockGuard {
	class RWLock *             m_rwLock;             /*     0     8 */
public:

	void WriteLockGuard(class WriteLockGuard *, class RWLock *);

	void ~WriteLockGuard(class WriteLockGuard *);

	void WriteLockGuard(class WriteLockGuard *);

	void WriteLockGuard(class WriteLockGuard *, const class WriteLockGuard  &);

	class WriteLockGuard & operator=(class WriteLockGuard *, const class WriteLockGuard  &);


	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
class PmmFile : public File {
public:

	/* class File                <ancestor>; */      /*     0   712 */

	/* XXX last struct has 4 bytes of padding */

	/* --- cacheline 11 boundary (704 bytes) was 4 bytes ago --- */
	int                        m_pmmOptFlushAvailable; /*   708     4 */
	void *                     m_pmmAddr;            /*   712     8 */
	size_t                     m_pmmSize;            /*   720     8 */
	class RWLock              m_pmmLock;             /*   728   128 */
	void PmmFile(class PmmFile *, bool, enum SetLengthOption, bool);

	virtual void ~PmmFile(class PmmFile *);

	class SystemStatus Open(class PmmFile *, const string  &, int, mode_t, enum ExtraFileFlags);

	virtual class SystemStatus Map(class PmmFile *, void *, size_t, int, int, off_t, void * &, size_t &);

	virtual class SystemStatus Unmap(class PmmFile *, void *, size_t);

	virtual class SystemStatus ReadBytes(class PmmFile *, off_t, size_t, void *, size_t &);

	virtual class SystemStatus WriteBytes(class PmmFile *, off_t, size_t, void *);

	virtual class SystemStatus SetLength(class PmmFile *, uint64_t);

	virtual class SystemStatus FlushInternal(class PmmFile *, intconst);

	virtual class SystemStatus CloseInternal(class PmmFile *);

	virtual bool IsPmmFile(const class PmmFile  *);

	virtual size_t GetSize(class PmmFile *);

	class SystemStatus PmmMap(class PmmFile *, void * *, size_t);

	class SystemStatus PmmUnmap(class PmmFile *, void *, size_t);

	void PmmFile(class PmmFile *, const class PmmFile  &);

	void PmmFile(class PmmFile *, );

	class PmmFile & operator=(class PmmFile *, const class PmmFile  &);

	/* vtable has 10 entries: {
	   [0] = ~PmmFile((null)), 
	   [5] = Map((null)), 
	   [6] = Unmap((null)), 
	   [10] = ReadBytes((null)), 
	   [11] = WriteBytes((null)), 
	   [12] = SetLength((null)), 
	   [28] = FlushInternal((null)), 
	   [29] = CloseInternal((null)), 
	   [20] = IsPmmFile((null)), 
	   [4] = GetSize((null)), 
	} */
	/* size: 856, cachelines: 14, members: 5 */
	/* paddings: 1, sum paddings: 4 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 856 != 148 + 0(holes), diff = 708 */

};
class LoggerConfigFile {
public:

	static const char  *              SectionTypeStrings[0] /*     0     0 */
	static const char  *              OpTypeStrings[0] /*     0     0 */
	static string                     sm_loggerConfigDirectory /*     0     0 */
	bool                       m_loaded;             /*     0     1 */

	/* XXX 7 bytes hole, try to pack */

	string                     m_filename;           /*     8    24 */
	string                     m_directory;          /*    32    24 */
	class set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > m_includedFiles; /*    56    24 */
	/* --- cacheline 1 boundary (64 bytes) was 16 bytes ago --- */
	class unordered_map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > m_variables; /*    80    40 */
	class unordered_map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > m_unresolvedVariables; /*   120    40 */
	/* --- cacheline 2 boundary (128 bytes) was 32 bytes ago --- */
	class unordered_map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > m_builtInVariables; /*   160    40 */
	/* --- cacheline 3 boundary (192 bytes) was 8 bytes ago --- */
	class unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<LoggerOutput>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<LoggerOutput> > > > m_outputs; /*   200    40 */
	class unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<LoggerFilter>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<LoggerFilter> > > > m_filters; /*   240    40 */
	void SetConfigDirectory(string);

	string GetConfigDirectory(void);

	void LoadFileOnce(string, bool);

	void LoadFileWithHotSwap(string);

	void LoadFile(class LoggerConfigFile *, string, bool);

	void LoadFile(class LoggerConfigFile *, class File &, string);

	bool CompareSectionDatas(class SectionData &, class SectionData &);

	struct SectionData {
		LoggerConfigFileSection    section;              /*     0    64 */
		enum SectionType           type;                 /*    64     4 */

		/* XXX 4 bytes hole, try to pack */

		string                     typeString;           /*    72    24 */
		string                     name;                 /*    96    24 */
		void SectionData(class SectionData *);

		void ~SectionData(class SectionData *);

		void SectionData(class SectionData *, );

		void SectionData(class SectionData *, const class SectionData  &);

		class SectionData & operator=(class SectionData *, );


		/* size: 120, cachelines: 2, members: 4 */
		/* sum members: 116, holes: 1, sum holes: 4 */
		/* last cacheline: 56 bytes */
	};

	typedef struct pair<std::__1::basic_string<char>, std::__1::unordered_multimap<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > > LoggerConfigFileSection;

	enum SectionType {
		None = 0,
		Common = 1,
		Include = 2,
		Filter = 3,
		Output = 4,
		Logger = 5,
		NumSectionTypes = 6,
	};

	time_t ReloadFileIfChanged(string, time_t, bool);

	void CheckForReloadLoop(string, time_t);

	void InitializeBuiltInVariables(class LoggerConfigFile *);

	bool OpenFile(class LoggerConfigFile *, string, class File *, bool);

	void ParseFile(class LoggerConfigFile *, string);

	void ParseFile(class LoggerConfigFile *, class File &, string);

	enum SectionType GetSectionType(class LoggerConfigFile *, const string  &);

	enum OpType GetOpType(class LoggerConfigFile *, const string  &);

	enum OpType {
		None = 0,
		Level = 1,
		Type = 2,
		Filename = 3,
		Pattern = 4,
		Format = 5,
		Outputs = 6,
		Filters = 7,
		Files = 8,
		NumOpTypes = 9,
	};

	string GetString(class LoggerConfigFile *, enum OpType);

	void FatalError(class LoggerConfigFile *, string);

	enum LogLevel ParseLogLevel(class LoggerConfigFile *, string &);

	int ParseInt(class LoggerConfigFile *, string &);

	bool ResolveRhs(class LoggerConfigFile *, const string  &, string *);

	void ResolveVariables(class LoggerConfigFile *);

	bool ParseOpTypeValue(class LoggerConfigFile *, string *, LoggerConfigFileSection &, enum OpType, bool);

	void CheckForUnexpectedOpTypes(class LoggerConfigFile *, const LoggerConfigFileSection  &, class vector<LoggerConfigFile::OpType, std::__1::allocator<LoggerConfigFile::OpType> >const);

	void IncludeFile(class LoggerConfigFile *, string);

	void Parse(class LoggerConfigFile *, class IniFile &);

	void ParseCommon(class LoggerConfigFile *, string &, LoggerConfigFileSection &);

	void ParseInclude(class LoggerConfigFile *, string &, LoggerConfigFileSection &);

	void ParseLogger(class LoggerConfigFile *, string &, LoggerConfigFileSection &);

	void ParseOutput(class LoggerConfigFile *, string &, LoggerConfigFileSection &);

	void ParseFilter(class LoggerConfigFile *, string &, LoggerConfigFileSection &);

	void LoggerConfigFile(class LoggerConfigFile *);

	void ~LoggerConfigFile(class LoggerConfigFile *);


	/* size: 280, cachelines: 5, members: 9, static members: 3 */
	/* sum members: 273, holes: 1, sum holes: 7 */
	/* last cacheline: 24 bytes */
};
struct mntent {
	char *                     mnt_fsname;           /*     0     8 */
	char *                     mnt_dir;              /*     8     8 */
	char *                     mnt_type;             /*    16     8 */
	char *                     mnt_opts;             /*    24     8 */
	int                        mnt_freq;             /*    32     4 */
	int                        mnt_passno;           /*    36     4 */

	/* size: 40, cachelines: 1, members: 6 */
	/* last cacheline: 40 bytes */
};
class TypedLogVariable<long> : public LogVariableBase {
public:

	/* class LogVariableBase     <ancestor>; */      /*     0    24 */
	long int                   m_value;              /*    24     8 */
	void TypedLogVariable(class TypedLogVariable<long> *, const char  *, long int);

	virtual void ~TypedLogVariable(class TypedLogVariable<long> *);

	virtual size_t Print(class TypedLogVariable<long> *, char *, size_t);

	/* vtable has 2 entries: {
	   [0] = ~TypedLogVariable((null)), 
	   [2] = Print((null)), 
	} */
	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 8 + 0(holes), diff = 24 */

};
class TypedLogVariable<unsigned long> : public LogVariableBase {
public:

	/* class LogVariableBase     <ancestor>; */      /*     0    24 */
	long unsigned int          m_value;              /*    24     8 */
	void TypedLogVariable(class TypedLogVariable<unsigned long> *, const char  *, long unsigned int);

	virtual void ~TypedLogVariable(class TypedLogVariable<unsigned long> *);

	virtual size_t Print(class TypedLogVariable<unsigned long> *, char *, size_t);

	/* vtable has 2 entries: {
	   [0] = ~TypedLogVariable((null)), 
	   [2] = Print((null)), 
	} */
	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 8 + 0(holes), diff = 24 */

};
class TypedLogVariable<double> : public LogVariableBase {
public:

	/* class LogVariableBase     <ancestor>; */      /*     0    24 */
	double                     m_value;              /*    24     8 */
	void TypedLogVariable(class TypedLogVariable<double> *, const char  *, double);

	virtual void ~TypedLogVariable(class TypedLogVariable<double> *);

	virtual size_t Print(class TypedLogVariable<double> *, char *, size_t);

	/* vtable has 2 entries: {
	   [0] = ~TypedLogVariable((null)), 
	   [2] = Print((null)), 
	} */
	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 8 + 0(holes), diff = 24 */

};
class TypedLogVariable<const char *> : public LogVariableBase {
public:

	/* class LogVariableBase     <ancestor>; */      /*     0    24 */
	const char  *              m_value;              /*    24     8 */
	void TypedLogVariable(class TypedLogVariable<const char *> *, const char  *, const char  *);

	virtual void ~TypedLogVariable(class TypedLogVariable<const char *> *);

	virtual size_t Print(class TypedLogVariable<const char *> *, char *, size_t);

	/* vtable has 2 entries: {
	   [0] = ~TypedLogVariable((null)), 
	   [2] = Print((null)), 
	} */
	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 8 + 0(holes), diff = 24 */

};
class TypedLogVariable<void *> : public LogVariableBase {
public:

	/* class LogVariableBase     <ancestor>; */      /*     0    24 */
	void *                     m_value;              /*    24     8 */
	void TypedLogVariable(class TypedLogVariable<void *> *, const char  *, void *);

	virtual void ~TypedLogVariable(class TypedLogVariable<void *> *);

	virtual size_t Print(class TypedLogVariable<void *> *, char *, size_t);

	/* vtable has 2 entries: {
	   [0] = ~TypedLogVariable((null)), 
	   [2] = Print((null)), 
	} */
	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 8 + 0(holes), diff = 24 */

};
struct InsensitiveCompare {
private:

	const string  &            m_comparison;         /*     0     8 */
	void InsensitiveCompare(class InsensitiveCompare *, const string  &);

	bool operator()(const class InsensitiveCompare  *, const string  &);

	bool AreEqual(const string  &, const string  &);


	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct dk_thread {
	class PalObject *          o;                    /*     0     8 */
	struct dk_thread_thunkinfo thunk;                /*     8    24 */
	pthread_t                  thread;               /*    32     8 */
	pthread_cond_t             cond;                 /*    40    48 */
	/* --- cacheline 1 boundary (64 bytes) was 24 bytes ago --- */
	void *                     start_func;           /*    88     8 */
	void *                     start_param;          /*    96     8 */
	void *                     guest_param;          /*   104     8 */
	void *                     start_stack;          /*   112     8 */
	DK_THREAD_REGISTER_VALUES  regvals;              /*   120    16 */
	/* --- cacheline 2 boundary (128 bytes) was 8 bytes ago --- */
	void *                     sigstack;             /*   136     8 */
	int                        threadnum;            /*   144     4 */

	/* XXX 4 bytes hole, try to pack */

	class dk_thread *          tnext;                /*   152     8 */
	class dk_thread *          tprev;                /*   160     8 */
	entry_thunk                entrythunk;           /*   168     8 */
	pid_t                      tid;                  /*   176     4 */

	/* XXX 4 bytes hole, try to pack */

	class ThreadWaitContext   waitContext;           /*   184  2160 */

	/* XXX last struct has 2048 bytes of padding */

	/* --- cacheline 36 boundary (2304 bytes) was 40 bytes ago --- */
	void *                     teb;                  /*  2344     8 */
	int                        exceptionCount;       /*  2352     4 */

	/* XXX 4 bytes hole, try to pack */

	jmp_buf *                  threadExitJmpBuf;     /*  2360     8 */
	/* --- cacheline 37 boundary (2368 bytes) --- */
	ULONGLONG                  libOsThreadId;        /*  2368     8 */
	ULONGLONG                  libOsProcessId;       /*  2376     8 */
	string                     libOsProcessExePath;  /*  2384    24 */
	void dk_thread(class dk_thread *);

	void ~dk_thread(class dk_thread *);

	void AllocateSignalStack(class dk_thread *, size_t);


	/* size: 2408, cachelines: 38, members: 22 */
	/* sum members: 2396, holes: 3, sum holes: 12 */
	/* paddings: 1, sum paddings: 2048 */
	/* last cacheline: 40 bytes */
};
class PalObject : public WaitableObject {
public:

	/* class WaitableObject      <ancestor>; */      /*     0    32 */
	enum PalObjectType         m_type;               /*    32     4 */

	/* XXX 4 bytes hole, try to pack */

	union {
		class dk_stream *  stream;               /*    40     8 */
		struct {
			class dk_stream * stream;        /*    40     8 */
			DK_STREAM_EVENT_ID event;        /*    48     4 */
		} stream_event;                          /*    40    16 */
		struct {
			class dk_thread * t;             /*    40     8 */
		} thread;                                /*    40     8 */
		class FileEnum *   fileenum;             /*    40     8 */
		struct {
			class aiocb * aiocb;             /*    40     8 */
			uint32_t   bytes;                /*    48     4 */
			DKSTATUS   returnCode;           /*    52     4 */
		} asyncio;                               /*    40    16 */
		struct {
			bool       IsSignaled;           /*    40     1 */

			/* XXX 3 bytes hole, try to pack */

			DK_ASYNC_RESULTS results;        /*    44     8 */
		} kaio;                                  /*    40    12 */
		struct {
			bool       IsSignaled;           /*    40     1 */

			/* XXX 3 bytes hole, try to pack */

			DKSTATUS   returnCode;           /*    44     4 */
		} odbcrequest;                           /*    40     8 */
		class SocketIoControlBlock * sockCommand; /*    40     8 */
	} x;                                             /*    40    16 */
	union {
		class dk_stream *          stream;               /*     0     8 */
		struct {
			class dk_stream *  stream;               /*     0     8 */
			DK_STREAM_EVENT_ID event;                /*     8     4 */
		} stream_event;                                  /*     0    16 */
		struct {
			class dk_thread *  t;                    /*     0     8 */
		} thread;                                        /*     0     8 */
		class FileEnum *           fileenum;             /*     0     8 */
		struct {
			class aiocb *      aiocb;                /*     0     8 */
			uint32_t           bytes;                /*     8     4 */
			DKSTATUS           returnCode;           /*    12     4 */
		} asyncio;                                       /*     0    16 */
		struct {
			bool               IsSignaled;           /*     0     1 */

			/* XXX 3 bytes hole, try to pack */

			DK_ASYNC_RESULTS   results;              /*     4     8 */
		} kaio;                                          /*     0    12 */
		struct {
			bool               IsSignaled;           /*     0     1 */

			/* XXX 3 bytes hole, try to pack */

			DKSTATUS           returnCode;           /*     4     4 */
		} odbcrequest;                                   /*     0     8 */
		class SocketIoControlBlock * sockCommand;        /*     0     8 */
	};

protected:

	void PalObject(class PalObject *, enum PalObjectType);

public:

	class PalObject * Create(enum PalObjectType);

	virtual bool IsType(const class PalObject  *, int);

	virtual bool DeliverSignal(class PalObject *, bool);

	virtual bool IsReady(class PalObject *);

	virtual void AssertIsValid(const class PalObject  *);

	virtual void Close(class PalObject *);

	void PalObject(class PalObject *, const class PalObject  &);

	class PalObject & operator=(class PalObject *, const class PalObject  &);

	/* vtable has 5 entries: {
	   [2] = IsType((null)), 
	   [5] = DeliverSignal((null)), 
	   [6] = IsReady((null)), 
	   [3] = AssertIsValid((null)), 
	   [4] = Close((null)), 
	} */
	/* size: 56, cachelines: 1, members: 3 */
	/* sum members: 20, holes: 1, sum holes: 4 */
	/* last cacheline: 56 bytes */

	/* BRAIN FART ALERT! 56 != 20 + 4(holes), diff = 32 */

};
class WaitableObject : public ObjectBase {
public:

	/* class ObjectBase          <ancestor>; */      /*     0    16 */

	/* XXX last struct has 4 bytes of padding */
protected:


	QueueLock                  m_queueLock;          /*    12     4 */
	typedef struct PthreadSpinlock QueueLock;

	WaitInfoQueue              m_waitQueue;          /*    16    16 */
public:

	void Signal(class WaitableObject *);

	virtual bool DeliverSignal(class WaitableObject *, bool) = 0;

	virtual bool IsReady(class WaitableObject *) = 0;

protected:

	void WaitableObject(class WaitableObject *);

	virtual void ~WaitableObject(class WaitableObject *);

	virtual bool ShouldSignalImmediately(class WaitableObject *);

	virtual bool HasWaiters(class WaitableObject *);

	void EnqueueWaiter(class WaitableObject *, class WaitInfo *);

	void PurgeWaiter(class WaitableObject *, class WaitInfo *);

	void SignalObjectLocked(class WaitableObject *, WaitInfoQueue &);

	void SignalOne(class WaitableObject *, WaitInfoQueue &);

	void SignalAll(class WaitableObject *, WaitInfoQueue &);

	void WakeUpAllWaitersInternal(const class WaitableObject  *, WaitInfoQueue &, enum SignalMode);

	QueueLockGuard ObtainLock(class WaitableObject *);

	typedef struct unique_lock<PthreadSpinlock> QueueLockGuard;

	void AbandonOutstandingWaits(class WaitableObject *);

	void WaitableObject(class WaitableObject *, const class WaitableObject  &);

	class WaitableObject & operator=(class WaitableObject *, const class WaitableObject  &);

	/* vtable has 5 entries: {
	   [5] = DeliverSignal((null)), 
	   [6] = IsReady((null)), 
	   [0] = ~WaitableObject((null)), 
	   [7] = ShouldSignalImmediately((null)), 
	   [8] = HasWaiters((null)), 
	} */
	/* size: 32, cachelines: 1, members: 3 */
	/* paddings: 1, sum paddings: 4 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 20 + 0(holes), diff = 12 */

};
class ObjectBase {
	int ()(void) * *           _vptr$ObjectBase;     /*     0     8 */
	struct atomic<int>         m_refCount;           /*     8     4 */
protected:

	void ObjectBase(class ObjectBase *);

	virtual void ~ObjectBase(class ObjectBase *);

public:

	virtual bool IsType(const class ObjectBase  *, int) = 0;

	virtual void AssertIsValid(const class ObjectBase  *);

	virtual void Close(class ObjectBase *) = 0;

	DKHANDLE ToHandle(class ObjectBase *);

	bool HasValidReferenceCount(const class ObjectBase  *);

	void AddReference(class ObjectBase *);

	int ReleaseReference(class ObjectBase *);

	int ReferenceCount(const class ObjectBase  *);

	/* vtable has 4 entries: {
	   [0] = ~ObjectBase((null)), 
	   [2] = IsType((null)), 
	   [3] = AssertIsValid((null)), 
	   [4] = Close((null)), 
	} */
	/* size: 16, cachelines: 1, members: 2 */
	/* padding: 4 */
	/* last cacheline: 16 bytes */
};
class SEList<WaitInfo, 0> {
	class ListBase            m_list;                /*     0    16 */
public:

	void Init(class SEList<WaitInfo, 0> *);

	void Insert(class SEList<WaitInfo, 0> *, class WaitInfo *);

	void Append(class SEList<WaitInfo, 0> *, class WaitInfo *);

	void InsertAfter(class SEList<WaitInfo, 0> *, class WaitInfo *, class WaitInfo *);

	void Delete(class WaitInfo *);

	class WaitInfo * GetNext(const class SEList<WaitInfo, 0>  *, const class WaitInfo  *);

	class WaitInfo * GetPrev(const class SEList<WaitInfo, 0>  *, const class WaitInfo  *);

	class WaitInfo * GetNextElem(const class SEList<WaitInfo, 0>  *, const class WaitInfo  *);

	class WaitInfo * GetPrevElem(const class SEList<WaitInfo, 0>  *, const class WaitInfo  *);

	class WaitInfo * Head(const class SEList<WaitInfo, 0>  *);

	class WaitInfo * Tail(const class SEList<WaitInfo, 0>  *);

	class WaitInfo * RemoveHead(class SEList<WaitInfo, 0> *);

	BOOL IsEmpty(const class SEList<WaitInfo, 0>  *);

	BOOL IsInList(const class SEList<WaitInfo, 0>  *, const class WaitInfo  *);

	void Splice(class SEList<WaitInfo, 0> *, class SEList<WaitInfo, 0> &);

	void SpliceAt(class SEList<WaitInfo, 0> *, class WaitInfo *, class SEList<WaitInfo, 0> &);

	void MoveTo(class SEList<WaitInfo, 0> *, class WaitInfo *, class SEList<WaitInfo, 0> &);

	UINT GetCount(const class SEList<WaitInfo, 0>  *);

	EnumeratorType begin(class SEList<WaitInfo, 0> *);

	typedef struct SEListEnum<WaitInfo, 0> EnumeratorType;

	EnumeratorType end(class SEList<WaitInfo, 0> *);

	class SEListElem * GetListElem(const class WaitInfo  *);

	class WaitInfo * GetBaseElem(const class SEListElem  *);


	/* size: 16, cachelines: 1, members: 1 */
	/* last cacheline: 16 bytes */
};
class ListBase {
protected:

	class SEListElem          m_anchor;              /*     0    16 */
public:

	void Init(class ListBase *);

	void Insert(class ListBase *, class SEListElem *);

	void Append(class ListBase *, class SEListElem *);

	void InsertAfter(class ListBase *, class SEListElem *, class SEListElem *);

	void Delete(class SEListElem *);

	class SEListElem * GetNext(const class ListBase  *, const class SEListElem  *);

	class SEListElem * GetPrev(const class ListBase  *, const class SEListElem  *);

	class SEListElem * Head(const class ListBase  *);

	class SEListElem * Tail(const class ListBase  *);

	BOOL IsInList(const class ListBase  *, const class SEListElem  *);

	void ListBase(class ListBase *);

	BOOL IsEmpty(const class ListBase  *);

	void Splice(class ListBase *, class ListBase &);

	void SpliceAt(class ListBase *, class SEListElem *, class ListBase &);

	void MoveTo(class ListBase *, class SEListElem *, class ListBase &);


	/* size: 16, cachelines: 1, members: 1 */
	/* last cacheline: 16 bytes */
};
class SEListElem {
	class SEListElem *         m_prev;               /*     0     8 */
	class SEListElem *         m_next;               /*     8     8 */
public:

	void SEListElem(class SEListElem *);

	void Init(class SEListElem *);

	bool IsInList(const class SEListElem  *);

	bool CheckLinks(const class SEListElem  *);


	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
class WaitInfo : WaitInfoElem {
	/* WaitInfoElem               <ancestor>; */     /*     0    16 */
	class WaitContextInterface * m_context;          /*    16     8 */
	class WaitableObject *     m_parentObject;       /*    24     8 */
public:

	void WaitInfo(class WaitInfo *);

	void ~WaitInfo(class WaitInfo *);

	void Initialize(class WaitInfo *, class WaitContextInterface *, class WaitableObject *);

	void Reset(class WaitInfo *);

	bool TrySignal(class WaitInfo *);

	void WakeUp(class WaitInfo *, enum SignalMode);

	void WaitInfo(class WaitInfo *, const class WaitInfo  &);

	class WaitInfo & operator=(class WaitInfo *, const class WaitInfo  &);


	/* size: 32, cachelines: 1, members: 3 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 16 + 0(holes), diff = 16 */

};
class WaitContextInterface {
	int ()(void) * *           _vptr$WaitContextInterface; /*     0     8 */
public:

	virtual void ~WaitContextInterface(class WaitContextInterface *) = 0;

	virtual class AbiStatus WaitForSignal(class WaitContextInterface *, ULONGconst, const DKHANDLE  *, PLONG64, PULONG) = 0;

	virtual bool TrySignal(class WaitContextInterface *, class WaitableObject *) = 0;

	virtual void WakeUp(class WaitContextInterface *, enum SignalMode, class WaitableObject *) = 0;

	class WaitContextInterface & GetDefault(void);

	/* vtable has 4 entries: {
	   [0] = ~WaitContextInterface((null)), 
	   [2] = WaitForSignal((null)), 
	   [3] = TrySignal((null)), 
	   [4] = WakeUp((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct dk_stream {
	struct SSListEntry         link;                 /*     0     8 */
	enum PalStreamType         type;                 /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	class PalObject *          events[0];            /*    16     0 */

	/* XXX 64 bytes hole, try to pack */

	/* --- cacheline 1 boundary (64 bytes) was 16 bytes ago --- */
	bool                       event_states[0];      /*    80     0 */

	/* XXX 8 bytes hole, try to pack */

	union {
		struct {
			bool       isSandboxFile;        /*    88     1 */
			bool       isBinaryLoadWhitelisted; /*    89     1 */

			/* XXX 6 bytes hole, try to pack */

			class shared_ptr<VfsStream> streamObject; /*    96    16 */
		} vfs;                                   /*    88    24 */
		class unique_ptr<ProtectDataStream, std::__1::default_delete<ProtectDataStream> > protectData; /*    88     8 */
		aio_context_t *    kernelAioContext;     /*    88     8 */
		class unique_ptr<CryptCommonStream, std::__1::default_delete<CryptCommonStream> > cryptCommonStream; /*    88     8 */
		class unique_ptr<StreamObject, std::__1::default_delete<StreamObject> > stream; /*    88     8 */
	} x;                                             /*    88    24 */
	union {
		struct {
			bool               isSandboxFile;        /*     0     1 */
			bool               isBinaryLoadWhitelisted; /*     1     1 */

			/* XXX 6 bytes hole, try to pack */

			class shared_ptr<VfsStream> streamObject; /*     8    16 */
		} vfs;                                           /*     0    24 */
		class unique_ptr<ProtectDataStream, std::__1::default_delete<ProtectDataStream> > protectData; /*     0     8 */
		aio_context_t *            kernelAioContext;     /*     0     8 */
		class unique_ptr<CryptCommonStream, std::__1::default_delete<CryptCommonStream> > cryptCommonStream; /*     0     8 */
		class unique_ptr<StreamObject, std::__1::default_delete<StreamObject> > stream; /*     0     8 */
	};


	/* size: 112, cachelines: 2, members: 5 */
	/* sum members: 36, holes: 3, sum holes: 76 */
	/* last cacheline: 48 bytes */
};
struct SSListEntry {
	class SSListEntry *        m_Next;               /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
class ProtectDataStream : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	static intconst                   s_machineKeyIterations = 10000; /*     0     0 */
	static stringconst                s_machineKeyFilename /*     0     0 */
	class unique_ptr<unsigned char [], std::__1::default_delete<unsigned char []> > m_key; /*     8     8 */
	EVP_CIPHER_CTX *           m_keyCtx;             /*    16     8 */
	void ProtectDataStream(class ProtectDataStream *);

	virtual void ~ProtectDataStream(class ProtectDataStream *);

	virtual class AbiStatus Open(class ProtectDataStream *);

	virtual class AbiStatus Read(class ProtectDataStream *, ULONG64, ULONG, PVOID, PDKHANDLE);

	virtual class AbiStatus Write(class ProtectDataStream *, ULONG64, ULONG, const void  *, PDKHANDLE);

	class AbiStatus Encrypt(class ProtectDataStream *, void *, int, void *, int *);

	class AbiStatus Decrypt(class ProtectDataStream *, void *, int, void *, int *);

	int GetMaxEncryptionSize(int);

	int GetMaxDecryptionSize(int);

	virtual class AbiStatus Close(class ProtectDataStream *);

	class AbiStatus InitializeKeyFile(void);

	void ClearKeyInitializedValueForTesting(void);

	class AbiStatus GenerateKey(class shared_ptr<Directory> &);

	class AbiStatus CreateFileAndWriteKey(class shared_ptr<Directory> &, unsigned char *, int);

	class AbiStatus ReadKey(class ProtectDataStream *, class shared_ptr<File> &);

	/* vtable has 5 entries: {
	   [0] = ~ProtectDataStream((null)), 
	   [8] = Open((null)), 
	   [0] = Read((null)), 
	   [1] = Write((null)), 
	   [9] = Close((null)), 
	} */
	/* size: 24, cachelines: 1, members: 3, static members: 2 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 24 != 16 + 0(holes), diff = 8 */

};
class StreamObject {
	int ()(void) * *           _vptr$StreamObject;   /*     0     8 */
public:

	virtual class AbiStatus Read(class StreamObject *, ULONG64, ULONG, PVOID, PDKHANDLE);

	virtual class AbiStatus Write(class StreamObject *, ULONG64, ULONG, const void  *, PDKHANDLE);

	virtual class AbiStatus QueryAttributes(class StreamObject *, PDK_STREAM_ATTRIBUTES_V1, PUNICODE_STRING, PULONG);

	virtual class AbiStatus Delete(class StreamObject *);

	virtual class AbiStatus Flush(class StreamObject *);

	virtual class AbiStatus SetLength(class StreamObject *, ULONG64const);

	virtual class AbiStatus Rename(class StreamObject *, const UNICODE_STRING  *);

	virtual class AbiStatus EnumerateChildren(class StreamObject *, PDKHANDLE, PUNICODE_STRING);

	virtual class AbiStatus Open(class StreamObject *);

	virtual class AbiStatus Close(class StreamObject *);

	virtual class AbiStatus Control(class StreamObject *, class dk_stream * *, int, PVOID, SIZE_T, PVOID, SIZE_T, PULONG);

	void StreamObject(class StreamObject *);

	virtual void ~StreamObject(class StreamObject *);

	/* vtable has 12 entries: {
	   [0] = Read((null)), 
	   [1] = Write((null)), 
	   [2] = QueryAttributes((null)), 
	   [3] = Delete((null)), 
	   [4] = Flush((null)), 
	   [5] = SetLength((null)), 
	   [6] = Rename((null)), 
	   [7] = EnumerateChildren((null)), 
	   [8] = Open((null)), 
	   [9] = Close((null)), 
	   [10] = Control((null)), 
	   [0] = ~StreamObject((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct _Stream_DK_STREAM_ATTRIBUTES_v1 {
	DK_STREAM_TYPE_FLAGS       Flags;                /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	LONG64                     CreationTime;         /*     8     8 */
	LONG64                     LastWriteTime;        /*    16     8 */
	LONG64                     FileAllocationSize;   /*    24     8 */
	LONG64                     FileLength;           /*    32     8 */
	LONG64                     TotalDirectorySize;   /*    40     8 */
	LONG64                     AvailableDirectorySize; /*    48     8 */
	ULONG                      LogicalBlockSize;     /*    56     4 */
	ULONG                      PhysicalBlockSize;    /*    60     4 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	ULONG                      UniqueIdLength;       /*    64     4 */

	/* XXX 4 bytes hole, try to pack */

	M128                       UniqueId;             /*    72    16 */

	/* size: 88, cachelines: 2, members: 11 */
	/* sum members: 80, holes: 2, sum holes: 8 */
	/* last cacheline: 24 bytes */
};
class CryptCommonStream : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	void CryptCommonStream(class CryptCommonStream *);

	virtual class AbiStatus Read(class CryptCommonStream *, ULONG64, ULONG, PVOID, PDKHANDLE);

	class AbiStatus InitAlgorithm(class CryptCommonStream *, class CryptAlgHandleParams *);

	class AbiStatus GenRandomNumber(class CryptCommonStream *, class GenRandomParams *);

	class AbiStatus CreateSelfSignCertificate(class CryptCommonStream *, class CreateSelfSignCertParams *);

	class AbiStatus FreeCertBuffer(class CryptCommonStream *, class FreeCertBufferParams *);

	class AbiStatus SetProperty(class CryptCommonStream *, class CryptAlgPropertyParams *);

	/* vtable has 1 entries: {
	   [0] = Read((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 8 != 0 + 0(holes), diff = 8 */

};
class CryptAlgHandleParams : public CryptCommonParams {
public:

	/* class CryptCommonParams   <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	NTSTATUS_ABI *             returnValue;          /*     8     8 */
	class AlgHandle *          pAlgHandle;           /*    16     8 */
	void CryptAlgHandleParams(class CryptAlgHandleParams *, NTSTATUS_ABI *, class AlgHandle *);


	/* size: 24, cachelines: 1, members: 3 */
	/* sum members: 16, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 24 != 16 + 4(holes), diff = 4 */

};
class CryptCommonParams {
	enum CRYPT_COMMON_OPERATION ccOperation;         /*     0     4 */
public:

	void CryptCommonParams(class CryptCommonParams *, enum CRYPT_COMMON_OPERATION);

	enum CRYPT_COMMON_OPERATION GetOperationType(class CryptCommonParams *);


	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
class AlgHandle : public CryptHandle {
public:

	/* class CryptHandle         <ancestor>; */      /*     0     8 */
	enum CRYPT_ALG_TYPE        algId;                /*     8     4 */
	int                        blockLen;             /*    12     4 */
	int                        algLen;               /*    16     4 */

	/* XXX 4 bytes hole, try to pack */

	const void  *              hAlg;                 /*    24     8 */
	void AlgHandle(class AlgHandle *, enum CRYPT_ALG_TYPE);

	void SetParams(class AlgHandle *, enum CRYPT_ALG_TYPE, int, int, const void  *);


	/* size: 32, cachelines: 1, members: 5 */
	/* sum members: 20, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 20 + 4(holes), diff = 8 */

};
class CryptHandle {
	DWORDconst                 m_HandleMagic;        /*     0     4 */
	enum CRYPT_HANDLE_TYPE     cryptHandleType;      /*     4     4 */
public:

	void CryptHandle(class CryptHandle *, enum CRYPT_HANDLE_TYPE);

	enum CRYPT_HANDLE_TYPE GetHandleType(class CryptHandle *);

	bool IsValid(const class CryptHandle  *);


	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
class GenRandomParams : public CryptCommonParams {
public:

	/* class CryptCommonParams   <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	NTSTATUS_ABI *             returnValue;          /*     8     8 */
	void *                     pBuffer;              /*    16     8 */
	ULONG                      cbSize;               /*    24     4 */
	void GenRandomParams(class GenRandomParams *, NTSTATUS_ABI *, void *, ULONG);


	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 20, holes: 1, sum holes: 4 */
	/* padding: 4 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 20 + 4(holes), diff = 8 */

};
class CreateSelfSignCertParams : public CryptCommonParams {
public:

	/* class CryptCommonParams   <ancestor>; */      /*     0     4 */
	DWORD                      returnValue;          /*     4     4 */
	const char  *              cnName;               /*     8     8 */
	void *                     rsa;                  /*    16     8 */
	PCERT_CONTEXT_ABI          pCertContext;         /*    24     8 */
	time_t *                   startTime;            /*    32     8 */
	time_t *                   endTime;              /*    40     8 */
	void CreateSelfSignCertParams(class CreateSelfSignCertParams *, const char  *, void *, PCERT_CONTEXT_ABI, time_t *, time_t *);


	/* size: 48, cachelines: 1, members: 7 */
	/* last cacheline: 48 bytes */

	/* BRAIN FART ALERT! 48 != 44 + 0(holes), diff = 4 */

};
struct CERT_CONTEXT_ABI {
	DWORD                      dwCertEncodingType;   /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	BYTE *                     pbCertEncoded;        /*     8     8 */
	DWORD                      cbCertEncoded;        /*    16     4 */

	/* size: 24, cachelines: 1, members: 3 */
	/* sum members: 16, holes: 1, sum holes: 4 */
	/* padding: 4 */
	/* last cacheline: 24 bytes */
};
class FreeCertBufferParams : public CryptCommonParams {
public:

	/* class CryptCommonParams   <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	PCERT_CONTEXT_ABI          pCertContext;         /*     8     8 */
	void FreeCertBufferParams(class FreeCertBufferParams *, PCERT_CONTEXT_ABI);


	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 8, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */

	/* BRAIN FART ALERT! 16 != 8 + 4(holes), diff = 4 */

};
class CryptAlgPropertyParams : public CryptCommonParams {
public:

	/* class CryptCommonParams   <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	NTSTATUS_ABI *             returnValue;          /*     8     8 */
	class AlgHandle *          pAlgHandle;           /*    16     8 */
	enum CRYPT_PROP_TYPE       propertyId;           /*    24     4 */
	enum CRYPT_PROP_VALUE      propertyValue;        /*    28     4 */
	void CryptAlgPropertyParams(class CryptAlgPropertyParams *, NTSTATUS_ABI *, class AlgHandle *, enum CRYPT_PROP_TYPE, enum CRYPT_PROP_VALUE);


	/* size: 32, cachelines: 1, members: 5 */
	/* sum members: 24, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 4(holes), diff = 4 */

};
struct FileEnum {
	class unique_ptr<std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::default_delete<std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > > directoryChildren; /*     0     8 */
	iterator                   directoryIterator;    /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct aiocb {
	int                        aio_fildes;           /*     0     4 */
	int                        aio_lio_opcode;       /*     4     4 */
	int                        aio_reqprio;          /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	volatile void  *           aio_buf;              /*    16     8 */
	size_t                     aio_nbytes;           /*    24     8 */
	struct sigevent            aio_sigevent;         /*    32    64 */
	/* --- cacheline 1 boundary (64 bytes) was 32 bytes ago --- */
	class aiocb *              __next_prio;          /*    96     8 */
	int                        __abs_prio;           /*   104     4 */
	int                        __policy;             /*   108     4 */
	int                        __error_code;         /*   112     4 */

	/* XXX 4 bytes hole, try to pack */

	__ssize_t                  __return_value;       /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	__off_t                    aio_offset;           /*   128     8 */
	char                       __pad[0];             /*   136     0 */
	char                       __glibc_reserved[0];  /*   136     0 */

	/* size: 168, cachelines: 3, members: 14 */
	/* sum members: 128, holes: 2, sum holes: 8 */
	/* padding: 32 */
	/* last cacheline: 40 bytes */
};
struct sigevent {
	sigval_t                   sigev_value;          /*     0     8 */
	int                        sigev_signo;          /*     8     4 */
	int                        sigev_notify;         /*    12     4 */
	union {
		int                _pad[0];              /*    16     0 */
		__pid_t            _tid;                 /*    16     4 */
		struct {
			void       (*_function)(sigval_t); /*    16     8 */
			pthread_attr_t * _attribute;     /*    24     8 */
		} _sigev_thread;                         /*    16    16 */
	} _sigev_un;                                     /*    16    48 */
	union {
		int                        _pad[0];              /*     0     0 */
		__pid_t                    _tid;                 /*     0     4 */
		struct {
			void               (*_function)(sigval_t); /*     0     8 */
			pthread_attr_t *   _attribute;           /*     8     8 */
		} _sigev_thread;                                 /*     0    16 */
	};


	/* size: 64, cachelines: 1, members: 4 */
};
class SocketIoControlBlock : SocketIoControlBlockElem {
	/* SocketIoControlBlockElem   <ancestor>; */     /*     0    16 */
public:

	class SEListElem          m_link;                /*    16    16 */
	int                        m_fd;                 /*    32     4 */
	int                        m_currentBuffer;      /*    36     4 */
	int                        m_numBuffers;         /*    40     4 */
	ULONG                      m_bytesTransferred;   /*    44     4 */
	size_t                     m_bytesAvailable;     /*    48     8 */
	PDK_ASYNC_RESULTS_LINKED   m_asyncResult;        /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	class AbiStatus           m_status;              /*    64    16 */

	/* XXX last struct has 2 bytes of padding */

	struct iovec               m_buffers[0];         /*    80     0 */
	void SocketIoControlBlock(class SocketIoControlBlock *);

	void SocketIoControlBlock(class SocketIoControlBlock *, int, ULONG, class DK_NETWORK_BUFFER *, PDK_ASYNC_RESULTS_LINKED);

	void ~SocketIoControlBlock(class SocketIoControlBlock *);

	class SocketIoControlBlock & operator=(class SocketIoControlBlock *, const class SocketIoControlBlock  &);

	void SocketIoControlBlock(class SocketIoControlBlock *, const class SocketIoControlBlock  &);

	void Send(class SocketIoControlBlock *, bool);

	void Receive(class SocketIoControlBlock *);

	class AbiStatus GetStatus(class SocketIoControlBlock *);

protected:

	ULONG GetBytesTransferred(class SocketIoControlBlock *);

	PDK_ASYNC_RESULTS_LINKED GetAsyncResult(class SocketIoControlBlock *);

	void Cancel(class SocketIoControlBlock *);


	/* size: 128, cachelines: 2, members: 10 */
	/* padding: 48 */
	/* paddings: 1, sum paddings: 2 */

	/* BRAIN FART ALERT! 128 != 64 + 0(holes), diff = 64 */

};
struct DK_NETWORK_BUFFER {
	ULONG                      Length;               /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	PCHAR                      Buffer;               /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
struct dk_thread_thunkinfo {
	uintptr_t                  pal_stack_top;        /*     0     8 */
	uintptr_t                  pal_stack_base;       /*     8     8 */
	uintptr_t                  pal_stack_limit;      /*    16     8 */

	/* size: 24, cachelines: 1, members: 3 */
	/* last cacheline: 24 bytes */
};
class ThreadWaitContext : public WaitContextInterface {
public:

	/* class WaitContextInterface <ancestor>; */     /*     0     8 */
	class condition_variable  m_conditionVariable;   /*     8    48 */
	class mutex               m_mutex;               /*    56    40 */
	/* --- cacheline 1 boundary (64 bytes) was 32 bytes ago --- */
	class WaitableObject *     m_signaler;           /*    96     8 */
	enum State                 m_state;              /*   104     4 */

	/* XXX 4 bytes hole, try to pack */
	enum State {
		Created = 0,
		Waiting = 1,
		PendingWakeup = 2,
		Signaled = 3,
		Abandoned = 4,
		TimeOut = 5,
		Reset = 6,
	};


	class WaitInfo            m_waitInfoArray[0];    /*   112     0 */
	virtual void ~ThreadWaitContext(class ThreadWaitContext *);

	void ThreadWaitContext(class ThreadWaitContext *);

	virtual class AbiStatus WaitForSignal(class ThreadWaitContext *, ULONGconst, const DKHANDLE  *, PLONG64, PULONG);

	virtual bool TrySignal(class ThreadWaitContext *, class WaitableObject *);

	virtual void WakeUp(class ThreadWaitContext *, enum SignalMode, class WaitableObject *);

	ULONG RegisterWaitInfos(class ThreadWaitContext *, ULONGconst, const DKHANDLE  *);

	void Wait(class ThreadWaitContext *, PLONG64);

	void ConditionWait(class ThreadWaitContext *, class unique_lock<std::__1::mutex> &);

	enum cv_status ConditionWaitUntil(class ThreadWaitContext *, class unique_lock<std::__1::mutex> &, time_point);

	class AbiStatus ProcessOutcome(class ThreadWaitContext *, const DKHANDLE  *, PULONG, ULONGconst);

	bool IsStateSignaled(const class ThreadWaitContext  *);

	void TransitionState(class ThreadWaitContext *, enum Stateconst);

	void Reset(class ThreadWaitContext *);

	void ThreadWaitContext(class ThreadWaitContext *, const class ThreadWaitContext  &);

	class ThreadWaitContext & operator=(class ThreadWaitContext *, const class ThreadWaitContext  &);

	/* vtable has 4 entries: {
	   [0] = ~ThreadWaitContext((null)), 
	   [2] = WaitForSignal((null)), 
	   [3] = TrySignal((null)), 
	   [4] = WakeUp((null)), 
	} */
	/* size: 2160, cachelines: 34, members: 6 */
	/* sum members: 100, holes: 1, sum holes: 4 */
	/* padding: 2048 */
	/* last cacheline: 48 bytes */

	/* BRAIN FART ALERT! 2160 != 100 + 4(holes), diff = 2056 */

};
struct __jmp_buf_tag {
	__jmp_buf                  __jmpbuf;             /*     0     0 */

	/* XXX 64 bytes hole, try to pack */

	/* --- cacheline 1 boundary (64 bytes) --- */
	int                        __mask_was_saved;     /*    64     4 */

	/* XXX 4 bytes hole, try to pack */

	__sigset_t                 __saved_mask;         /*    72   128 */

	/* size: 200, cachelines: 4, members: 3 */
	/* sum members: 132, holes: 2, sum holes: 68 */
	/* last cacheline: 8 bytes */
};
class PalEvent : public WaitableObject {
public:

	/* class WaitableObject      <ancestor>; */      /*     0    32 */
	static intconst                   sm_InstanceType /*     0     0 */
	boolconst                  m_autoReset;          /*    32     1 */
	struct atomic<bool>        m_state;              /*    33     1 */
	virtual bool IsType(const class PalEvent  *, int);

	virtual bool DeliverSignal(class PalEvent *, bool);

	virtual bool IsReady(class PalEvent *);

	virtual void Close(class PalEvent *);

	bool Set(class PalEvent *);

	void Clear(class PalEvent *);

	bool Peek(class PalEvent *);

protected:

	class PalEvent * Create(bool, bool);

	void PalEvent(class PalEvent *, bool, bool);

	void PalEvent(class PalEvent *);

	void PalEvent(class PalEvent *, const class PalEvent  &);

	class PalEvent & operator=(class PalEvent *, const class PalEvent  &);

	/* vtable has 4 entries: {
	   [2] = IsType((null)), 
	   [5] = DeliverSignal((null)), 
	   [6] = IsReady((null)), 
	   [4] = Close((null)), 
	} */
	/* size: 40, cachelines: 1, members: 3, static members: 1 */
	/* padding: 6 */
	/* last cacheline: 40 bytes */

	/* BRAIN FART ALERT! 40 != 2 + 0(holes), diff = 38 */

};
struct ucontext {
	long unsigned int          uc_flags;             /*     0     8 */
	class ucontext *           uc_link;              /*     8     8 */
	stack_t                    uc_stack;             /*    16    24 */
	mcontext_t                 uc_mcontext;          /*    40   256 */
	/* --- cacheline 4 boundary (256 bytes) was 40 bytes ago --- */
	__sigset_t                 uc_sigmask;           /*   296   128 */
	/* --- cacheline 6 boundary (384 bytes) was 40 bytes ago --- */
	struct _libc_fpstate       __fpregs_mem;         /*   424   512 */

	/* XXX last struct has 96 bytes of padding */

	/* size: 936, cachelines: 15, members: 6 */
	/* paddings: 1, sum paddings: 96 */
	/* last cacheline: 40 bytes */
};
struct sigaltstack {
	void *                     ss_sp;                /*     0     8 */
	int                        ss_flags;             /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	size_t                     ss_size;              /*    16     8 */

	/* size: 24, cachelines: 1, members: 3 */
	/* sum members: 20, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */
};
struct _libc_fpstate {
	__uint16_t                 cwd;                  /*     0     2 */
	__uint16_t                 swd;                  /*     2     2 */
	__uint16_t                 ftw;                  /*     4     2 */
	__uint16_t                 fop;                  /*     6     2 */
	__uint64_t                 rip;                  /*     8     8 */
	__uint64_t                 rdp;                  /*    16     8 */
	__uint32_t                 mxcsr;                /*    24     4 */
	__uint32_t                 mxcr_mask;            /*    28     4 */
	struct _libc_fpxreg        _st[0];               /*    32     0 */

	/* XXX 128 bytes hole, try to pack */

	/* --- cacheline 2 boundary (128 bytes) was 32 bytes ago --- */
	struct _libc_xmmreg        _xmm[0];              /*   160     0 */

	/* XXX 256 bytes hole, try to pack */

	/* --- cacheline 6 boundary (384 bytes) was 32 bytes ago --- */
	__uint32_t                 padding[0];           /*   416     0 */

	/* size: 512, cachelines: 8, members: 11 */
	/* sum members: 32, holes: 2, sum holes: 384 */
	/* padding: 96 */
};
struct _libc_fpxreg {
	unsigned short             significand[0];       /*     0     0 */

	/* XXX 8 bytes hole, try to pack */

	unsigned short             exponent;             /*     8     2 */
	unsigned short             padding[0];           /*    10     0 */

	/* size: 16, cachelines: 1, members: 3 */
	/* sum members: 2, holes: 1, sum holes: 8 */
	/* padding: 6 */
	/* last cacheline: 16 bytes */
};
struct _libc_xmmreg {
	__uint32_t                 element[0];           /*     0     0 */

	/* size: 16, cachelines: 1, members: 1 */
	/* padding: 16 */
	/* last cacheline: 16 bytes */
};
struct ExRecordTuple {
	DK_EXCEPTION               Exception;            /*     0    64 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	DK_MACHINE_CONTEXT         MachineContext;       /*    64   576 */

	/* size: 640, cachelines: 10, members: 2 */
};
struct DK_KERNEL_IO {
	struct iocb                iocb;                 /*     0    64 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	void *                     unalignedBuffer;      /*    64     8 */

	/* size: 72, cachelines: 2, members: 2 */
	/* last cacheline: 8 bytes */
};
class SocketStream : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	struct SSListEntry         m_link;               /*     8     8 */
	DK_SOCKET_PROTOCOL         m_protocol;           /*    16     4 */
	union {
		struct sockaddr_in ipv4;                 /*    20    16 */
		struct sockaddr_in6 ipv6;                /*    20    28 */
	} m_address;                                     /*    20    28 */
	union {
		struct sockaddr_in         ipv4;                 /*     0    16 */
		struct sockaddr_in6        ipv6;                 /*     0    28 */
	};

	SocketIoControlBlockList   m_sendBlocks;         /*    48    16 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	SocketIoControlBlockList   m_receiveBlocks;      /*    64    16 */
	class mutex               m_sendBlocksMutex;     /*    80    40 */
	class mutex               m_receiveBlocksMutex;  /*   120    40 */
	/* --- cacheline 2 boundary (128 bytes) was 32 bytes ago --- */
	enum SocketStreamState     m_state;              /*   160     4 */
	int                        m_fd;                 /*   164     4 */
	bool                       m_disconnected;       /*   168     1 */

	/* XXX 7 bytes hole, try to pack */

	class RWLock              m_sockStateRwLock;     /*   176   128 */
	/* --- cacheline 4 boundary (256 bytes) was 48 bytes ago --- */
	int                        m_epollMask;          /*   304     4 */
	bool                       m_useDebugWritev;     /*   308     1 */

	/* XXX 3 bytes hole, try to pack */

	PVOID                      m_debugLibOsSocket;   /*   312     8 */
	/* --- cacheline 5 boundary (320 bytes) --- */
	class dk_stream *          m_stream;             /*   320     8 */
	PVOID                      m_libOsSocket;        /*   328     8 */
	class AutoRefc<IoCompletionPort> m_ioPort;       /*   336     8 */
	class AutoRefc<IoCompletionPort> m_defaultPort;  /*   344     8 */
	struct sockaddr_storage    m_localAddress;       /*   352   128 */
	/* --- cacheline 7 boundary (448 bytes) was 32 bytes ago --- */
	struct sockaddr_storage    m_remoteAddress;      /*   480   128 */
	/* --- cacheline 9 boundary (576 bytes) was 32 bytes ago --- */
	bool                       m_isBound;            /*   608     1 */
	bool                       m_isNonBlocking;      /*   609     1 */

	/* XXX 2 bytes hole, try to pack */

	DK_STREAM_CONTROL_IP_ATTRIBS m_bindAttributes;   /*   612    28 */
	/* --- cacheline 10 boundary (640 bytes) --- */
	int                        m_sendBufferSize;     /*   640     4 */
	void SocketStream(class SocketStream *, class dk_stream *, DK_SOCKET_PROTOCOL);

	virtual void ~SocketStream(class SocketStream *);

	virtual class AbiStatus Read(class SocketStream *, ULONG64, ULONG, PVOID, PDKHANDLE);

	virtual class AbiStatus Write(class SocketStream *, ULONG64, ULONG, const void  *, PDKHANDLE);

	virtual class AbiStatus Open(class SocketStream *);

	virtual class AbiStatus Close(class SocketStream *);

	virtual class AbiStatus Control(class SocketStream *, class dk_stream * *, int, PVOID, SIZE_T, PVOID, SIZE_T, PULONG);

	void ClearSiocbQueue(class SocketStream *, SocketIoControlBlockList &, class SocketAsyncResults *);

	void HandleEpollEvent(class SocketStream *, uint32_t, class SocketAsyncResults *);

	void Clean(class SocketStream *, class SocketAsyncResults *);

	void EnqueueForDeallocation(class SocketStream *);

	class AutoRefc<IoCompletionPort> GetDefaultIoPort(class SocketStream *);

	void RearmEvents(class SocketStream *);

protected:

	class dk_stream * GetStream(class SocketStream *);

	class AbiStatus Init(class SocketStream *);

	class AbiStatus CreateSocketFd(class SocketStream *);

	class AbiStatus Bind(class SocketStream *, PDK_STREAM_CONTROL_IP_ATTRIBS);

	class AbiStatus Listen(class SocketStream *);

	class AbiStatus InitiateConnect(class SocketStream *, PDK_STREAM_CONTROL_IP_ATTRIBS);

	void FinalizeConnect(class SocketStream *);

	class AbiStatus Accept(class SocketStream *, PDK_STREAM_CONTROL_IP_ATTRIBS, class dk_stream * *);

	class AbiStatus AcceptInternal(class SocketStream *, DK_SOCKET_PROTOCOL, class dk_stream *, class SocketStream * *);

	void ProcessSendQueue(class SocketStream *, class SocketAsyncResults *);

	void ProcessReceiveQueue(class SocketStream *, class SocketAsyncResults *);

	void RearmEventsNoLock(class SocketStream *);

	class AbiStatus GetAddress(class SocketStream *, PDK_STREAM_CONTROL_IP_ATTRIBS);

	class AbiStatus GetLocalAddress(class SocketStream *, PDK_STREAM_CONTROL_IP_ATTRIBS);

	void CancelPendingIOs(class SocketStream *, class SocketAsyncResults *);

	void Disconnect(class SocketStream *, class SocketAsyncResults *);

	class AbiStatus RegisterIoCompletionPort(class SocketStream *, class AutoRefc<IoCompletionPort> &);

	void SendEvent(class SocketStream *, int, DKSTATUS);

	void SendEventNoLock(class SocketStream *, int, DKSTATUS);

	void SendEventNoLockUnchecked(class SocketStream *, int, DKSTATUS);

	class AbiStatus RegisterForEvents(class SocketStream *, PDK_SOCKET_REGISTRATION_PARAMS);

	class AbiStatus SetOption(class SocketStream *, int, int, void *, SIZE_T);

	class AbiStatus GetOption(class SocketStream *, int, int, void *, SIZE_T);

	class AbiStatus ConfigureEpoll(class SocketStream *, int, uint32_t, PVOID);

	PDK_ASYNC_RESULTS_LINKED CancelIo(class SocketStream *, PVOID *, DK_SOCKET_STREAM_CONTROL_OPCODE);

	class AbiStatus GetAddressAndPort(class SocketStream *, string &, int &);

	void ResetFileDescriptor(class SocketStream *, int);

	class AbiStatus GetLocalAddress(class SocketStream *, class sockaddr_storage *);

	class AbiStatus GetAddress(class SocketStream *, class sockaddr_storage *);

	void RecordOperation(class SocketStream *, SocketOperation, class AbiStatus);

	class AbiStatus Rebind(class SocketStream *);

	class AbiStatus SetSendBufferSize(class SocketStream *, int);

	void GetAndSetSendBufferSize(class SocketStream *);

	bool IsDisconnected(class SocketStream *);

	bool IsValidState(class SocketStream *, enum SocketStreamState);

	bool IsBound(class SocketStream *);

	/* vtable has 6 entries: {
	   [0] = ~SocketStream((null)), 
	   [0] = Read((null)), 
	   [1] = Write((null)), 
	   [8] = Open((null)), 
	   [9] = Close((null)), 
	   [10] = Control((null)), 
	} */
	/* size: 648, cachelines: 11, members: 25 */
	/* sum members: 624, holes: 3, sum holes: 12 */
	/* padding: 4 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 648 != 624 + 12(holes), diff = 12 */

};
struct sockaddr_in {
	sa_family_t                sin_family;           /*     0     2 */
	in_port_t                  sin_port;             /*     2     2 */
	struct in_addr             sin_addr;             /*     4     4 */
	unsigned char              sin_zero[0];          /*     8     0 */

	/* size: 16, cachelines: 1, members: 4 */
	/* padding: 8 */
	/* last cacheline: 16 bytes */
};
struct in_addr {
	in_addr_t                  s_addr;               /*     0     4 */

	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
struct sockaddr_in6 {
	sa_family_t                sin6_family;          /*     0     2 */
	in_port_t                  sin6_port;            /*     2     2 */
	uint32_t                   sin6_flowinfo;        /*     4     4 */
	struct in6_addr            sin6_addr;            /*     8    16 */
	uint32_t                   sin6_scope_id;        /*    24     4 */

	/* size: 28, cachelines: 1, members: 5 */
	/* last cacheline: 28 bytes */
};
struct in6_addr {
	union {
		uint8_t            __u6_addr8[0];        /*     0     0 */
		uint16_t           __u6_addr16[0];       /*     0     0 */
		uint32_t           __u6_addr32[0];       /*     0     0 */
	} __in6_u;                                       /*     0    16 */
	union {
		uint8_t                    __u6_addr8[0];        /*     0     0 */
		uint16_t                   __u6_addr16[0];       /*     0     0 */
		uint32_t                   __u6_addr32[0];       /*     0     0 */
	};


	/* size: 16, cachelines: 1, members: 1 */
	/* last cacheline: 16 bytes */
};
class SEList<SocketIoControlBlock, 0> {
	class ListBase            m_list;                /*     0    16 */
public:

	void Init(class SEList<SocketIoControlBlock, 0> *);

	void Insert(class SEList<SocketIoControlBlock, 0> *, class SocketIoControlBlock *);

	void Append(class SEList<SocketIoControlBlock, 0> *, class SocketIoControlBlock *);

	void InsertAfter(class SEList<SocketIoControlBlock, 0> *, class SocketIoControlBlock *, class SocketIoControlBlock *);

	void Delete(class SocketIoControlBlock *);

	class SocketIoControlBlock * GetNext(const class SEList<SocketIoControlBlock, 0>  *, const class SocketIoControlBlock  *);

	class SocketIoControlBlock * GetPrev(const class SEList<SocketIoControlBlock, 0>  *, const class SocketIoControlBlock  *);

	class SocketIoControlBlock * GetNextElem(const class SEList<SocketIoControlBlock, 0>  *, const class SocketIoControlBlock  *);

	class SocketIoControlBlock * GetPrevElem(const class SEList<SocketIoControlBlock, 0>  *, const class SocketIoControlBlock  *);

	class SocketIoControlBlock * Head(const class SEList<SocketIoControlBlock, 0>  *);

	class SocketIoControlBlock * Tail(const class SEList<SocketIoControlBlock, 0>  *);

	class SocketIoControlBlock * RemoveHead(class SEList<SocketIoControlBlock, 0> *);

	BOOL IsEmpty(const class SEList<SocketIoControlBlock, 0>  *);

	BOOL IsInList(const class SEList<SocketIoControlBlock, 0>  *, const class SocketIoControlBlock  *);

	void Splice(class SEList<SocketIoControlBlock, 0> *, class SEList<SocketIoControlBlock, 0> &);

	void SpliceAt(class SEList<SocketIoControlBlock, 0> *, class SocketIoControlBlock *, class SEList<SocketIoControlBlock, 0> &);

	void MoveTo(class SEList<SocketIoControlBlock, 0> *, class SocketIoControlBlock *, class SEList<SocketIoControlBlock, 0> &);

	UINT GetCount(const class SEList<SocketIoControlBlock, 0>  *);

	EnumeratorType begin(class SEList<SocketIoControlBlock, 0> *);

	typedef struct SEListEnum<SocketIoControlBlock, 0> EnumeratorType;

	EnumeratorType end(class SEList<SocketIoControlBlock, 0> *);

	class SEListElem * GetListElem(const class SocketIoControlBlock  *);

	class SocketIoControlBlock * GetBaseElem(const class SEListElem  *);


	/* size: 16, cachelines: 1, members: 1 */
	/* last cacheline: 16 bytes */
};
class AutoRefc<IoCompletionPort> {
	class IoCompletionPort *   m_object;             /*     0     8 */
public:

	void AutoRefc(class AutoRefc<IoCompletionPort> *);

	void AutoRefc(class AutoRefc<IoCompletionPort> *, );

	void AutoRefc(class AutoRefc<IoCompletionPort> *, const class AutoRefc<IoCompletionPort>  &);

	void ~AutoRefc(class AutoRefc<IoCompletionPort> *);

	void operator=(class AutoRefc<IoCompletionPort> *, );

	void operator=(class AutoRefc<IoCompletionPort> *, const class AutoRefc<IoCompletionPort>  &);

	void operator=(class AutoRefc<IoCompletionPort> *, nullptr_t);

	class IoCompletionPort * operator->(class AutoRefc<IoCompletionPort> *);

	const class IoCompletionPort  * operator->(const class AutoRefc<IoCompletionPort>  *);

	void MoveToHandle(class AutoRefc<IoCompletionPort> *, PDKHANDLE);

	void AutoRefc(class AutoRefc<IoCompletionPort> *, class IoCompletionPort *, enum InitializationType);

	class IoCompletionPort * operator&(class AutoRefc<IoCompletionPort> *);


	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
class IoCompletionPort : public PalObject {
public:

	/* class PalObject           <ancestor>; */      /*     0    56 */
	int                        m_epollFd;            /*    56     4 */
	bool                       m_isDefaultPort;      /*    60     1 */

	/* XXX 3 bytes hole, try to pack */

	/* --- cacheline 1 boundary (64 bytes) --- */
	class EventFd             m_eventFd;             /*    64     4 */
	atomic_bool                m_isSet;              /*    68     1 */

	/* XXX 3 bytes hole, try to pack */

	SocketStreamQueue          m_deallocationQueue;  /*    72    16 */
	SocketEventQueue           m_socketEvents;       /*    88    16 */
	class AbiStatus AddDefaultIoCompletionPort(class AutoRefc<IoCompletionPort>);

	void IoCompletionPort(class IoCompletionPort *, bool);

	virtual void ~IoCompletionPort(class IoCompletionPort *);

	class AbiStatus Initialize(class IoCompletionPort *);

	void EnqueueDeallocation(class IoCompletionPort *, class SocketStream *);

	void EnqueueSocketEvents(class IoCompletionPort *, PDK_SOCKET_EVENT_LIST);

	void Wakeup(class IoCompletionPort *);

	void ResetEvent(class IoCompletionPort *);

	class AbiStatus ConfigureEpoll(class IoCompletionPort *, int, int, uint32_t, PVOID);

	void HandleDeallocationQueue(class IoCompletionPort *, class SocketAsyncResults *);

	PDK_SOCKET_EVENT_LIST RetrieveSocketEvents(class IoCompletionPort *);

	int WaitOnEpoll(class IoCompletionPort *, class epoll_event *, int, int);

protected:

	class IoCompletionPort * Create(bool);

	/* vtable has 1 entries: {
	   [0] = ~IoCompletionPort((null)), 
	} */
	/* size: 104, cachelines: 2, members: 7 */
	/* sum members: 42, holes: 2, sum holes: 6 */
	/* last cacheline: 40 bytes */

	/* BRAIN FART ALERT! 104 != 42 + 6(holes), diff = 56 */

};
class EventFd {
	int                        m_Fd;                 /*     0     4 */
public:

	void EventFd(class EventFd *, bool, bool);

	void ~EventFd(class EventFd *);

	void Set(class EventFd *);

	void Reset(class EventFd *);

	int GetFd(class EventFd *);


	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
class QueueWithEvent<SocketStream, 8, EventFd> {
	class EventFd             m_Event;               /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	class Queue<SocketStream, 8> m_Queue;            /*     8     8 */
public:

	void QueueWithEvent(class QueueWithEvent<SocketStream, 8, EventFd> *);

	class EventFd * GetEvent(class QueueWithEvent<SocketStream, 8, EventFd> *);

	bool IsEmpty(const class QueueWithEvent<SocketStream, 8, EventFd>  *);

	void PushOne(class QueueWithEvent<SocketStream, 8, EventFd> *, class SocketStream *);

	SSList PopAll(class QueueWithEvent<SocketStream, 8, EventFd> *);

	typedef SSList SSList;


	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
class Queue<SocketStream, 8> {
	struct atomic<SSListEntry *> m_Head;             /*     0     8 */
public:

	void Queue(class Queue<SocketStream, 8> *);

	bool IsEmpty(const class Queue<SocketStream, 8>  *);

	bool PushOne(class Queue<SocketStream, 8> *, class SocketStream *);

	SSList PopAll(class Queue<SocketStream, 8> *);

	typedef struct SSList<SocketStream, 8> SSList;

	class SSListEntry * CompareExchangeHead(class Queue<SocketStream, 8> *, class SSListEntry *);


	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
class QueueWithEvent<_DK_SOCKET_EVENT_LIST, 16, EventFd> {
	class EventFd             m_Event;               /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	class Queue<_DK_SOCKET_EVENT_LIST, 16> m_Queue;  /*     8     8 */
public:

	void QueueWithEvent(class QueueWithEvent<_DK_SOCKET_EVENT_LIST, 16, EventFd> *);

	class EventFd * GetEvent(class QueueWithEvent<_DK_SOCKET_EVENT_LIST, 16, EventFd> *);

	bool IsEmpty(const class QueueWithEvent<_DK_SOCKET_EVENT_LIST, 16, EventFd>  *);

	void PushOne(class QueueWithEvent<_DK_SOCKET_EVENT_LIST, 16, EventFd> *, class _DK_SOCKET_EVENT_LIST *);

	SSList PopAll(class QueueWithEvent<_DK_SOCKET_EVENT_LIST, 16, EventFd> *);

	typedef SSList SSList;


	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
class Queue<_DK_SOCKET_EVENT_LIST, 16> {
	struct atomic<SSListEntry *> m_Head;             /*     0     8 */
public:

	void Queue(class Queue<_DK_SOCKET_EVENT_LIST, 16> *);

	bool IsEmpty(const class Queue<_DK_SOCKET_EVENT_LIST, 16>  *);

	bool PushOne(class Queue<_DK_SOCKET_EVENT_LIST, 16> *, class _DK_SOCKET_EVENT_LIST *);

	SSList PopAll(class Queue<_DK_SOCKET_EVENT_LIST, 16> *);

	typedef struct SSList<_DK_SOCKET_EVENT_LIST, 16> SSList;

	class SSListEntry * CompareExchangeHead(class Queue<_DK_SOCKET_EVENT_LIST, 16> *, class SSListEntry *);


	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct _DK_SOCKET_EVENT_LIST {
	PVOID                      Socket;               /*     0     8 */
	DK_SOCKET_EVENT            Events;               /*     8     4 */
	LONG                       Status;               /*    12     4 */
	volatile PVOID             Next;                 /*    16     8 */

	/* size: 24, cachelines: 1, members: 4 */
	/* last cacheline: 24 bytes */
};
class SocketAsyncResults {
public:

	PDK_ASYNC_RESULTS_LINKED   head;                 /*     0     8 */
	PDK_ASYNC_RESULTS_LINKED   tail;                 /*     8     8 */
	void PushBack(class SocketAsyncResults *, PDK_ASYNC_RESULTS_LINKED);


	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct epoll_event {
	uint32_t                   events;               /*     0     4 */
	epoll_data_t               data;                 /*     4     8 */

	/* size: 12, cachelines: 1, members: 2 */
	/* last cacheline: 12 bytes */
};
struct sockaddr_storage {
	sa_family_t                ss_family;            /*     0     2 */
	char                       __ss_padding[0];      /*     2     0 */

	/* XXX 118 bytes hole, try to pack */

	/* --- cacheline 1 boundary (64 bytes) was 56 bytes ago --- */
	long unsigned int          __ss_align;           /*   120     8 */

	/* size: 128, cachelines: 2, members: 3 */
	/* sum members: 10, holes: 1, sum holes: 118 */
};
struct _DK_STREAM_CONTROL_IP_ATTRIBS {
	DK_SOCKET_PROTOCOL         Protocol;             /*     0     4 */
	UCHAR                      Address[0];           /*     4     0 */

	/* XXX 16 bytes hole, try to pack */

	USHORT                     Port;                 /*    20     2 */

	/* XXX 2 bytes hole, try to pack */

	ULONG                      ScopeId;              /*    24     4 */

	/* size: 28, cachelines: 1, members: 4 */
	/* sum members: 10, holes: 2, sum holes: 18 */
	/* last cacheline: 28 bytes */
};
struct _DK_SOCKET_REGISTRATION_PARAMS {
	PVOID                      Socket;               /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
class StdioStream : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	int                        m_fileDescriptor;     /*     8     4 */
	void StdioStream(class StdioStream *, int);

	virtual class AbiStatus Read(class StdioStream *, ULONG64, ULONG, PVOID, PDKHANDLE);

	virtual class AbiStatus Write(class StdioStream *, ULONG64, ULONG, const void  *, PDKHANDLE);

	virtual class AbiStatus Open(class StdioStream *);

	virtual class AbiStatus Close(class StdioStream *);

	/* vtable has 4 entries: {
	   [0] = Read((null)), 
	   [1] = Write((null)), 
	   [8] = Open((null)), 
	   [9] = Close((null)), 
	} */
	/* size: 16, cachelines: 1, members: 2 */
	/* padding: 4 */
	/* last cacheline: 16 bytes */

	/* BRAIN FART ALERT! 16 != 4 + 0(holes), diff = 12 */

};
class DnsStream : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	string                     m_hostName;           /*     8    24 */
	void *                     m_dnsData;            /*    32     8 */
	ULONG64                    m_dnsDataLength;      /*    40     8 */
	void DnsStream(class DnsStream *, const char  *);

	virtual void ~DnsStream(class DnsStream *);

	virtual class AbiStatus Open(class DnsStream *);

	virtual class AbiStatus Read(class DnsStream *, ULONG64, ULONG, PVOID, PDKHANDLE);

	virtual class AbiStatus Close(class DnsStream *);

	/* vtable has 4 entries: {
	   [0] = ~DnsStream((null)), 
	   [8] = Open((null)), 
	   [0] = Read((null)), 
	   [9] = Close((null)), 
	} */
	/* size: 48, cachelines: 1, members: 4 */
	/* last cacheline: 48 bytes */

	/* BRAIN FART ALERT! 48 != 40 + 0(holes), diff = 8 */

};
class PamStream : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	virtual class AbiStatus Write(class PamStream *, ULONG64, ULONG, const void  *, PDKHANDLE);

	int PamLoginConversation(int, const class pam_message  * *, class pam_response * *, void *);

	class AbiStatus PamAuthenticateUser(class PamStream *, class PamAuthenticationParams *);

	void PamStream(class PamStream *);

	/* vtable has 1 entries: {
	   [1] = Write((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 8 != 0 + 0(holes), diff = 8 */

};
struct pam_message {
	int                        msg_style;            /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	const char  *              msg;                  /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
struct pam_response {
	char *                     resp;                 /*     0     8 */
	int                        resp_retcode;         /*     8     4 */

	/* size: 16, cachelines: 1, members: 2 */
	/* padding: 4 */
	/* last cacheline: 16 bytes */
};
class PamAuthenticationParams : public PamParams {
public:

	/* class PamParams           <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	NTSTATUS_ABI *             returnValue;          /*     8     8 */
	const char  *              username;             /*    16     8 */
	const char  *              password;             /*    24     8 */
	void PamAuthenticationParams(class PamAuthenticationParams *, NTSTATUS_ABI *, const char  *, const char  *);


	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 24, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 4(holes), diff = 4 */

};
class PamParams {
	enum PAM_OPERATION         pamOperation;         /*     0     4 */
public:

	void PamParams(class PamParams *, enum PAM_OPERATION);

	enum PAM_OPERATION GetOperationType(const class PamParams  *);


	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
class SharedMemory : public File {
public:

	/* class File                <ancestor>; */      /*     0   712 */

	/* XXX last struct has 4 bytes of padding */
	void SharedMemory(class SharedMemory *);

	virtual void ~SharedMemory(class SharedMemory *);

	class SystemStatus Open(class SharedMemory *, const string  &, int, enum ExtraFileFlags, mode_t);

	virtual class SystemStatus Map(class SharedMemory *, void *, size_t, int, int, off_t, void * &, size_t &);

	virtual class SystemStatus Delete(class SharedMemory *);

	virtual class SystemStatus CloseInternal(class SharedMemory *);

	/* vtable has 4 entries: {
	   [0] = ~SharedMemory((null)), 
	   [5] = Map((null)), 
	   [2] = Delete((null)), 
	   [29] = CloseInternal((null)), 
	} */
	/* size: 712, cachelines: 12, members: 1 */
	/* paddings: 1, sum paddings: 4 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 712 != 0 + 0(holes), diff = 712 */

};
class AsymKeyStream : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	void AsymKeyStream(class AsymKeyStream *);

	virtual void ~AsymKeyStream(class AsymKeyStream *);

	virtual class AbiStatus Read(class AsymKeyStream *, ULONG64, ULONG, PVOID, PDKHANDLE);

	class AbiStatus GenRSAKey(class AsymKeyStream *, RSA * *, int);

	class AbiStatus ExportRSAPrivateKey(class AsymKeyStream *, RSA *, BYTE *, ULONG, ULONG *);

	class AbiStatus ExportRSAPublicKey(class AsymKeyStream *, RSA *, BYTE *, ULONG, ULONG *);

	class AbiStatus ImportRSAPrivateKey(class AsymKeyStream *, RSA * *, BYTE *, ULONG, ULONG *);

	class AbiStatus ImportRSAPublicKey(class AsymKeyStream *, RSA * *, BYTE *, ULONG, ULONG *);

	class AbiStatus ImportBCryptRSAPublicKey(class AsymKeyStream *, RSA * *, BYTE *, ULONG, ULONG *);

	class AbiStatus ImportRSAPublicKeyCommon(class AsymKeyStream *, RSA * *, BYTE *, ULONG, BYTE *, ULONG);

	class AbiStatus EncryptDecryptData(class AsymKeyStream *, RSA *, const BYTE  *, DWORD, BYTE *, DWORD, DWORD *, enum PADDING_TYPES, bool);

	class AbiStatus SignHash(class AsymKeyStream *, RSA *, const BYTE  *, int, BYTE *, int, DWORD *, enum CRYPT_ALG_TYPE);

	class AbiStatus VerifySignature(class AsymKeyStream *, RSA *, const BYTE  *, int, const BYTE  *, int, enum CRYPT_ALG_TYPE);

	int ConvertHashAlgoToOpenSSL(class AsymKeyStream *, enum CRYPT_ALG_TYPE);

	/* vtable has 2 entries: {
	   [0] = ~AsymKeyStream((null)), 
	   [0] = Read((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 8 != 0 + 0(holes), diff = 8 */

};
class StreamSemaphore : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	bool                       m_isLoaded;           /*     8     1 */

	/* XXX 7 bytes hole, try to pack */

	string                     m_semaphoreName;      /*    16    24 */
	bool                       m_shouldDeleteOnClose; /*    40     1 */

	/* XXX 3 bytes hole, try to pack */

	int                        m_flags;              /*    44     4 */
	sem_t *                    m_sem;                /*    48     8 */
	void StreamSemaphore(class StreamSemaphore *, const char  *, DK_STREAM_OPEN_DISPOSITION);

	virtual void ~StreamSemaphore(class StreamSemaphore *);

	virtual class AbiStatus Read(class StreamSemaphore *, ULONG64, ULONG, PVOID, PDKHANDLE);

	virtual class AbiStatus Write(class StreamSemaphore *, ULONG64, ULONG, const void  *, PDKHANDLE);

	virtual class AbiStatus Open(class StreamSemaphore *);

	virtual class AbiStatus Close(class StreamSemaphore *);

	class SystemStatus Wait(class StreamSemaphore *, int);

	class SystemStatus Post(class StreamSemaphore *);

	/* vtable has 5 entries: {
	   [0] = ~StreamSemaphore((null)), 
	   [0] = Read((null)), 
	   [1] = Write((null)), 
	   [8] = Open((null)), 
	   [9] = Close((null)), 
	} */
	/* size: 56, cachelines: 1, members: 6 */
	/* sum members: 38, holes: 2, sum holes: 10 */
	/* last cacheline: 56 bytes */

	/* BRAIN FART ALERT! 56 != 38 + 10(holes), diff = 8 */

};
class SymmetricKeyStream : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	void SymmetricKeyStream(class SymmetricKeyStream *);

	virtual void ~SymmetricKeyStream(class SymmetricKeyStream *);

	virtual class AbiStatus Read(class SymmetricKeyStream *, ULONG64, ULONG, PVOID, PDKHANDLE);

	class AbiStatus Encrypt(class SymmetricKeyStream *, PUCHAR, ULONG, PUCHAR, ULONG, PUCHAR, ULONG, PUCHAR, ULONG, ULONG *, bool, const void  *, void * *);

	class AbiStatus Decrypt(class SymmetricKeyStream *, PUCHAR, ULONG, PUCHAR, ULONG, PUCHAR, ULONG, PUCHAR, ULONG, ULONG *, bool, const void  *, void * *);

	class AbiStatus DestroyContext(class SymmetricKeyStream *, void *);

	/* vtable has 2 entries: {
	   [0] = ~SymmetricKeyStream((null)), 
	   [0] = Read((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 8 != 0 + 0(holes), diff = 8 */

};
class KerberosStream : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	static stringconst                s_keytabEnvironmentVar /*     0     0 */
	static stringconst                s_ccacheEnvironmentVar /*     0     0 */
	static stringconst                s_kerbConfigEnvironmentVar /*     0     0 */
	static stringconst                s_kdcConfigEnvironmentVar /*     0     0 */
	static stringconst                s_clientKeytabEnvironmentVar /*     0     0 */
	static stringconst                s_krbReplayCacheTypeEnvironmentVar /*     0     0 */
	static stringconst                s_krbRelapyCacheEnvironmentVar /*     0     0 */
	static stringconst                s_krbPortEnvironmentVar /*     0     0 */
	static class map<const std::__1::basic_string<char>, char *, std::__1::less<const std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, char *> > > s_krbEnvironment /*     0     0 */
	static const char  *const         s_krb5DefaultKeytab /*     0     0 */
	void KerberosStream(class KerberosStream *);

	virtual void ~KerberosStream(class KerberosStream *);

	virtual class AbiStatus Read(class KerberosStream *, ULONG64, ULONG, PVOID, PDKHANDLE);

	class AbiStatus StaticInit(void);

	void PrintGSSError(const char  *, OM_uint32, OM_uint32, gss_name_tconst);

	string GetDisplayName(const gss_name_t  *);

	OM_uint32 ImportName(class KerberosStream *, OM_uint32 *, gss_buffer_desc *, gss_OIDconst, gss_name_t *);

	OM_uint32 ImportName(class KerberosStream *, OM_uint32 *, gss_buffer_desc *, gss_OIDconst, GssNamePtr &);

	class AbiStatus AcquireCredentialsHandle(class KerberosStream *, class AcquireCredentialsHandleParams *);

	class AbiStatus FreeCredentialsHandle(class KerberosStream *, class FreeCredentialsHandleParams *);

	class AbiStatus InitializeSecurityContext(class KerberosStream *, class InitializeSecurityContextParams *);

	class AbiStatus AcceptSecurityContext(class KerberosStream *, class AcceptSecurityContextParams *);

	class AbiStatus QueryContextAttributes(class KerberosStream *, class QueryContextAttributesParams *);

	class AbiStatus QueryClientAttributes(class KerberosStream *, class QueryClientAttributesParams *);

	class AbiStatus DeleteSecurityContext(class KerberosStream *, class DeleteSecurityContextParams *);

	class AbiStatus LookupAccountName(class KerberosStream *, class LookupAccountNameParams *);

	class AbiStatus LookupAccountSid(class KerberosStream *, class LookupAccountSidParams *);

	SECURITY_STATUS_ABI GSSErrorToSecStatus(class KerberosStream *, OM_uint32);

	class AbiStatus KerberosSelfHandshake(class KerberosStream *, GssCredPtr &, GssCredPtr &, gss_OID_desc, GssNamePtr &, gss_ctx_id_t *, GssCredPtr &, OM_uint32 *);

	class AbiStatus GetContextHandleByUser(class KerberosStream *, class GetContextHandleByUserParams *);

	class AbiStatus GetImpersonateSecurityContext(class KerberosStream *, class GetImpersonateSecurityContextParams *);

	class AbiStatus GetRevertSecurityContext(class KerberosStream *, class GetRevertSecurityContextParams *);

	class AbiStatus GetUPN(class GetUPNParams *);

	class AbiStatus GetPrivilegedAccountName(string &);

	class AbiStatus GetUserCredHandle(class KerberosStream *, class GetUserCredHandleParams *);

	class AbiStatus GetMachineCredHandle(class KerberosStream *, class GetMachineCredHandleParams *);

	OM_uint32 ImportNameAndAcquireCred(class KerberosStream *, OM_uint32 *, char *, OM_uint32, gss_OID_set, gss_cred_usage_t, GssCredPtr &, gss_OID_set *, OM_uint32 *, GssNamePtr &);

	OM_uint32 AcquireCredCaseInsensitive(class KerberosStream *, OM_uint32 *, const char  *, OM_uint32, gss_OID_set, gss_cred_usage_t, GssCredPtr &, gss_OID_set *, OM_uint32 *, GssNamePtr &);

	OM_uint32 AcquireMachineAccountCred(class KerberosStream *, OM_uint32 *, OM_uint32, gss_OID_set, gss_cred_usage_t, GssCredPtr &, gss_OID_set *, OM_uint32 *, GssNamePtr &);

	OM_uint32 AcquirePrivilegedAccountCred(class KerberosStream *, OM_uint32 *, OM_uint32, gss_OID_set, gss_cred_usage_t, GssCredPtr &, gss_OID_set *, OM_uint32 *, GssNamePtr &);

	class AbiStatus DuplicateImpersonationHandle(class KerberosStream *, class DuplicateKerberosImpersonationHandleParams *);

	void DuplicateCredential(class KerberosStream *, gss_cred_id_t, gss_cred_id_t *);

	void LogKerberosEnvironment(void);

	void ReadKerberosEnvironment(void);

	/* vtable has 2 entries: {
	   [0] = ~KerberosStream((null)), 
	   [0] = Read((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1, static members: 10 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 8 != 0 + 0(holes), diff = 8 */

};
struct gss_buffer_desc_struct {
	size_t                     length;               /*     0     8 */
	void *                     value;                /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct gss_OID_desc_struct {
	OM_uint32                  length;               /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	void *                     elements;             /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
class AcquireCredentialsHandleParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	ULONGconst                 fCredentialUse;       /*    16     4 */

	/* XXX 4 bytes hole, try to pack */

	ULONG *                    ptsExpiry;            /*    24     8 */
	void *                     hostCredHandle;       /*    32     8 */
	char *                     principalName;        /*    40     8 */
	const const void  *  *     ppCurrentImpHandle;   /*    48     8 */
	void AcquireCredentialsHandleParams(class AcquireCredentialsHandleParams *, SECURITY_STATUS_ABI *, ULONGconst, ULONG *, char *, void * *);


	/* size: 56, cachelines: 1, members: 7 */
	/* sum members: 44, holes: 2, sum holes: 8 */
	/* last cacheline: 56 bytes */

	/* BRAIN FART ALERT! 56 != 44 + 8(holes), diff = 4 */

};
class SspiParams {
	enum SSPI_OPERATION        sspiOperation;        /*     0     4 */
public:

	void SspiParams(class SspiParams *, enum SSPI_OPERATION);

	enum SSPI_OPERATION GetOperationType(class SspiParams *);


	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
class FreeCredentialsHandleParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	void *                     pCred;                /*    16     8 */
	void FreeCredentialsHandleParams(class FreeCredentialsHandleParams *, SECURITY_STATUS_ABI *, void *);


	/* size: 24, cachelines: 1, members: 3 */
	/* sum members: 16, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 24 != 16 + 4(holes), diff = 4 */

};
class InitializeSecurityContextParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	void *                     pCredential;          /*    16     8 */
	void *                     pContext;             /*    24     8 */
	char *                     pTargetName;          /*    32     8 */
	ULONGconst                 contextReq;           /*    40     4 */

	/* XXX 4 bytes hole, try to pack */

	PSecBuffer_ABIconst        pInput;               /*    48     8 */
	void * *                   ppNewContext;         /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	PSecBuffer_ABI             pOutput;              /*    64     8 */
	void * *                   ppCurrentImpHandle;   /*    72     8 */
	void InitializeSecurityContextParams(class InitializeSecurityContextParams *, SECURITY_STATUS_ABI *, void *, void *, char *, ULONGconst, PSecBuffer_ABIconst, void * *, PSecBuffer_ABI, void * *);


	/* size: 80, cachelines: 2, members: 10 */
	/* sum members: 68, holes: 2, sum holes: 8 */
	/* last cacheline: 16 bytes */

	/* BRAIN FART ALERT! 80 != 68 + 8(holes), diff = 4 */

};
struct SecBuffer_ABI {
	ULONG                      cbBuffer;             /*     0     4 */
	ULONG                      BufferType;           /*     4     4 */
	void *                     pvBuffer;             /*     8     8 */

	/* size: 16, cachelines: 1, members: 3 */
	/* last cacheline: 16 bytes */
};
class AcceptSecurityContextParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	void *                     pContext;             /*    16     8 */
	PSecBuffer_ABI             pInput;               /*    24     8 */
	ULONG                      contextReq;           /*    32     4 */

	/* XXX 4 bytes hole, try to pack */

	void * *                   ppNewContext;         /*    40     8 */
	PSecBuffer_ABI             pOutput;              /*    48     8 */
	void *                     pCredential;          /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	void * *                   pClientName;          /*    64     8 */
	void AcceptSecurityContextParams(class AcceptSecurityContextParams *, SECURITY_STATUS_ABI *, void *, PSecBuffer_ABI, ULONG, void * *, PSecBuffer_ABI, void *);


	/* size: 72, cachelines: 2, members: 9 */
	/* sum members: 60, holes: 2, sum holes: 8 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 72 != 60 + 8(holes), diff = 4 */

};
class QueryContextAttributesParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	void *                     pContext;             /*    16     8 */
	ULONG                      ulAttribute;          /*    24     4 */

	/* XXX 4 bytes hole, try to pack */

	void *                     pBuffer;              /*    32     8 */
	void QueryContextAttributesParams(class QueryContextAttributesParams *, SECURITY_STATUS_ABI *, void *, ULONG, void *);


	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 28, holes: 2, sum holes: 8 */
	/* last cacheline: 40 bytes */

	/* BRAIN FART ALERT! 40 != 28 + 8(holes), diff = 4 */

};
class QueryClientAttributesParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	void *                     pContext;             /*    16     8 */
	PSecBuffer_ABI             pClientAttributes;    /*    24     8 */
	void QueryClientAttributesParams(class QueryClientAttributesParams *, SECURITY_STATUS_ABI *, void *, PSecBuffer_ABI);


	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 24, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 4(holes), diff = 4 */

};
class DeleteSecurityContextParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	void *                     pContext;             /*    16     8 */
	void DeleteSecurityContextParams(class DeleteSecurityContextParams *, SECURITY_STATUS_ABI *, void *);


	/* size: 24, cachelines: 1, members: 3 */
	/* sum members: 16, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 24 != 16 + 4(holes), diff = 4 */

};
class LookupAccountNameParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */
	DWORD                      returnValue;          /*     4     4 */
	const char  *              pAccountName;         /*     8     8 */
	char *                     pSidBuffer;           /*    16     8 */
	ULONG                      sidBufferSize;        /*    24     4 */
	enum SID_NAME_USE_ABI      sidNameUse;           /*    28     4 */
	void LookupAccountNameParams(class LookupAccountNameParams *, const char  *, char *, ULONG);


	/* size: 32, cachelines: 1, members: 6 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 28 + 0(holes), diff = 4 */

};
class LookupAccountSidParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */
	DWORD                      returnValue;          /*     4     4 */
	char *                     pAccountNameBuffer;   /*     8     8 */
	const char  *              pSid;                 /*    16     8 */
	ULONG                      nameBufferSize;       /*    24     4 */
	enum SID_NAME_USE_ABI      sidNameUse;           /*    28     4 */
	void LookupAccountSidParams(class LookupAccountSidParams *, char *, const char  *, ULONGconst);


	/* size: 32, cachelines: 1, members: 6 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 28 + 0(holes), diff = 4 */

};
class GetContextHandleByUserParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	const char  *              pSid;                 /*    16     8 */
	void * *                   pContext;             /*    24     8 */
	void GetContextHandleByUserParams(class GetContextHandleByUserParams *, SECURITY_STATUS_ABI *, const char  *, void * *);


	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 24, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 4(holes), diff = 4 */

};
class GetImpersonateSecurityContextParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	void *                     impHandle;            /*    16     8 */
	void * *                   ppCurrentImpHandle;   /*    24     8 */
	void GetImpersonateSecurityContextParams(class GetImpersonateSecurityContextParams *, SECURITY_STATUS_ABI *, void *, void * *);


	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 24, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 4(holes), diff = 4 */

};
class GetRevertSecurityContextParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	void *                     impHandle;            /*    16     8 */
	void * *                   ppCurrentImpHandle;   /*    24     8 */
	void GetRevertSecurityContextParams(class GetRevertSecurityContextParams *, SECURITY_STATUS_ABI *, void *, void * *);


	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 24, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 4(holes), diff = 4 */

};
class GetUPNParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	char *                     upn;                  /*    16     8 */
	size_t                     buffLength;           /*    24     8 */
	void GetUPNParams(class GetUPNParams *, SECURITY_STATUS_ABI *, char *, size_tconst);


	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 24, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 4(holes), diff = 4 */

};
class GetUserCredHandleParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	const char  *              username;             /*    16     8 */
	const char  *              password;             /*    24     8 */
	void * *                   ppUserCredHandle;     /*    32     8 */
	void GetUserCredHandleParams(class GetUserCredHandleParams *, SECURITY_STATUS_ABI *, const char  *, const char  *, void * *);


	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 32, holes: 1, sum holes: 4 */
	/* last cacheline: 40 bytes */

	/* BRAIN FART ALERT! 40 != 32 + 4(holes), diff = 4 */

};
class GetMachineCredHandleParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	void * *                   ppMachineCredHandle;  /*    16     8 */
	void GetMachineCredHandleParams(class GetMachineCredHandleParams *, SECURITY_STATUS_ABI *, void * *);


	/* size: 24, cachelines: 1, members: 3 */
	/* sum members: 16, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 24 != 16 + 4(holes), diff = 4 */

};
struct gss_OID_set_desc_struct {
	size_t                     count;                /*     0     8 */
	gss_OID                    elements;             /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
class DuplicateKerberosImpersonationHandleParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	PVOID *                    ppOutputHandle;       /*     8     8 */
	PVOIDconst                 pHandle;              /*    16     8 */
	void DuplicateKerberosImpersonationHandleParams(class DuplicateKerberosImpersonationHandleParams *, PVOID *, PVOIDconst);


	/* size: 24, cachelines: 1, members: 3 */
	/* sum members: 16, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 24 != 16 + 4(holes), diff = 4 */

};
class SslStream : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	void SslStream(class SslStream *);

	virtual void ~SslStream(class SslStream *);

	virtual class AbiStatus Read(class SslStream *, ULONG64, ULONG, PVOID, PDKHANDLE);

	class AbiStatus InitializeSecurityContext(class SslStream *, class InitializeSecurityContextParams &);

	class AbiStatus AcceptSecurityContext(class SslStream *, class AcceptSecurityContextParams &);

	class AbiStatus QueryContextAttributes(class SslStream *, class QueryContextAttributesParams &);

	class AbiStatus DeleteSecurityContext(class SslStream *, class DeleteSecurityContextParams &);

	class AbiStatus EncryptMessage(class SslStream *, class EncryptMessageParams &);

	class AbiStatus DecryptMessage(class SslStream *, class DecryptMessageParams &);

	class AbiStatus SslLoadOverrideCertFile(class SslStream *, class SslLoadOverrideCertFileParams &);

	class AbiStatus ConfigureSettings(class SslStream *, class SslConfigureSettingsParams &);

	/* vtable has 2 entries: {
	   [0] = ~SslStream((null)), 
	   [0] = Read((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 8 != 0 + 0(holes), diff = 8 */

};
class EncryptMessageParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	void *                     pContext;             /*    16     8 */
	PSecBufferDesc_ABI         pMessage;             /*    24     8 */
	void EncryptMessageParams(class EncryptMessageParams *, SECURITY_STATUS_ABI *, void *, PSecBufferDesc_ABI);


	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 24, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 4(holes), diff = 4 */

};
struct SecBufferDesc_ABI {
	ULONG                      ulVersion;            /*     0     4 */
	ULONG                      cBuffers;             /*     4     4 */
	PSecBuffer_ABI             pBuffers;             /*     8     8 */

	/* size: 16, cachelines: 1, members: 3 */
	/* last cacheline: 16 bytes */
};
class DecryptMessageParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	SECURITY_STATUS_ABI *      returnValue;          /*     8     8 */
	void *                     pContext;             /*    16     8 */
	PSecBuffer_ABI             pMessage;             /*    24     8 */
	DWORD *                    pExtraByteCount;      /*    32     8 */
	void DecryptMessageParams(class DecryptMessageParams *, SECURITY_STATUS_ABI *, void *, PSecBuffer_ABI, DWORD *);


	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 32, holes: 1, sum holes: 4 */
	/* last cacheline: 40 bytes */

	/* BRAIN FART ALERT! 40 != 32 + 4(holes), diff = 4 */

};
class SslLoadOverrideCertFileParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	const char  *              pCertFilename;        /*     8     8 */
	const char  *              pKeyFilename;         /*    16     8 */
	BYTE *                     pOriginalCertData;    /*    24     8 */
	DWORD                      originalCertSize;     /*    32     4 */
	void SslLoadOverrideCertFileParams(class SslLoadOverrideCertFileParams *, const char  *, const char  *, BYTE *, DWORD);


	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 28, holes: 1, sum holes: 4 */
	/* padding: 4 */
	/* last cacheline: 40 bytes */

	/* BRAIN FART ALERT! 40 != 28 + 4(holes), diff = 8 */

};
class SslConfigureSettingsParams : public SspiParams {
public:

	/* class SspiParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	int *                      pReturn;              /*     8     8 */
	const char  *              pTlsProtocols;        /*    16     8 */
	const char  *              pTlsCiphers;          /*    24     8 */
	void SslConfigureSettingsParams(class SslConfigureSettingsParams *, int *, const char  *, const char  *);


	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 24, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 24 + 4(holes), diff = 4 */

};
class OdbcStream : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	bool                       m_isInitialized;      /*     8     1 */
	struct atomic<bool>        m_isClosed;           /*     9     1 */

	/* XXX 2 bytes hole, try to pack */

	struct atomic<int>         m_activeThreadNum;    /*    12     4 */
	struct atomic<int>         m_failedStartThreadNum; /*    16     4 */

	/* XXX 4 bytes hole, try to pack */

	class mutex               m_threadNumberMtx;     /*    24    40 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	sem_t                      m_odbcsemaphore;      /*    64    32 */
	sem_t                      m_closeSemaphore;     /*    96    32 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	class deque<OdbcRequest *, std::__1::allocator<OdbcRequest *> > m_odbcRequests; /*   128    48 */
	class mutex               m_odbcRequestsMtx;     /*   176    40 */
	/* --- cacheline 3 boundary (192 bytes) was 24 bytes ago --- */
	HandleOdbcOperationFunc    m_operationHandler;   /*   216     8 */
	void *                     m_streamLibHandler;   /*   224     8 */
	void OdbcStream(class OdbcStream *);

	virtual void ~OdbcStream(class OdbcStream *);

	virtual class AbiStatus Open(class OdbcStream *);

	virtual class AbiStatus Close(class OdbcStream *);

	virtual class AbiStatus Read(class OdbcStream *, ULONG64, ULONG, PVOID, PDKHANDLE);

	void * OdbcHandlerThreadEntry(void *);

	class AbiStatus InitializeOdbcOperationHandler(class OdbcStream *);

	bool HandleOdbcRequests(class OdbcStream *);

	class AbiStatus HandleOdbcOperation(class OdbcStream *, class OdbcOperation *);

	class AbiStatus AllocODBCAsyncHandle(class OdbcStream *, class AbiStatus, PDKHANDLE);

	/* vtable has 4 entries: {
	   [0] = ~OdbcStream((null)), 
	   [8] = Open((null)), 
	   [9] = Close((null)), 
	   [0] = Read((null)), 
	} */
	/* size: 232, cachelines: 4, members: 12 */
	/* sum members: 218, holes: 2, sum holes: 6 */
	/* last cacheline: 40 bytes */

	/* BRAIN FART ALERT! 232 != 218 + 6(holes), diff = 8 */

};
struct OdbcRequest {
	class OdbcOperation *      odbcOperation;        /*     0     8 */
	DKHANDLE                   asyncHandler;         /*     8     8 */
	bool                       isTerminateThread;    /*    16     1 */
	void OdbcRequest(class OdbcRequest *);


	/* size: 24, cachelines: 1, members: 3 */
	/* padding: 7 */
	/* last cacheline: 24 bytes */
};
struct OdbcOperation {
	ULONG                      bytesToRead;          /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	void *                     buffer;               /*     8     8 */
	void OdbcOperation(class OdbcOperation *);


	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
class CryptHashStream : public StreamObject {
public:

	/* class StreamObject        <ancestor>; */      /*     0     8 */
	void CryptHashStream(class CryptHashStream *);

	virtual void ~CryptHashStream(class CryptHashStream *);

	virtual class AbiStatus Read(class CryptHashStream *, ULONG64, ULONG, PVOID, PDKHANDLE);

	class AbiStatus CreateHash(class CryptHashStream *, class CreateHashParams *);

	class AbiStatus HashData(class CryptHashStream *, class HashDataParams *);

	class AbiStatus FinishHash(class CryptHashStream *, class FinishHashParams *);

	class AbiStatus DuplicateHash(class CryptHashStream *, class DuplicateHashParams *);

	class AbiStatus DestroyHash(class CryptHashStream *, class DestroyHashParams *);

	class AbiStatus DeriveKeyPBKDF2(class CryptHashStream *, class DeriveKeyPBKDF2Params *);

	/* vtable has 2 entries: {
	   [0] = ~CryptHashStream((null)), 
	   [0] = Read((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 8 != 0 + 0(holes), diff = 8 */

};
class CreateHashParams : public HashParams {
public:

	/* class HashParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	NTSTATUS_ABI *             returnValue;          /*     8     8 */
	enum CRYPT_ALG_TYPE        algType;              /*    16     4 */

	/* XXX 4 bytes hole, try to pack */

	void *                     hashHandle;           /*    24     8 */
	void *                     pSecret;              /*    32     8 */
	ULONG                      secretLength;         /*    40     4 */
	bool                       isHMAC;               /*    44     1 */

	/* XXX 3 bytes hole, try to pack */

	ULONG                      hashSize;             /*    48     4 */
	void CreateHashParams(class CreateHashParams *, NTSTATUS_ABI *, enum CRYPT_ALG_TYPE, void *, ULONG);


	/* size: 56, cachelines: 1, members: 8 */
	/* sum members: 37, holes: 3, sum holes: 11 */
	/* padding: 4 */
	/* last cacheline: 56 bytes */

	/* BRAIN FART ALERT! 56 != 37 + 11(holes), diff = 8 */

};
class HashParams {
	enum HASH_OPERATION        m_HashOperation;      /*     0     4 */
public:

	void HashParams(class HashParams *, enum HASH_OPERATION);

	enum HASH_OPERATION GetOperationType(class HashParams *);


	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
class HashDataParams : public HashParams {
public:

	/* class HashParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	NTSTATUS_ABI *             returnValue;          /*     8     8 */
	void *                     hashHandle;           /*    16     8 */
	void *                     pData;                /*    24     8 */
	ULONG                      dataLength;           /*    32     4 */
	bool                       isHMAC;               /*    36     1 */
	void HashDataParams(class HashDataParams *, NTSTATUS_ABI *, void *, void *, ULONG, bool);


	/* size: 40, cachelines: 1, members: 6 */
	/* sum members: 29, holes: 1, sum holes: 4 */
	/* padding: 3 */
	/* last cacheline: 40 bytes */

	/* BRAIN FART ALERT! 40 != 29 + 4(holes), diff = 7 */

};
class FinishHashParams : public HashParams {
public:

	/* class HashParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	NTSTATUS_ABI *             returnValue;          /*     8     8 */
	void *                     hashHandle;           /*    16     8 */
	void *                     pOutputBuffer;        /*    24     8 */
	ULONG                      outputBufferLength;   /*    32     4 */
	bool                       isHMAC;               /*    36     1 */
	void FinishHashParams(class FinishHashParams *, NTSTATUS_ABI *, void *, void *, ULONG, bool);


	/* size: 40, cachelines: 1, members: 6 */
	/* sum members: 29, holes: 1, sum holes: 4 */
	/* padding: 3 */
	/* last cacheline: 40 bytes */

	/* BRAIN FART ALERT! 40 != 29 + 4(holes), diff = 7 */

};
class DuplicateHashParams : public HashParams {
public:

	/* class HashParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	NTSTATUS_ABI *             returnValue;          /*     8     8 */
	void *                     hashHandle;           /*    16     8 */
	void *                     newHashHandle;        /*    24     8 */
	bool                       isHMAC;               /*    32     1 */
	void DuplicateHashParams(class DuplicateHashParams *, NTSTATUS_ABI *, void *, bool);


	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 25, holes: 1, sum holes: 4 */
	/* padding: 7 */
	/* last cacheline: 40 bytes */

	/* BRAIN FART ALERT! 40 != 25 + 4(holes), diff = 11 */

};
class DestroyHashParams : public HashParams {
public:

	/* class HashParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	NTSTATUS_ABI *             returnValue;          /*     8     8 */
	void *                     hashHandle;           /*    16     8 */
	bool                       isHMAC;               /*    24     1 */
	void DestroyHashParams(class DestroyHashParams *, NTSTATUS_ABI *, void *, bool);


	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 17, holes: 1, sum holes: 4 */
	/* padding: 7 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 17 + 4(holes), diff = 11 */

};
class DeriveKeyPBKDF2Params : public HashParams {
public:

	/* class HashParams          <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	NTSTATUS_ABI *             returnValue;          /*     8     8 */
	const void  *              algType;              /*    16     8 */
	const char  *              passwordBuf;          /*    24     8 */
	ULONG                      passwordLen;          /*    32     4 */

	/* XXX 4 bytes hole, try to pack */

	const UCHAR  *             saltBuf;              /*    40     8 */
	ULONG                      saltLen;              /*    48     4 */
	ULONG                      numIterations;        /*    52     4 */
	UCHAR *                    outputBuf;            /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	ULONG                      outputLen;            /*    64     4 */
	void DeriveKeyPBKDF2Params(class DeriveKeyPBKDF2Params *, NTSTATUS_ABI *, const void  *, const char  *, ULONG, const UCHAR  *, ULONG, ULONG, UCHAR *, ULONG);


	/* size: 72, cachelines: 2, members: 10 */
	/* sum members: 56, holes: 2, sum holes: 8 */
	/* padding: 4 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 72 != 56 + 8(holes), diff = 8 */

};
struct NETWORK_IO_STREAM_REQUEST_IOS {
	PDK_ASYNC_RESULTS_LINKED * PendingIOList;        /*     0     8 */
	PDK_PACKET_RESULTS_LINKED * PacketResults;       /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct _DK_PACKET_RESULTS_LINKED {
	PVOID                      KeyContext;           /*     0     8 */
	PVOID                      ApcContext;           /*     8     8 */
	LONG                       Status;               /*    16     4 */

	/* XXX 4 bytes hole, try to pack */

	ULONG_PTR                  Information;          /*    24     8 */
	PVOID                      Next;                 /*    32     8 */
	ULONG                      reserverd[0];         /*    40     0 */

	/* size: 56, cachelines: 1, members: 6 */
	/* sum members: 36, holes: 1, sum holes: 4 */
	/* padding: 16 */
	/* last cacheline: 56 bytes */
};
struct _DK_TRACE_RECORD {
	DK_TRACE_EVENT_TYPE        EventType;            /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	union {
		DK_TRACE_MESSAGE   Message;              /*     8    40 */
		DK_TRACE_ERROR     Error;                /*     8    64 */
	} Data;                                          /*     8    64 */
	union {
		DK_TRACE_MESSAGE           Message;              /*     0    40 */
		DK_TRACE_ERROR             Error;                /*     0    64 */
	};

	/* --- cacheline 1 boundary (64 bytes) was 8 bytes ago --- */
	PVOID                      Logger;               /*    72     8 */
	volatile int  *            Level;                /*    80     8 */

	/* size: 88, cachelines: 2, members: 4 */
	/* sum members: 84, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */
};
struct _DK_TRACE_MESSAGE {
	ASCII_STRING *             Category;             /*     0     8 */
	DK_TRACE_LEVEL             Level;                /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	const char  *              File;                 /*    16     8 */
	int                        Line;                 /*    24     4 */

	/* XXX 4 bytes hole, try to pack */

	const ASCII_STRING  *      Message;              /*    32     8 */

	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 32, holes: 2, sum holes: 8 */
	/* last cacheline: 40 bytes */
};
struct _DK_TRACE_ERROR {
	DKSTATUS                   ErrorStatusCode;      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	const ASCII_STRING  *      ErrorMessage;         /*     8     8 */
	ULONG64                    Address;              /*    16     8 */
	ULONG                      NumberOfParameters;   /*    24     4 */

	/* XXX 4 bytes hole, try to pack */

	PULONG_PTR                 Parameters;           /*    32     8 */
	ASCII_STRING *             ParameterStrings;     /*    40     8 */
	ULONG                      NumberOfFrames;       /*    48     4 */

	/* XXX 4 bytes hole, try to pack */

	PVOID *                    Frames;               /*    56     8 */

	/* size: 64, cachelines: 1, members: 8 */
	/* sum members: 52, holes: 3, sum holes: 12 */
};
struct ProtectionEntryMapping {
	void *                     Address;              /*     0     8 */
	ssize_t                    Length;               /*     8     8 */
	int                        MmapFlags;            /*    16     4 */
	void ProtectionEntryMapping(class ProtectionEntryMapping *, void *, ssize_t, int);


	/* size: 24, cachelines: 1, members: 3 */
	/* padding: 4 */
	/* last cacheline: 24 bytes */
};
struct SectionInformation {
	string                     Name;                 /*     0    24 */
	uint32_t                   SectionSize;          /*    24     4 */
	uint32_t                   SectionOffset;        /*    28     4 */
	uint32_t                   RawDataSize;          /*    32     4 */
	uint32_t                   RawDataOffset;        /*    36     4 */
	uint32_t                   Flags;                /*    40     4 */
	void ~SectionInformation(class SectionInformation *);


	/* size: 48, cachelines: 1, members: 6 */
	/* padding: 4 */
	/* last cacheline: 48 bytes */
};
class PalSemaphore : public WaitableObject {
public:

	/* class WaitableObject      <ancestor>; */      /*     0    32 */
	static intconst                   sm_InstanceType /*     0     0 */
	LONG                       m_currentCount;       /*    32     4 */
	LONGconst                  m_maximumCount;       /*    36     4 */
	class AbiStatus Release(class PalSemaphore *, LONG, PLONG);

	LONG Peek(class PalSemaphore *);

	virtual bool IsType(const class PalSemaphore  *, int);

	virtual void AssertIsValid(const class PalSemaphore  *);

	virtual bool DeliverSignal(class PalSemaphore *, bool);

	virtual bool IsReady(class PalSemaphore *);

	virtual void Close(class PalSemaphore *);

protected:

	class PalSemaphore * Create(LONG, LONG);

	void PalSemaphore(class PalSemaphore *, LONG, LONG);

	void PalSemaphore(class PalSemaphore *);

	void PalSemaphore(class PalSemaphore *, const class PalSemaphore  &);

	class PalSemaphore & operator=(class PalSemaphore *, const class PalSemaphore  &);

	/* vtable has 5 entries: {
	   [2] = IsType((null)), 
	   [3] = AssertIsValid((null)), 
	   [5] = DeliverSignal((null)), 
	   [6] = IsReady((null)), 
	   [4] = Close((null)), 
	} */
	/* size: 40, cachelines: 1, members: 3, static members: 1 */
	/* last cacheline: 40 bytes */

	/* BRAIN FART ALERT! 40 != 8 + 0(holes), diff = 32 */

};
class ObjectManager {
public:

	void AddReference(DKHANDLE);

	void AddReference(class ObjectBase *);

	void CloseObject(DKHANDLE);

	void CloseObject(class ObjectBase *);

	class AbiStatus WaitForAnyObject(ULONGconst, const DKHANDLE  *, PLONG64const, PULONG);

	void ObjectManager(class ObjectManager *);

	void ObjectManager(class ObjectManager *, const class ObjectManager  &);

	class ObjectManager & operator=(class ObjectManager *, const class ObjectManager  &);

	class AutoRefc<PalSemaphore> Create<PalSemaphore, int &, int &>(int &, int &);

	class PalSemaphore * GetNoRefHandleChecked<PalSemaphore>(DKHANDLE, int);

	class AutoRefc<PalEvent> Create<PalEvent, const bool &, bool>(const bool  &, );

	class PalEvent * GetNoRefHandleChecked<PalEvent>(DKHANDLE, int);

	class AutoRefc<PalObject> Create<PalObject, PalObjectType>();

	class PalObject * GetNoRefHandleChecked<PalObject>(DKHANDLE, int);

	class AutoRefc<PalObject> GetHandle<PalObject>(DKHANDLE);

	void AddReference<PalObject>(class AutoRefc<PalObject>);

	void CloseObject<PalObject>(class AutoRefc<PalObject>);


	/* size: 1, cachelines: 0, members: 0 */
	/* last cacheline: 1 bytes */
};
class AutoRefc<PalSemaphore> {
	class PalSemaphore *       m_object;             /*     0     8 */
public:

	void AutoRefc(class AutoRefc<PalSemaphore> *);

	void AutoRefc(class AutoRefc<PalSemaphore> *, );

	void AutoRefc(class AutoRefc<PalSemaphore> *, const class AutoRefc<PalSemaphore>  &);

	void ~AutoRefc(class AutoRefc<PalSemaphore> *);

	void operator=(class AutoRefc<PalSemaphore> *, );

	void operator=(class AutoRefc<PalSemaphore> *, const class AutoRefc<PalSemaphore>  &);

	void operator=(class AutoRefc<PalSemaphore> *, nullptr_t);

	class PalSemaphore * operator->(class AutoRefc<PalSemaphore> *);

	const class PalSemaphore  * operator->(const class AutoRefc<PalSemaphore>  *);

	void MoveToHandle(class AutoRefc<PalSemaphore> *, PDKHANDLE);

	void AutoRefc(class AutoRefc<PalSemaphore> *, class PalSemaphore *, enum InitializationType);

	class PalSemaphore * operator&(class AutoRefc<PalSemaphore> *);


	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
class AutoRefc<PalEvent> {
	class PalEvent *           m_object;             /*     0     8 */
public:

	void AutoRefc(class AutoRefc<PalEvent> *);

	void AutoRefc(class AutoRefc<PalEvent> *, );

	void AutoRefc(class AutoRefc<PalEvent> *, const class AutoRefc<PalEvent>  &);

	void ~AutoRefc(class AutoRefc<PalEvent> *);

	void operator=(class AutoRefc<PalEvent> *, );

	void operator=(class AutoRefc<PalEvent> *, const class AutoRefc<PalEvent>  &);

	void operator=(class AutoRefc<PalEvent> *, nullptr_t);

	class PalEvent * operator->(class AutoRefc<PalEvent> *);

	const class PalEvent  * operator->(const class AutoRefc<PalEvent>  *);

	void MoveToHandle(class AutoRefc<PalEvent> *, PDKHANDLE);

	void AutoRefc(class AutoRefc<PalEvent> *, class PalEvent *, enum InitializationType);

	class PalEvent * operator&(class AutoRefc<PalEvent> *);


	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
class AutoRefc<PalObject> {
	class PalObject *          m_object;             /*     0     8 */
public:

	void AutoRefc(class AutoRefc<PalObject> *);

	void AutoRefc(class AutoRefc<PalObject> *, );

	void AutoRefc(class AutoRefc<PalObject> *, const class AutoRefc<PalObject>  &);

	void ~AutoRefc(class AutoRefc<PalObject> *);

	void operator=(class AutoRefc<PalObject> *, );

	void operator=(class AutoRefc<PalObject> *, const class AutoRefc<PalObject>  &);

	void operator=(class AutoRefc<PalObject> *, nullptr_t);

	class PalObject * operator->(class AutoRefc<PalObject> *);

	const class PalObject  * operator->(const class AutoRefc<PalObject>  *);

	void MoveToHandle(class AutoRefc<PalObject> *, PDKHANDLE);

	void AutoRefc(class AutoRefc<PalObject> *, class PalObject *, enum InitializationType);

	class PalObject * operator&(class AutoRefc<PalObject> *);


	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
class PalMemoryMapPeBinary {
protected:

	void *                     m_entryPoint;         /*     0     8 */
	class BinaryPeParser      m_peParser;            /*     8   152 */
	/* --- cacheline 2 boundary (128 bytes) was 32 bytes ago --- */
	long unsigned int          m_checksum;           /*   160     8 */
	class vector<ProtectionEntryMapping, std::__1::allocator<ProtectionEntryMapping> > m_protectionMap; /*   168    24 */
	/* --- cacheline 3 boundary (192 bytes) --- */
	void *                     m_mappedBase;         /*   192     8 */
	size_t                     m_mappedLength;       /*   200     8 */
public:

	void PalMemoryMapPeBinary(class PalMemoryMapPeBinary *);

	class AbiStatus LoadFromFile(class PalMemoryMapPeBinary *, class File &, void *);

	void * GetEntryPointAddress(class PalMemoryMapPeBinary *);

	void * GetBaseAddress(class PalMemoryMapPeBinary *);

	size_t GetLength(class PalMemoryMapPeBinary *);

protected:

	class AbiStatus MapBinary(class PalMemoryMapPeBinary *, class File &, void *);

	class AbiStatus MapSection(class PalMemoryMapPeBinary *, class File &, void *, const class SectionInformation  &);

	class AbiStatus ReadSection(class PalMemoryMapPeBinary *, class File &, void *, size_t, uint64_t, int);

	void MapPePageProtection(class PalMemoryMapPeBinary *, uint32_t, int &);

	void RelocateBinary(class PalMemoryMapPeBinary *, void *);

	class AbiStatus PerformPageProtection(class PalMemoryMapPeBinary *);

	long unsigned int CalculateChecksum(class PalMemoryMapPeBinary *, void *, ssize_t);

public:

	void ~PalMemoryMapPeBinary(class PalMemoryMapPeBinary *);


	/* size: 208, cachelines: 4, members: 6 */
	/* last cacheline: 16 bytes */
};
class BinaryPeParser {
	bool                       m_is64Bit;            /*     0     1 */
	bool                       m_isCLR;              /*     1     1 */

	/* XXX 6 bytes hole, try to pack */

	off_t                      m_imageHeaderOffset;  /*     8     8 */
	off_t                      m_coffHeaderOffset;   /*    16     8 */
	off_t                      m_peHeaderOffset;     /*    24     8 */
	off_t                      m_sectionTableOffset; /*    32     8 */
	size_t                     m_optionalHeaderSize; /*    40     8 */
	unsigned int               m_numberOfSections;   /*    48     4 */
	uint32_t                   m_sectionAlignment;   /*    52     4 */
	size_t                     m_totalHeaderSize;    /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	uint32_t                   m_sizeOfStackReserveOffset; /*    64     4 */
	uint32_t                   m_sizeOfStackReserveSize; /*    68     4 */
	uint64_t                   m_imageBase;          /*    72     8 */
	size_t                     m_imageLength;        /*    80     8 */
	size_t                     m_imageExtent;        /*    88     8 */
	off_t                      m_entryPointOffset;   /*    96     8 */
	uint32_t                   m_checksum;           /*   104     4 */

	/* XXX 4 bytes hole, try to pack */

	off_t                      m_checksumOffset;     /*   112     8 */
	size_t                     m_checksumSize;       /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	class vector<SectionInformation, std::__1::allocator<SectionInformation> > m_sectionInfo; /*   128    24 */
public:

	void BinaryPeParser(class BinaryPeParser *);

	class SystemStatus Parse(class BinaryPeParser *, class FileInterface &);

	uint64_t GetImageBase(const class BinaryPeParser  *);

	size_t GetImageLength(const class BinaryPeParser  *);

	off_t GetEntryPointOffset(const class BinaryPeParser  *);

	size_t GetHeaderSize(const class BinaryPeParser  *);

	uint32_t GetSectionAlignment(const class BinaryPeParser  *);

	uint32_t GetChecksum(const class BinaryPeParser  *);

	off_t GetChecksumOffset(const class BinaryPeParser  *);

	size_t GetChecksumSize(const class BinaryPeParser  *);

	uint32_t GetSizeOfStackReserveOffset(const class BinaryPeParser  *);

	uint32_t GetSizeOfStackReserveSize(const class BinaryPeParser  *);

	class vector<SectionInformation, std::__1::allocator<SectionInformation> >const GetSectionInformation(const class BinaryPeParser  *);

	void RelocateBinary(class BinaryPeParser *, uint64_t);

	class SystemStatus ReadDosHeader(class BinaryPeParser *, class FileInterface &);

	class SystemStatus ReadCoffHeader(class BinaryPeParser *, class FileInterface &);

	class SystemStatus ReadSectionTable(class BinaryPeParser *, class FileInterface &);

	void ~BinaryPeParser(class BinaryPeParser *);


	/* size: 152, cachelines: 3, members: 20 */
	/* sum members: 142, holes: 2, sum holes: 10 */
	/* last cacheline: 24 bytes */
};
class PalMemoryMappedFileSection : public MemoryMappedFileSection {
public:

	/* class MemoryMappedFileSection <ancestor>; */  /*     0    32 */
	void PalMemoryMappedFileSection(class PalMemoryMappedFileSection *);

	virtual void ~PalMemoryMappedFileSection(class PalMemoryMappedFileSection *);

	class AbiStatus Map(class PalMemoryMappedFileSection *, class File &, void *, size_t, uint64_t, DK_PAGE_PROTECTION);

protected:

	class AbiStatus Load(class PalMemoryMappedFileSection *, class File &, void *, size_t, uint64_t, DK_PAGE_PROTECTION);

	void ConvertPalToMmapProtectionFlags(DK_PAGE_PROTECTION, int &, int &);

	/* vtable has 1 entries: {
	   [0] = ~PalMemoryMappedFileSection((null)), 
	} */
	/* size: 32, cachelines: 1, members: 1 */
	/* last cacheline: 32 bytes */

	/* BRAIN FART ALERT! 32 != 0 + 0(holes), diff = 32 */

};
class MemoryMappedFileSection {
	int ()(void) * *           _vptr$MemoryMappedFileSection; /*     0     8 */
protected:

	bool                       m_isLoaded;           /*     8     1 */

	/* XXX 7 bytes hole, try to pack */

	void *                     m_mappedBase;         /*    16     8 */
	size_t                     m_mappedLength;       /*    24     8 */
public:

	void MemoryMappedFileSection(class MemoryMappedFileSection *);

	virtual void ~MemoryMappedFileSection(class MemoryMappedFileSection *);

	class SystemStatus Map(class MemoryMappedFileSection *, class File &, void *, size_t, uint64_t, int, int);

	class SystemStatus MapAnonymous(class MemoryMappedFileSection *, void *, size_t, int, int);

	class SystemStatus Unmap(class MemoryMappedFileSection *);

	void * GetBaseAddress(class MemoryMappedFileSection *);

	size_t GetLength(class MemoryMappedFileSection *);

protected:

	off_t DetermineMappingSize(class MemoryMappedFileSection *, class File &, size_t, size_t);

	class SystemStatus Load(class MemoryMappedFileSection *, class File &, void *, size_t, size_t, int, int, size_t &);

	class SystemStatus MapInternal(class MemoryMappedFileSection *, void *, size_t, int, int, class File &, off_t, void * &, size_t &);

	/* vtable has 1 entries: {
	   [0] = ~MemoryMappedFileSection((null)), 
	} */
	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 25, holes: 1, sum holes: 7 */
	/* last cacheline: 32 bytes */
};
class NoAllocationInScope {
public:

	void NoAllocationInScope(class NoAllocationInScope *);

	void ~NoAllocationInScope(class NoAllocationInScope *);

	void NoAllocationInScope(class NoAllocationInScope *, const class NoAllocationInScope  &);

	void operator=(class NoAllocationInScope *, const class NoAllocationInScope  &);


	/* size: 1, cachelines: 0, members: 0 */
	/* last cacheline: 1 bytes */
};
class RingBuffer<_HeSocketRingRecord, 1024, ConcurrentRingAllocator<std::__1::mutex> > {
	RingEntry                  m_RingBuffer[0];      /*     0     0 */

	/* XXX 8192 bytes hole, try to pack */
	typedef struct pair<ConcurrentRingAllocator<std::__1::mutex>::Header, _HeSocketRingRecord> RingEntry;


	/* --- cacheline 2176 boundary (139264 bytes) --- */
	Sequence                   m_Sequence;           /* 139264     4 */
public:

	void RingBuffer(class RingBuffer<_HeSocketRingRecord, 1024, ConcurrentRingAllocator<std::__1::mutex> > *);

	void ~RingBuffer(class RingBuffer<_HeSocketRingRecord, 1024, ConcurrentRingAllocator<std::__1::mutex> > *);

	const RingEntry  & GetRingEntry(class RingBuffer<_HeSocketRingRecord, 1024, ConcurrentRingAllocator<std::__1::mutex> > *, size_t);

	void Emplace<_HeSocketRingRecord &>(class RingBuffer<_HeSocketRingRecord, 1024, ConcurrentRingAllocator<std::__1::mutex> > *, class _HeSocketRingRecord &);


	/* size: 139272, cachelines: 2177, members: 2 */
	/* sum members: 4, holes: 1, sum holes: 8192 */
	/* padding: 4 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 139272 != 4 + 8192(holes), diff = 131076 */

};
struct _DK_SOCKET_DEBUG_INFO {
	PVOID                      DbSocket;             /*     0     8 */
	PVOID                      HeSocketStream;       /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct sockaddr {
	sa_family_t                sa_family;            /*     0     2 */
	char                       sa_data[0];           /*     2     0 */

	/* size: 16, cachelines: 1, members: 2 */
	/* padding: 14 */
	/* last cacheline: 16 bytes */
};
struct linger {
	int                        l_onoff;              /*     0     4 */
	int                        l_linger;             /*     4     4 */

	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
struct ifaddrs {
	class ifaddrs *            ifa_next;             /*     0     8 */
	char *                     ifa_name;             /*     8     8 */
	unsigned int               ifa_flags;            /*    16     4 */

	/* XXX 4 bytes hole, try to pack */

	class sockaddr *           ifa_addr;             /*    24     8 */
	class sockaddr *           ifa_netmask;          /*    32     8 */
	union {
		class sockaddr *   ifu_broadaddr;        /*    40     8 */
		class sockaddr *   ifu_dstaddr;          /*    40     8 */
	} ifa_ifu;                                       /*    40     8 */
	union {
		class sockaddr *           ifu_broadaddr;        /*     0     8 */
		class sockaddr *           ifu_dstaddr;          /*     0     8 */
	};

	void *                     ifa_data;             /*    48     8 */

	/* size: 56, cachelines: 1, members: 7 */
	/* sum members: 52, holes: 1, sum holes: 4 */
	/* last cacheline: 56 bytes */
};
class SSList<SocketStream, 8> {
	class SSListEntry *        m_Head;               /*     0     8 */
public:

	void SSList(class SSList<SocketStream, 8> *, class SSListEntry *);

	bool IsEmpty(const class SSList<SocketStream, 8>  *);

	class SocketStream * PopFront(class SSList<SocketStream, 8> *);

	class SocketStream * PeekFront(class SSList<SocketStream, 8> *);


	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
class SSList<_DK_SOCKET_EVENT_LIST, 16> {
	class SSListEntry *        m_Head;               /*     0     8 */
public:

	void SSList(class SSList<_DK_SOCKET_EVENT_LIST, 16> *, class SSListEntry *);

	bool IsEmpty(const class SSList<_DK_SOCKET_EVENT_LIST, 16>  *);

	class _DK_SOCKET_EVENT_LIST * PopFront(class SSList<_DK_SOCKET_EVENT_LIST, 16> *);

	class _DK_SOCKET_EVENT_LIST * PeekFront(class SSList<_DK_SOCKET_EVENT_LIST, 16> *);


	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
class AbiToPlatform {
public:

	int ConvertAccessToFlags(DK_ACCESS_MASK);

	int ConvertDispositionToFlags(DK_STREAM_OPEN_DISPOSITION);

	enum ExtraFileFlags ConvertDispositionToExtraFileFlags(DK_STREAM_OPEN_DISPOSITION);

	int ConvertOptionsFlags(DK_STREAM_OPEN_OPTIONS);

	enum ExtraFileFlags ConvertOptionsToExtraFileFlags(DK_STREAM_OPEN_OPTIONS);

	DKSTATUS ConvertFromErrnoToAbiError(int);

	class AbiStatus GetAttributes(class VfsStream &, DK_STREAM_ATTRIBUTES_V2 &);

	class AbiStatus GetAttributes(const string  &, DK_STREAM_ATTRIBUTES_V2 &);

	int ConvertProtectFlags(DK_PAGE_PROTECTION);

	enum RequestType ConvertStreamShareFlags(DK_STREAM_SHARE_FLAGS);

	void Utf8ToPalUnicodeString(const string  &, UNICODE_STRING &);

	void Utf8ToExistingPalUnicodeString(const string  &, UNICODE_STRING &);

	LONG64 ConvertFromTimeT(time_t);

	LONG64 ConvertFromTimespec(class timespec);

	bool ConvertTimeout(LONG64, class timespec *);


	/* size: 1, cachelines: 0, members: 0 */
	/* last cacheline: 1 bytes */
};
struct _Stream_DK_STREAM_ATTRIBUTES_V2_v2 {
	DK_STREAM_TYPE_FLAGS       Flags;                /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	LONG64                     CreationTime;         /*     8     8 */
	LONG64                     LastWriteTime;        /*    16     8 */
	LONG64                     FileAllocationSize;   /*    24     8 */
	LONG64                     FileLength;           /*    32     8 */
	LONG64                     TotalDirectorySize;   /*    40     8 */
	LONG64                     AvailableDirectorySize; /*    48     8 */
	ULONG                      LogicalBlockSize;     /*    56     4 */
	ULONG                      PhysicalBlockSize;    /*    60     4 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	ULONG                      UniqueIdLength;       /*    64     4 */

	/* XXX 4 bytes hole, try to pack */

	M128                       UniqueId;             /*    72    16 */
	LONG                       PmmNumaNtNodeId;      /*    88     4 */

	/* XXX 4 bytes hole, try to pack */

	PVOID                      PmmMapAddr;           /*    96     8 */

	/* size: 104, cachelines: 2, members: 13 */
	/* sum members: 92, holes: 3, sum holes: 12 */
	/* last cacheline: 40 bytes */
};
class KerberosCredStore {
	gss_key_value_set_desc     m_credStoreData;      /*     0    16 */
	struct gss_key_value_element_struct m_element;   /*    16    16 */
	string                     m_keytabFilePath;     /*    32    24 */
public:

	void KerberosCredStore(class KerberosCredStore *);

	void ~KerberosCredStore(class KerberosCredStore *);

	gss_const_key_value_set_t GetCredStore(class KerberosCredStore *);


	/* size: 56, cachelines: 1, members: 3 */
	/* last cacheline: 56 bytes */
};
struct gss_key_value_set_struct {
	OM_uint32                  count;                /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	gss_key_value_element_desc * elements;           /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
struct gss_key_value_element_struct {
	const char  *              key;                  /*     0     8 */
	const char  *              value;                /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct KerberosContext {
	gss_ctx_id_t               context;              /*     0     8 */
	class shared_ptr<KerberosCredential> credentialPtr; /*     8    16 */
	void KerberosContext(class KerberosContext *);

	void ~KerberosContext(class KerberosContext *);


	/* size: 24, cachelines: 1, members: 2 */
	/* last cacheline: 24 bytes */
};
struct KerberosCredential {
	class RWLock              credLock;              /*     0   128 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	GssCredPtr                 credentialHandlePtr;  /*   128    16 */
	class unique_ptr<AutoCCache, std::__1::default_delete<AutoCCache> > ccachePtr; /*   144     8 */
	void KerberosCredential(class KerberosCredential *);

	void KerberosCredential(class KerberosCredential *, gss_cred_id_t);

	void KerberosCredential(class KerberosCredential *, gss_cred_id_t, );

	void ~KerberosCredential(class KerberosCredential *);


	/* size: 152, cachelines: 3, members: 3 */
	/* last cacheline: 24 bytes */
};
class AutoCCache {
	class AutoKrb5Context     m_context;             /*     0    16 */

	/* XXX last struct has 4 bytes of padding */

	krb5_ccache                m_ccache;             /*    16     8 */
	krb5_error_code            m_errorCode;          /*    24     4 */

	/* XXX 4 bytes hole, try to pack */

	string                     m_name;               /*    32    24 */
	string                     m_principalName;      /*    56    24 */
public:

	void AutoCCache(class AutoCCache *, const string  &);

	void ~AutoCCache(class AutoCCache *);

	krb5_error_code GetError(const class AutoCCache  *);

	const string  & GetName(const class AutoCCache  *);

	bool Success(const class AutoCCache  *);

	string ToString(const class AutoCCache  *);

	void AutoCCache(class AutoCCache *, const class AutoCCache  &);

	class AutoCCache & operator=(class AutoCCache *, const class AutoCCache  &);


	/* size: 80, cachelines: 2, members: 5 */
	/* sum members: 76, holes: 1, sum holes: 4 */
	/* paddings: 1, sum paddings: 4 */
	/* last cacheline: 16 bytes */
};
class AutoKrb5Context {
	krb5_context               m_context;            /*     0     8 */
	krb5_error_code            m_errorCode;          /*     8     4 */
public:

	void AutoKrb5Context(class AutoKrb5Context *);

	void ~AutoKrb5Context(class AutoKrb5Context *);

	krb5_error_code GetError(const class AutoKrb5Context  *);

	bool Success(const class AutoKrb5Context  *);

	krb5_context operator _krb5_context *(class AutoKrb5Context *);

	void AutoKrb5Context(class AutoKrb5Context *, const class AutoKrb5Context  &);

	class AutoKrb5Context & operator=(class AutoKrb5Context *, const class AutoKrb5Context  &);


	/* size: 16, cachelines: 1, members: 2 */
	/* padding: 4 */
	/* last cacheline: 16 bytes */
};
struct gss_channel_bindings_struct {
	OM_uint32                  initiator_addrtype;   /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	gss_buffer_desc            initiator_address;    /*     8    16 */
	OM_uint32                  acceptor_addrtype;    /*    24     4 */

	/* XXX 4 bytes hole, try to pack */

	gss_buffer_desc            acceptor_address;     /*    32    16 */
	gss_buffer_desc            application_data;     /*    48    16 */

	/* size: 64, cachelines: 1, members: 5 */
	/* sum members: 56, holes: 2, sum holes: 8 */
};
class SecPkgContextBase {
	enum SECPKGCONTEXT_ATTR_ABI attribute;           /*     0     4 */
public:

	void SecPkgContextBase(class SecPkgContextBase *, enum SECPKGCONTEXT_ATTR_ABI);

	enum SECPKGCONTEXT_ATTR_ABI GetAttributeType(class SecPkgContextBase *);


	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
class SecPkgContextNames : public SecPkgContextBase {
public:

	/* class SecPkgContextBase   <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	char *                     nameBuffer;           /*     8     8 */
	ULONGconst                 nameBufferSize;       /*    16     4 */
	void SecPkgContextNames(class SecPkgContextNames *, char *, ULONGconst);


	/* size: 24, cachelines: 1, members: 3 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* padding: 4 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 24 != 12 + 4(holes), diff = 8 */

};
class AutoCCacheNameChange {
	string                     m_oldCCacheName;      /*     0    24 */
	bool                       m_success;            /*    24     1 */
public:

	void AutoCCacheNameChange(class AutoCCacheNameChange *);

	void AutoCCacheNameChange(class AutoCCacheNameChange *, const string  &);

	void ~AutoCCacheNameChange(class AutoCCacheNameChange *);

	void ResetCCacheName(class AutoCCacheNameChange *);

	bool SetCCacheName(class AutoCCacheNameChange *, const string  &);

	bool Success(const class AutoCCacheNameChange  *);

	void AutoCCacheNameChange(class AutoCCacheNameChange *, const class AutoCCacheNameChange  &);

	class AutoCCacheNameChange & operator=(class AutoCCacheNameChange *, const class AutoCCacheNameChange  &);


	/* size: 32, cachelines: 1, members: 2 */
	/* padding: 7 */
	/* last cacheline: 32 bytes */
};
class SecureCString {
public:

	error_t strcpy_s(char *, size_t, const char  *);

	error_t strcat_s(char *, size_t, const char  *);

	error_t TerminateAndPadCString(char *, size_t);

	error_t PadCString(char *, size_t);


	/* size: 1, cachelines: 0, members: 0 */
	/* last cacheline: 1 bytes */
};
class Krb5Conf {
protected:

	class RWLock              m_rwLock;              /*     0   128 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	time_t                     m_mtime;              /*   128     8 */
	class map<std::__1::basic_string<char>, std::__1::atomic<int>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::atomic<int> > > > m_domainKDCMap; /*   136    24 */
	profile_t                  m_profile;            /*   160     8 */
	class AutoKrb5Context     m_context;             /*   168    16 */

	/* XXX last struct has 4 bytes of padding */

	bool                       m_initialized;        /*   184     1 */
public:

	void Krb5Conf(class Krb5Conf *);

	void ~Krb5Conf(class Krb5Conf *);

	string GetKdc(class Krb5Conf *, const string  &);

protected:

	krb5_error_code ProfileLookup(class Krb5Conf *, const const char  *  *, char * * *);

	krb5_error_code DomainToRealm(class Krb5Conf *, const string  &, string &);

	krb5_error_code GetKDCsForRealm(class Krb5Conf *, const string  &, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > &);

	bool IsValidKDC(class Krb5Conf *, const string  &, bool);

	string StripKDC(class Krb5Conf *, const char  *);

	string GetKrb5ConfFile(class Krb5Conf *);


	/* size: 192, cachelines: 3, members: 6 */
	/* padding: 7 */
	/* paddings: 1, sum paddings: 4 */
};
struct timeval {
	__time_t                   tv_sec;               /*     0     8 */
	__suseconds_t              tv_usec;              /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct sasl_interact {
	long unsigned int          id;                   /*     0     8 */
	const char  *              challenge;            /*     8     8 */
	const char  *              prompt;               /*    16     8 */
	const char  *              defresult;            /*    24     8 */
	const void  *              result;               /*    32     8 */
	unsigned int               len;                  /*    40     4 */

	/* size: 48, cachelines: 1, members: 6 */
	/* padding: 4 */
	/* last cacheline: 48 bytes */
};
struct _SID {
	unsigned char              Revision;             /*     0     1 */
	unsigned char              SubAuthorityCount;    /*     1     1 */
	SID_IDENTIFIER_AUTHORITY   IdentifierAuthority;  /*     2     6 */
	unsigned int               SubAuthority[0];      /*     8     0 */

	/* size: 8, cachelines: 1, members: 4 */
	/* last cacheline: 8 bytes */
};
struct _SID_IDENTIFIER_AUTHORITY {
	unsigned char              Value[0];             /*     0     0 */

	/* size: 6, cachelines: 1, members: 1 */
	/* padding: 6 */
	/* last cacheline: 6 bytes */
};
struct krb5_principal_data {
	krb5_magic                 magic;                /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	krb5_data                  realm;                /*     8    16 */
	krb5_data *                data;                 /*    24     8 */
	krb5_int32                 length;               /*    32     4 */
	krb5_int32                 type;                 /*    36     4 */

	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 36, holes: 1, sum holes: 4 */
	/* last cacheline: 40 bytes */
};
struct _krb5_data {
	krb5_magic                 magic;                /*     0     4 */
	unsigned int               length;               /*     4     4 */
	char *                     data;                 /*     8     8 */

	/* size: 16, cachelines: 1, members: 3 */
	/* last cacheline: 16 bytes */
};
struct _krb5_creds {
	krb5_magic                 magic;                /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	krb5_principal             client;               /*     8     8 */
	krb5_principal             server;               /*    16     8 */
	krb5_keyblock              keyblock;             /*    24    24 */
	krb5_ticket_times          times;                /*    48    16 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	krb5_boolean               is_skey;              /*    64     4 */
	krb5_flags                 ticket_flags;         /*    68     4 */
	krb5_address * *           addresses;            /*    72     8 */
	krb5_data                  ticket;               /*    80    16 */
	krb5_data                  second_ticket;        /*    96    16 */
	krb5_authdata * *          authdata;             /*   112     8 */

	/* size: 120, cachelines: 2, members: 11 */
	/* sum members: 116, holes: 1, sum holes: 4 */
	/* last cacheline: 56 bytes */
};
struct _krb5_keyblock {
	krb5_magic                 magic;                /*     0     4 */
	krb5_enctype               enctype;              /*     4     4 */
	unsigned int               length;               /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	krb5_octet *               contents;             /*    16     8 */

	/* size: 24, cachelines: 1, members: 4 */
	/* sum members: 20, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */
};
struct _krb5_ticket_times {
	krb5_timestamp             authtime;             /*     0     4 */
	krb5_timestamp             starttime;            /*     4     4 */
	krb5_timestamp             endtime;              /*     8     4 */
	krb5_timestamp             renew_till;           /*    12     4 */

	/* size: 16, cachelines: 1, members: 4 */
	/* last cacheline: 16 bytes */
};
struct _krb5_address {
	krb5_magic                 magic;                /*     0     4 */
	krb5_addrtype              addrtype;             /*     4     4 */
	unsigned int               length;               /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	krb5_octet *               contents;             /*    16     8 */

	/* size: 24, cachelines: 1, members: 4 */
	/* sum members: 20, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */
};
struct _krb5_authdata {
	krb5_magic                 magic;                /*     0     4 */
	krb5_authdatatype          ad_type;              /*     4     4 */
	unsigned int               length;               /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	krb5_octet *               contents;             /*    16     8 */

	/* size: 24, cachelines: 1, members: 4 */
	/* sum members: 20, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */
};
class LdapConnection {
public:

	int StaticInit(void);

	void StaticShutdown(void);

	int SaslInteract(LDAP *, unsigned int, void *, void *);

	string GetKdcUri(const string  &, bool);

	int InitializeAndBind(LDAP * *, const string  &);

	int Connect(LDAP * *, const string  &);

	int SidToString(const class vector<char, std::__1::allocator<char> >  &, string &);

	int GetAttribute(LdapConnectionPtr &, LDAPMessage * &, const string  &, class vector<char, std::__1::allocator<char> > &);

	int GetMultiAttrByAttr(const string  &, const string  &, const class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >  &, const string  &, class vector<std::__1::vector<char, std::__1::allocator<char> >, std::__1::allocator<std::__1::vector<char, std::__1::allocator, void *);

	int GetAttrByAttr(const string  &, const string  &, const string  &, const string  &, class vector<char, std::__1::allocator<char> > &, void *);

	int GetSidByName(const string  &, string &, void *);

	int GetNameBySid(const string  &, string &, void *);

	int ParseUserName(const string  &, string &, string &);

	int CreateCCache(const string  &, const string  &, const string  &);

	int NeedToUpdateCCache(Krb5Context &, const string  &, Krb5CCache &, bool *);

	int NeedToUpdateCCache(Krb5Context &, Krb5CCache &, bool *);

	int UpdateCCache(const string  &);

	int CreateOrUpdateCCache(void);

	int SetupCCache(void);

	int DestroyCCache(void);

	void PrintKrb5Error(const char  *, Krb5Context &, krb5_error_code);

	void PrintKrb5Debug(const char  *, Krb5Context &, krb5_error_code);

	int HostnameToFqdn(const string  &, string &);

	int FqdnToDistName(const string  &, string &);

	int GetDomainName(string &);

	int DistNameToFqdn(const string  &, string &);

	int ShortDomainToFqdn(const string  &, string &);

	void LogCCacheInfo(Krb5Context &, const string  &);

	void LogCCacheInfo(void);

	class function<void (ldap *)> LdapConnectionDeleter(LDAPControl * *, LDAPControl * *);

	bool IsMachineDomainJoined(void);

	bool IsSSSDEnabled(void);


	/* size: 1, cachelines: 0, members: 0 */
	/* last cacheline: 1 bytes */
};
struct ldapcontrol {
	char *                     ldctl_oid;            /*     0     8 */
	struct berval              ldctl_value;          /*     8    16 */
	char                       ldctl_iscritical;     /*    24     1 */

	/* size: 32, cachelines: 1, members: 3 */
	/* padding: 7 */
	/* last cacheline: 32 bytes */
};
struct berval {
	ber_len_t                  bv_len;               /*     0     8 */
	char *                     bv_val;               /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct addrinfo {
	int                        ai_flags;             /*     0     4 */
	int                        ai_family;            /*     4     4 */
	int                        ai_socktype;          /*     8     4 */
	int                        ai_protocol;          /*    12     4 */
	socklen_t                  ai_addrlen;           /*    16     4 */

	/* XXX 4 bytes hole, try to pack */

	class sockaddr *           ai_addr;              /*    24     8 */
	char *                     ai_canonname;         /*    32     8 */
	class addrinfo *           ai_next;              /*    40     8 */

	/* size: 48, cachelines: 1, members: 8 */
	/* sum members: 44, holes: 1, sum holes: 4 */
	/* last cacheline: 48 bytes */
};
class ConfigureOpenSSL {
	static OPENSSL_LOCKS *            sm_lockBag     /*     0     0 */
public:

	class AbiStatus InitializeOpenSSL(void);

	void ShutdownOpenSSL(void);

	void OpenSSLLockingCallback(int, int, const char  *, int);

	void OpenSSLThreadIdCallback(CRYPTO_THREADID *);

	bool VersionCheck(void);


	/* size: 1, cachelines: 0, members: 0, static members: 1 */
	/* last cacheline: 1 bytes */
};
struct _OPENSSL_LOCKS {
	int                        count;                /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	pthread_rwlock_t *         locks;                /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
struct crypto_threadid_st {
	int                        dummy;                /*     0     4 */

	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
struct STREAM_SIZES_ABI {
	ULONG                      cbSchannelHeaderLength; /*     0     4 */
	ULONG                      cbSchannelTrailerLength; /*     4     4 */

	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
struct SecHandle_ABI {
	ULONG_PTR                  dwLower;              /*     0     8 */
	ULONG_PTR                  dwUpper;              /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct SslState {
	bool                       failBit;              /*     0     1 */

	/* XXX 3 bytes hole, try to pack */

	int                        decryptionOffset;     /*     4     4 */
	int                        cbSchannelHeaderLength; /*     8     4 */
	int                        cbSchannelTrailerLength; /*    12     4 */
	void SslState(class SslState *);


	/* size: 16, cachelines: 1, members: 4 */
	/* sum members: 13, holes: 1, sum holes: 3 */
	/* last cacheline: 16 bytes */
};
class X509CertificateVerifier {
	static intconst                   X509_V_UNINITIALIZED = 1; /*     0     0 */
	static int                        s_x509StoreExDataIdx /*     0     0 */
	static int                        s_sslExDataIdx /*     0     0 */
	const char  *const         m_hostName;           /*     0     8 */
	size_tconst                m_hostNameLength;     /*     8     8 */
	int                        m_err;                /*    16     4 */
public:

	long unsigned int Initialize(void);

	int VerifyCallback(int, X509_STORE_CTX *);

	int SkipVerifyCallback(int, X509_STORE_CTX *);

	void X509CertificateVerifier(class X509CertificateVerifier *, const char  *);

	int GetSSLExDataIdx(void);

	int GetLastError(const class X509CertificateVerifier  *);

	long unsigned int GetResult(const class X509CertificateVerifier  *);

	void X509CertificateVerifier(class X509CertificateVerifier *, const class X509CertificateVerifier  &);

	class X509CertificateVerifier & operator=(class X509CertificateVerifier *, const class X509CertificateVerifier  &);

	int VerifyCertificate(class X509CertificateVerifier *, int, X509_STORE_CTX *);

	bool CertificateSubjectMatchesHost(const class X509CertificateVerifier  *, X509 *);

	bool SubjectNameMatchesHostName(const char  *, size_t, const char  *, size_t);


	/* size: 24, cachelines: 1, members: 3, static members: 3 */
	/* padding: 4 */
	/* last cacheline: 24 bytes */
};
struct GENERAL_NAME_st {
	int                        type;                 /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	union {
		char *             ptr;                  /*     8     8 */
		OTHERNAME *        otherName;            /*     8     8 */
		ASN1_IA5STRING *   rfc822Name;           /*     8     8 */
		ASN1_IA5STRING *   dNSName;              /*     8     8 */
		ASN1_TYPE *        x400Address;          /*     8     8 */
		X509_NAME *        directoryName;        /*     8     8 */
		EDIPARTYNAME *     ediPartyName;         /*     8     8 */
		ASN1_IA5STRING *   uniformResourceIdentifier; /*     8     8 */
		ASN1_OCTET_STRING * iPAddress;           /*     8     8 */
		ASN1_OBJECT *      registeredID;         /*     8     8 */
		ASN1_OCTET_STRING * ip;                  /*     8     8 */
		X509_NAME *        dirn;                 /*     8     8 */
		ASN1_IA5STRING *   ia5;                  /*     8     8 */
		ASN1_OBJECT *      rid;                  /*     8     8 */
		ASN1_TYPE *        other;                /*     8     8 */
	} d;                                             /*     8     8 */
	union {
		char *                     ptr;                  /*     0     8 */
		OTHERNAME *                otherName;            /*     0     8 */
		ASN1_IA5STRING *           rfc822Name;           /*     0     8 */
		ASN1_IA5STRING *           dNSName;              /*     0     8 */
		ASN1_TYPE *                x400Address;          /*     0     8 */
		X509_NAME *                directoryName;        /*     0     8 */
		EDIPARTYNAME *             ediPartyName;         /*     0     8 */
		ASN1_IA5STRING *           uniformResourceIdentifier; /*     0     8 */
		ASN1_OCTET_STRING *        iPAddress;            /*     0     8 */
		ASN1_OBJECT *              registeredID;         /*     0     8 */
		ASN1_OCTET_STRING *        ip;                   /*     0     8 */
		X509_NAME *                dirn;                 /*     0     8 */
		ASN1_IA5STRING *           ia5;                  /*     0     8 */
		ASN1_OBJECT *              rid;                  /*     0     8 */
		ASN1_TYPE *                other;                /*     0     8 */
	};


	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
struct otherName_st {
	ASN1_OBJECT *              type_id;              /*     0     8 */
	ASN1_TYPE *                value;                /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct asn1_type_st {
	int                        type;                 /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	union {
		char *             ptr;                  /*     8     8 */
		ASN1_BOOLEAN       boolean;              /*     8     4 */
		ASN1_STRING *      asn1_string;          /*     8     8 */
		ASN1_OBJECT *      object;               /*     8     8 */
		ASN1_INTEGER *     integer;              /*     8     8 */
		ASN1_ENUMERATED *  enumerated;           /*     8     8 */
		ASN1_BIT_STRING *  bit_string;           /*     8     8 */
		ASN1_OCTET_STRING * octet_string;        /*     8     8 */
		ASN1_PRINTABLESTRING * printablestring;  /*     8     8 */
		ASN1_T61STRING *   t61string;            /*     8     8 */
		ASN1_IA5STRING *   ia5string;            /*     8     8 */
		ASN1_GENERALSTRING * generalstring;      /*     8     8 */
		ASN1_BMPSTRING *   bmpstring;            /*     8     8 */
		ASN1_UNIVERSALSTRING * universalstring;  /*     8     8 */
		ASN1_UTCTIME *     utctime;              /*     8     8 */
		ASN1_GENERALIZEDTIME * generalizedtime;  /*     8     8 */
		ASN1_VISIBLESTRING * visiblestring;      /*     8     8 */
		ASN1_UTF8STRING *  utf8string;           /*     8     8 */
		ASN1_STRING *      set;                  /*     8     8 */
		ASN1_STRING *      sequence;             /*     8     8 */
		ASN1_VALUE *       asn1_value;           /*     8     8 */
	} value;                                         /*     8     8 */
	union {
		char *                     ptr;                  /*     0     8 */
		ASN1_BOOLEAN               boolean;              /*     0     4 */
		ASN1_STRING *              asn1_string;          /*     0     8 */
		ASN1_OBJECT *              object;               /*     0     8 */
		ASN1_INTEGER *             integer;              /*     0     8 */
		ASN1_ENUMERATED *          enumerated;           /*     0     8 */
		ASN1_BIT_STRING *          bit_string;           /*     0     8 */
		ASN1_OCTET_STRING *        octet_string;         /*     0     8 */
		ASN1_PRINTABLESTRING *     printablestring;      /*     0     8 */
		ASN1_T61STRING *           t61string;            /*     0     8 */
		ASN1_IA5STRING *           ia5string;            /*     0     8 */
		ASN1_GENERALSTRING *       generalstring;        /*     0     8 */
		ASN1_BMPSTRING *           bmpstring;            /*     0     8 */
		ASN1_UNIVERSALSTRING *     universalstring;      /*     0     8 */
		ASN1_UTCTIME *             utctime;              /*     0     8 */
		ASN1_GENERALIZEDTIME *     generalizedtime;      /*     0     8 */
		ASN1_VISIBLESTRING *       visiblestring;        /*     0     8 */
		ASN1_UTF8STRING *          utf8string;           /*     0     8 */
		ASN1_STRING *              set;                  /*     0     8 */
		ASN1_STRING *              sequence;             /*     0     8 */
		ASN1_VALUE *               asn1_value;           /*     0     8 */
	};


	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
struct asn1_string_st {
	int                        length;               /*     0     4 */
	int                        type;                 /*     4     4 */
	unsigned char *            data;                 /*     8     8 */
	long int                   flags;                /*    16     8 */

	/* size: 24, cachelines: 1, members: 4 */
	/* last cacheline: 24 bytes */
};
struct EDIPartyName_st {
	ASN1_STRING *              nameAssigner;         /*     0     8 */
	ASN1_STRING *              partyName;            /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
class DefaultOpenSSLLibraryInterface : public OpenSSLLibraryInterface {
public:

	/* class OpenSSLLibraryInterface <ancestor>; */  /*     0     8 */
	virtual long unsigned int GetOpenSslVersion(const class DefaultOpenSSLLibraryInterface  *);

	virtual SSL_CTX * SSL_CTX_new(const class DefaultOpenSSLLibraryInterface  *, const SSL_METHOD  *);

	virtual int SSL_set_tlsext_host_name_(const class DefaultOpenSSLLibraryInterface  *, const SSL  *, const char  *);

	virtual void ~DefaultOpenSSLLibraryInterface(class DefaultOpenSSLLibraryInterface *);

	void DefaultOpenSSLLibraryInterface(class DefaultOpenSSLLibraryInterface *);

	/* vtable has 4 entries: {
	   [2] = GetOpenSslVersion((null)), 
	   [3] = SSL_CTX_new((null)), 
	   [4] = SSL_set_tlsext_host_name_((null)), 
	   [0] = ~DefaultOpenSSLLibraryInterface((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */

	/* BRAIN FART ALERT! 8 != 0 + 0(holes), diff = 8 */

};
class OpenSSLLibraryInterface {
	int ()(void) * *           _vptr$OpenSSLLibraryInterface; /*     0     8 */
public:

	virtual void ~OpenSSLLibraryInterface(class OpenSSLLibraryInterface *);

	virtual long unsigned int GetOpenSslVersion(const class OpenSSLLibraryInterface  *) = 0;

	virtual SSL_CTX * SSL_CTX_new(const class OpenSSLLibraryInterface  *, const SSL_METHOD  *) = 0;

	virtual int SSL_set_tlsext_host_name_(const class OpenSSLLibraryInterface  *, const SSL  *, const char  *) = 0;

	/* vtable has 4 entries: {
	   [0] = ~OpenSSLLibraryInterface((null)), 
	   [2] = GetOpenSslVersion((null)), 
	   [3] = SSL_CTX_new((null)), 
	   [4] = SSL_set_tlsext_host_name_((null)), 
	} */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct _DK_PROTECTDATA_IO_PARAMS {
	int                        InputSize;            /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	void *                     Input;                /*     8     8 */
	int *                      OutputSize;           /*    16     8 */
	void *                     Output;               /*    24     8 */

	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 28, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */
};
struct _PROTECTDATA_BLOB_HEADER {
	ULONG                      Version;              /*     0     4 */
	GUID                       GuidVersion;          /*     4    16 */
	ULONG                      SubVersion;           /*    20     4 */
	GUID                       MasterKeyGuid;        /*    24    16 */

	/* size: 40, cachelines: 1, members: 4 */
	/* last cacheline: 40 bytes */
};
struct _PROTECTDATA_FILE_HEADER {
	ULONG                      Version;              /*     0     4 */
	ULONG                      Reserved;             /*     4     4 */
	ULONG                      Reserved2;            /*     8     4 */

	/* size: 12, cachelines: 1, members: 3 */
	/* last cacheline: 12 bytes */
};
class Checksum {
	uint16_t                   m_partialChecksum;    /*     0     2 */
public:

	void Checksum(class Checksum *);

	uint16_t GetChecksum(const class Checksum  *);

	void CalculateChecksum(class Checksum *, uint16_t *, long unsigned int);

	void CalculateChecksumLe(class Checksum *, uint16le_t *, long unsigned int);


	/* size: 2, cachelines: 1, members: 1 */
	/* last cacheline: 2 bytes */
};
class SbtUtil {
public:

	void Initialize(void);

	void Shutdown(void);

	bool ReportModuleLoad(class File &, uintptr_t, size_t);

	void ReportStreamUnmap(uintptr_t);


	/* size: 1, cachelines: 0, members: 0 */
	/* last cacheline: 1 bytes */
};
struct ResourceRecordCore {
	uint16_t                   Type;                 /*     0     2 */
	uint16_t                   Class;                /*     2     2 */
	uint32_t                   Ttl;                  /*     4     4 */
	uint16_t                   RdLength;             /*     8     2 */

	/* size: 10, cachelines: 1, members: 4 */
	/* last cacheline: 10 bytes */
};
class SymKeyParams {
	enum SYMKEY_OPERATION      m_SymKeyOperation;    /*     0     4 */
public:

	void SymKeyParams(class SymKeyParams *, enum SYMKEY_OPERATION);

	enum SYMKEY_OPERATION GetOperationType(const class SymKeyParams  *);


	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
class SymKeyEncryptDecryptParams : public SymKeyParams {
public:

	/* class SymKeyParams        <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	PUCHAR                     key;                  /*     8     8 */
	ULONG                      keyLen;               /*    16     4 */

	/* XXX 4 bytes hole, try to pack */

	PUCHAR                     input;                /*    24     8 */
	ULONG                      inputLen;             /*    32     4 */

	/* XXX 4 bytes hole, try to pack */

	PUCHAR                     iv;                   /*    40     8 */
	ULONG                      ivLen;                /*    48     4 */

	/* XXX 4 bytes hole, try to pack */

	PUCHAR                     output;               /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	ULONG                      outputLen;            /*    64     4 */

	/* XXX 4 bytes hole, try to pack */

	ULONG *                    pResultLen;           /*    72     8 */
	bool                       hasPadding;           /*    80     1 */

	/* XXX 7 bytes hole, try to pack */

	const void  *              algorithm;            /*    88     8 */
	void * *                   ppContext;            /*    96     8 */
	bool                       encrypt;              /*   104     1 */
	void SymKeyEncryptDecryptParams(class SymKeyEncryptDecryptParams *, PUCHAR, ULONG, PUCHAR, ULONG, PUCHAR, ULONG, PUCHAR, ULONG, ULONG *, bool, const void  *, void * *, bool);


	/* size: 112, cachelines: 2, members: 14 */
	/* sum members: 74, holes: 6, sum holes: 27 */
	/* padding: 7 */
	/* last cacheline: 48 bytes */

	/* BRAIN FART ALERT! 112 != 74 + 27(holes), diff = 11 */

};
class SymKeyDestroyParams : public SymKeyParams {
public:

	/* class SymKeyParams        <ancestor>; */      /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	void *                     pContext;             /*     8     8 */
	void SymKeyDestroyParams(class SymKeyDestroyParams *, void *);


	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 8, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */

	/* BRAIN FART ALERT! 16 != 8 + 4(holes), diff = 4 */

};
struct pam_conv {
	int                        (*conv)(int, const class pam_message  * *, class pam_response * *, void *); /*     0     8 */
	void *                     appdata_ptr;          /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
class Debugger {
	static volatile unsigned int      m_ProtocolVersion /*     0     0 */
	static volatile bool              m_IsAttached   /*     0     0 */
	static class mutex               m_ThreadMutex   /*     0     0 */
	static class InfoList<int, Debugger::ThreadInfo> m_Threads /*     0     0 */
	class InfoList<int, Debugger::ThreadInfo> {

		/* size: 0, cachelines: 0, members: 0 */
	};

	static class mutex               m_ModuleMutex   /*     0     0 */
	static class InfoList<unsigned long, Debugger::ModuleInfo> m_Modules /*     0     0 */
	class InfoList<unsigned long, Debugger::ModuleInfo> {

		/* size: 0, cachelines: 0, members: 0 */
	};

	static class mutex               m_EnclaveMutex  /*     0     0 */
	static class InfoList<const void *, Debugger::EnclaveInfo> m_Enclaves /*     0     0 */
	class InfoList<const void *, Debugger::EnclaveInfo> {

		/* size: 0, cachelines: 0, members: 0 */
	};

	static class InfoList<const void *, Debugger::EnclaveThreadInfo> m_EnclaveThreads /*     0     0 */
	class InfoList<const void *, Debugger::EnclaveThreadInfo> {

		/* size: 0, cachelines: 0, members: 0 */
	};

	static bool                       m_SignalParentOnAbort /*     0     0 */
	static void *                     m_EmptyListHead[0] /*     0     0 */
	static bool                       m_IsTestingMode /*     0     0 */
	static class MirrorsLoader       mirrorsLoader   /*     0     0 */
	class MirrorsLoader {
	public:

		void MirrorsLoader(class MirrorsLoader *);


		/* size: 1, cachelines: 0, members: 0 */
		/* last cacheline: 1 bytes */
	};

public:

	bool GetIsAttached(void);

	void ReportThreadCreated(uintptr_t, class dk_thread *, uintptr_t);

	void ReportThreadExited(void);

	void ReportProcessExitedEvent(unsigned int);

	void ReportModuleLoaded(const char  *, uintptr_t, uintptr_t);

	void ReportStreamUnmap(uintptr_t);

	void ReportEnclaveCreated(const void  *, size_t, bool);

	void ReportEnclaveRemoved(const void  *);

	void ReportEnclaveThreadCreated(const void  *);

	void ReportEnclavePageRemoved(const void  *);

	bool IsLibOsStack(uintptr_t);

	void SetSignalParentOnAbort(void);

	bool GetSignalParentOnAbort(void);

	uintptr_t GetThreadInfoHeadAddress(void);

	uintptr_t GetModuleInfoHeadAddress(void);

	uintptr_t GetProtocolVersionAddress(void);

	void TurnOnTestingMode(void);

	void ReportThreadCreatedEvent(void);

	void ReportThreadExitedEvent(void);

	void ReportModuleLoadedEvent(void);

	void ReportModuleUnloadedEvent(void);

	void ReportEnclaveEvent(void);


	/* size: 1, cachelines: 0, members: 0, static members: 13 */
	/* last cacheline: 1 bytes */
};
struct flock {
	short                      l_type;               /*     0     2 */
	short                      l_whence;             /*     2     2 */

	/* XXX 4 bytes hole, try to pack */

	__off_t                    l_start;              /*     8     8 */
	__off_t                    l_len;                /*    16     8 */
	__pid_t                    l_pid;                /*    24     4 */

	/* size: 32, cachelines: 1, members: 5 */
	/* sum members: 24, holes: 1, sum holes: 4 */
	/* padding: 4 */
	/* last cacheline: 32 bytes */
};
struct aioinit {
	int                        aio_threads;          /*     0     4 */
	int                        aio_num;              /*     4     4 */
	int                        aio_locks;            /*     8     4 */
	int                        aio_usedba;           /*    12     4 */
	int                        aio_debug;            /*    16     4 */
	int                        aio_numusers;         /*    20     4 */
	int                        aio_idle_time;        /*    24     4 */
	int                        aio_reserved;         /*    28     4 */

	/* size: 32, cachelines: 1, members: 8 */
	/* last cacheline: 32 bytes */
};
struct rlimit {
	rlim_t                     rlim_cur;             /*     0     8 */
	rlim_t                     rlim_max;             /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct _SECONDARY_PAL_PARAMETERS {
	ULONG                      HeaderLength;         /*     0     4 */
	ULONG                      Length;               /*     4     4 */
	struct {
		ULONG64            ParametersBaseAddress; /*     8     8 */
		ULONG64            ParametersLength;     /*    16     8 */
		SECONDARY_PAL_PARAMETER_FIELD StartModuleUri; /*    24     8 */
	} LibraryOs;                                     /*     8    24 */
	struct {
		ULONG64                    ParametersBaseAddress; /*     0     8 */
		ULONG64                    ParametersLength;     /*     8     8 */
		SECONDARY_PAL_PARAMETER_FIELD StartModuleUri;    /*    16     8 */

		/* size: 24, cachelines: 1, members: 3 */
		/* last cacheline: 24 bytes */
	};


	/* size: 32, cachelines: 1, members: 3 */
	/* last cacheline: 32 bytes */
};
struct _SECONDARY_PAL_PARAMETER_FIELD {
	ULONG                      DataOffset;           /*     0     4 */
	ULONG                      Length;               /*     4     4 */

	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
struct UNIONFS_COMPONENT {
	struct PARAMETER_DESCRIPTOR LibOsUri;            /*     0     8 */
	struct PARAMETER_DESCRIPTOR AbiUri;              /*     8     8 */
	enum UNIONFS_COMPONENT_FLAGS Flags;              /*    16     4 */
	struct PARAMETER_DESCRIPTOR NextComponent;       /*    20     8 */

	/* size: 28, cachelines: 1, members: 4 */
	/* last cacheline: 28 bytes */
};
struct LOADER_PROCESSOR_CONFIGURATION {
	ULONG                      ProcessorGroupCount;  /*     0     4 */
	ULONG                      ProcessorGroupDataSize; /*     4     4 */
	ULONG                      ProcessorPackageCount; /*     8     4 */
	ULONG                      ProcessorPackageDataSize; /*    12     4 */
	ULONG                      NumaNodeCount;        /*    16     4 */
	ULONG                      NumaNodeDataSize;     /*    20     4 */
	ULONG                      ProcessorCoreCount;   /*    24     4 */
	ULONG                      ProcessorCoreDataSize; /*    28     4 */

	/* size: 32, cachelines: 1, members: 8 */
	/* last cacheline: 32 bytes */
};
struct LOADER_PROCESSOR_GROUP_INFO {
	UCHAR                      MaximumProcessorCount; /*     0     1 */
	UCHAR                      ActiveProcessorCount; /*     1     1 */
	UCHAR                      Reserved[0];          /*     2     0 */

	/* XXX 38 bytes hole, try to pack */

	ULONG_PTR                  ActiveProcessorMask;  /*    40     8 */

	/* size: 48, cachelines: 1, members: 4 */
	/* sum members: 10, holes: 1, sum holes: 38 */
	/* last cacheline: 48 bytes */
};
struct LOADER_PROCESSOR_PACKAGE_INFO {
	ULONG                      ProcessorPackageId;   /*     0     4 */
	USHORT                     GroupId;              /*     4     2 */
	USHORT                     Reserved;             /*     6     2 */
	ULONG_PTR                  ProcessorMask;        /*     8     8 */

	/* size: 16, cachelines: 1, members: 4 */
	/* last cacheline: 16 bytes */
};
struct LOADER_NUMA_NODE_INFO {
	ULONG                      NumaNodeId;           /*     0     4 */
	USHORT                     GroupId;              /*     4     2 */
	USHORT                     Reserved;             /*     6     2 */
	ULONG_PTR                  ProcessorMask;        /*     8     8 */

	/* size: 16, cachelines: 1, members: 4 */
	/* last cacheline: 16 bytes */
};
struct LOADER_PROCESSOR_CORE_INFO {
	ULONG                      ProcessorCoreId;      /*     0     4 */
	USHORT                     GroupId;              /*     4     2 */
	UCHAR                      Flags;                /*     6     1 */
	UCHAR                      Dummy;                /*     7     1 */
	ULONG_PTR                  ProcessorMask;        /*     8     8 */

	/* size: 16, cachelines: 1, members: 5 */
	/* last cacheline: 16 bytes */
};
struct LinuxToWindowsMapEntry {
	const char  *              WindowsTzName;        /*     0     8 */
	const char  *              LinuxTzName;          /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
class TimeZoneMap {
public:

	string FetchCurrentWindowsZone(void);

	bool IsDaylightTimeEnabled(void);

	bool TryTzEnvVariable(string &);

	bool TryLocalTimeSymLink(string, string &);

	bool TryEtcTimeZoneFile(string, string &);

	bool TryEtcSysConfigClockFile(string, string &);

	string FindWindowsZoneFromLinuxZone(const string  &);

	string FindWindowsZoneFromLinuxZoneInternal(const string  &);

	uint16_t HashTzFile(const string  &, size_t *);

	uint16_t HashTzFile(class shared_ptr<File>const, size_t *);

	class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > FindTzFilesWithMatchingHash(const string  &, uint16_t, size_t);

	void FindTzFilesWithMatchingHashForDirectory(const string  &, uint16_t, size_t, string, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > &, class shared_ptr<Directory> &);

	void TimeZoneMap(class TimeZoneMap *);

	void TimeZoneMap(class TimeZoneMap *, const class TimeZoneMap  &);

	class TimeZoneMap & operator=(class TimeZoneMap *, const class TimeZoneMap  &);


	/* size: 1, cachelines: 0, members: 0 */
	/* last cacheline: 1 bytes */
};
class SignalStream {
	static sigset_t                   sm_currentMask /*     0     0 */
	static sigset_t                   sm_requestedMask /*     0     0 */
	static size_t                     sm_totalMemoryBytes /*     0     0 */
	static size_t                     sm_availableMemoryBytes /*     0     0 */
public:

	class AbiStatus Open(sigset_t *);

	class AbiStatus WaitForSignal(size_t, void *, size_t &);

	class AbiStatus SetSignals(sigset_t *);

	bool ReadMeminfo(size_t &, size_t &);


	/* size: 1, cachelines: 0, members: 0, static members: 4 */
	/* last cacheline: 1 bytes */
};
struct SignalInfo {
	ULONG                      Event;                /*     0     4 */
	ULONG                      Destination;          /*     4     4 */
	ULONG64                    Parameter;            /*     8     8 */

	/* size: 16, cachelines: 1, members: 3 */
	/* last cacheline: 16 bytes */
};
struct LegacyKeyBlob<4608, _RSAPUBKEY> {
	PUBLICKEYSTRUC             pks;                  /*     0     8 */
	struct _RSAPUBKEY          rsapks;               /*     8    12 */
	BYTE                       rgbKey[0];            /*    20     0 */
	BYTE * GetBlobPtr(class LegacyKeyBlob<4608, _RSAPUBKEY> *);

	ULONG GetBlobSize(void);


	/* size: 4628, cachelines: 73, members: 3 */
	/* padding: 4608 */
	/* last cacheline: 20 bytes */
};
struct _PUBLICKEYSTRUC {
	BYTE                       bType;                /*     0     1 */
	BYTE                       bVersion;             /*     1     1 */
	int16le_t                  reserved;             /*     2     2 */
	ALG_ID                     aiKeyAlg;             /*     4     4 */

	/* size: 8, cachelines: 1, members: 4 */
	/* last cacheline: 8 bytes */
};
struct _RSAPUBKEY {
	uint32le_t                 magic;                /*     0     4 */
	uint32le_t                 bitlen;               /*     4     4 */
	uint32le_t                 pubexp;               /*     8     4 */

	/* size: 12, cachelines: 1, members: 3 */
	/* last cacheline: 12 bytes */
};
struct LegacyKeyBlob<1024, _RSAPUBKEY> {
	PUBLICKEYSTRUC             pks;                  /*     0     8 */
	struct _RSAPUBKEY          rsapks;               /*     8    12 */
	BYTE                       rgbKey[0];            /*    20     0 */
	BYTE * GetBlobPtr(class LegacyKeyBlob<1024, _RSAPUBKEY> *);

	ULONG GetBlobSize(void);


	/* size: 1044, cachelines: 17, members: 3 */
	/* padding: 1024 */
	/* last cacheline: 20 bytes */
};
struct _BCRYPTRSAPUBKEY {
	uint32le_t                 magic;                /*     0     4 */
	uint32le_t                 bitlen;               /*     4     4 */
	uint32le_t                 cbPubexp;             /*     8     4 */
	uint32le_t                 cbModulus;            /*    12     4 */
	uint32le_t                 cbPrime1;             /*    16     4 */
	uint32le_t                 cbPrime2;             /*    20     4 */

	/* size: 24, cachelines: 1, members: 6 */
	/* last cacheline: 24 bytes */
};
struct AsymKey_Params {
	enum ASYMKEY_OPERATION     operation;            /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	union {
		struct GenRSAKey_Params genParams;       /*     8    16 */
		struct FreeRSAKey_Params freeParams;     /*     8     8 */
		struct ExportRSAKey_Params exportParams; /*     8    40 */
		struct ImportRSAKey_Params importParams; /*     8    40 */
		struct EncryptDecrypt_Params encryptDecryptParams; /*     8    56 */
		struct SignHash_Params signHashParams;   /*     8    56 */
		struct VerifySig_Params verifyParams;    /*     8    40 */
	};                                               /*     8    56 */
	union {
		struct GenRSAKey_Params    genParams;            /*     0    16 */
		struct FreeRSAKey_Params   freeParams;           /*     0     8 */
		struct ExportRSAKey_Params exportParams;         /*     0    40 */
		struct ImportRSAKey_Params importParams;         /*     0    40 */
		struct EncryptDecrypt_Params encryptDecryptParams; /*     0    56 */
		struct SignHash_Params     signHashParams;       /*     0    56 */
		struct VerifySig_Params    verifyParams;         /*     0    40 */
	};


	/* size: 64, cachelines: 1, members: 2 */
	/* sum members: 60, holes: 1, sum holes: 4 */
};
struct GenRSAKey_Params {
	int                        bits;                 /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	void * *                   key;                  /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
struct FreeRSAKey_Params {
	void *                     key;                  /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct ExportRSAKey_Params {
	void *                     key;                  /*     0     8 */
	enum KEY_TYPES             keyType;              /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	unsigned char *            buffer;               /*    16     8 */
	unsigned int               bufferLen;            /*    24     4 */

	/* XXX 4 bytes hole, try to pack */

	unsigned int *             bufferLenOut;         /*    32     8 */

	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 32, holes: 2, sum holes: 8 */
	/* last cacheline: 40 bytes */
};
struct ImportRSAKey_Params {
	void * *                   key;                  /*     0     8 */
	enum KEY_TYPES             keyType;              /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	unsigned char *            buffer;               /*    16     8 */
	unsigned int               bufferLen;            /*    24     4 */

	/* XXX 4 bytes hole, try to pack */

	unsigned int *             keySize;              /*    32     8 */

	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 32, holes: 2, sum holes: 8 */
	/* last cacheline: 40 bytes */
};
struct EncryptDecrypt_Params {
	void *                     key;                  /*     0     8 */
	const unsigned char  *     inputBuffer;          /*     8     8 */
	unsigned int               inputLen;             /*    16     4 */

	/* XXX 4 bytes hole, try to pack */

	unsigned char *            outputBuffer;         /*    24     8 */
	unsigned int               outputLen;            /*    32     4 */

	/* XXX 4 bytes hole, try to pack */

	unsigned int *             resultLen;            /*    40     8 */
	enum PADDING_TYPES         paddingType;          /*    48     4 */

	/* size: 56, cachelines: 1, members: 7 */
	/* sum members: 44, holes: 2, sum holes: 8 */
	/* padding: 4 */
	/* last cacheline: 56 bytes */
};
struct SignHash_Params {
	void *                     key;                  /*     0     8 */
	const unsigned char  *     inputBuffer;          /*     8     8 */
	unsigned int               inputLen;             /*    16     4 */

	/* XXX 4 bytes hole, try to pack */

	unsigned char *            outputBuffer;         /*    24     8 */
	unsigned int               outputLen;            /*    32     4 */

	/* XXX 4 bytes hole, try to pack */

	unsigned int *             resultLen;            /*    40     8 */
	enum CRYPT_ALG_TYPE        algType;              /*    48     4 */

	/* size: 56, cachelines: 1, members: 7 */
	/* sum members: 44, holes: 2, sum holes: 8 */
	/* padding: 4 */
	/* last cacheline: 56 bytes */
};
struct VerifySig_Params {
	void *                     key;                  /*     0     8 */
	const unsigned char  *     hashBuf;              /*     8     8 */
	unsigned int               hashLen;              /*    16     4 */

	/* XXX 4 bytes hole, try to pack */

	const unsigned char  *     sigBuf;               /*    24     8 */
	unsigned int               sigLen;               /*    32     4 */
	enum CRYPT_ALG_TYPE        algType;              /*    36     4 */

	/* size: 40, cachelines: 1, members: 6 */
	/* sum members: 36, holes: 1, sum holes: 4 */
	/* last cacheline: 40 bytes */
};
struct _BCryptKeyBlob {
	BCRYPTRSAPUBKEY *          pks;                  /*     0     8 */
	BYTE *                     publicExponent;       /*     8     8 */
	BYTE *                     modulus;              /*    16     8 */

	/* size: 24, cachelines: 1, members: 3 */
	/* last cacheline: 24 bytes */
};
class FatalErrorInfo {
public:

	enum FatalErrorReason      m_reason;             /*     0     4 */
	DKSTATUS                   m_statusCode;         /*     4     4 */
	const char  *              m_message;            /*     8     8 */
	int                        m_messageLength;      /*    16     4 */
	int                        m_lastErrNo;          /*    20     4 */
	DK_TRACE_RECORD *          m_record;             /*    24     8 */
	string                     m_reasonString;       /*    32    24 */
	string                     m_fullReasonString;   /*    56    24 */
	/* --- cacheline 1 boundary (64 bytes) was 16 bytes ago --- */
	string                     m_statusString;       /*    80    24 */
	string                     m_fullStatusString;   /*   104    24 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	bool                       m_showLastErrNo;      /*   128     1 */
	bool                       m_showSignal;         /*   129     1 */
	bool                       m_showParameters;     /*   130     1 */
	bool                       m_showMessage;        /*   131     1 */
	bool                       m_showAddress;        /*   132     1 */
	bool                       m_showStatus;         /*   133     1 */
	bool                       m_showNativeStack;    /*   134     1 */
	bool                       m_showLibOSStack;     /*   135     1 */
	void ~FatalErrorInfo(class FatalErrorInfo *);


	/* size: 136, cachelines: 3, members: 18 */
	/* last cacheline: 8 bytes */
};
struct sigaction {
	union {
		__sighandler_t     sa_handler;           /*     0     8 */
		void               (*sa_sigaction)(int, siginfo_t *, void *); /*     0     8 */
	} __sigaction_handler;                           /*     0     8 */
	union {
		__sighandler_t             sa_handler;           /*     0     8 */
		void                       (*sa_sigaction)(int, siginfo_t *, void *); /*     0     8 */
	};

	__sigset_t                 sa_mask;              /*     8   128 */
	/* --- cacheline 2 boundary (128 bytes) was 8 bytes ago --- */
	int                        sa_flags;             /*   136     4 */

	/* XXX 4 bytes hole, try to pack */

	void                       (*sa_restorer)(void); /*   144     8 */

	/* size: 152, cachelines: 3, members: 4 */
	/* sum members: 148, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */
};
struct pollfd {
	int                        fd;                   /*     0     4 */
	short                      events;               /*     4     2 */
	short                      revents;              /*     6     2 */

	/* size: 8, cachelines: 1, members: 3 */
	/* last cacheline: 8 bytes */
};
struct signalfd_siginfo {
	uint32_t                   ssi_signo;            /*     0     4 */
	int32_t                    ssi_errno;            /*     4     4 */
	int32_t                    ssi_code;             /*     8     4 */
	uint32_t                   ssi_pid;              /*    12     4 */
	uint32_t                   ssi_uid;              /*    16     4 */
	int32_t                    ssi_fd;               /*    20     4 */
	uint32_t                   ssi_tid;              /*    24     4 */
	uint32_t                   ssi_band;             /*    28     4 */
	uint32_t                   ssi_overrun;          /*    32     4 */
	uint32_t                   ssi_trapno;           /*    36     4 */
	int32_t                    ssi_status;           /*    40     4 */
	int32_t                    ssi_int;              /*    44     4 */
	uint64_t                   ssi_ptr;              /*    48     8 */
	uint64_t                   ssi_utime;            /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	uint64_t                   ssi_stime;            /*    64     8 */
	uint64_t                   ssi_addr;             /*    72     8 */
	uint8_t                    __pad[0];             /*    80     0 */

	/* size: 128, cachelines: 2, members: 17 */
	/* padding: 48 */
};
struct ErrorDescriptor {
	int                        Error;                /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	const char  *              ErrorString;          /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
class OdbcParams {
	enum ODBC_OPERATION        odbcOperation;        /*     0     4 */
public:

	void OdbcParams(class OdbcParams *, enum ODBC_OPERATION);

	enum ODBC_OPERATION GetOperationType(class OdbcParams *);


	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
class ArchiveDirectory : public Directory {
public:

	/* class Directory           <ancestor>; */      /*     0   568 */

	/* XXX last struct has 7 bytes of padding */
protected:


	/* --- cacheline 8 boundary (512 bytes) was 56 bytes ago --- */
	uint64_t                   m_directoryIndex;     /*   568     8 */
	/* --- cacheline 9 boundary (576 bytes) --- */
	class weak_ptr<ArchiveMetadata> m_archive;       /*   576    16 */
	uint64_t                   m_parentOffset;       /*   592     8 */
	uint64_t                   m_childrenStartOffset; /*   600     8 */
	uint32_t                   m_numberChildren;     /*   608     4 */

	/* XXX 4 bytes hole, try to pack */

	class vector<std::__1::shared_ptr<File>, std::__1::allocator<std::__1::shared_ptr<File> > > m_files; /*   616    24 */
	/* --- cacheline 10 boundary (640 bytes) --- */
	class vector<std::__1::shared_ptr<Directory>, std::__1::allocator<std::__1::shared_ptr<Directory> > > m_directories; /*   640    24 */
public:

	void ArchiveDirectory(class ArchiveDirectory *, bool);

	virtual void ~ArchiveDirectory(class ArchiveDirectory *);

	class SystemStatus LoadArchive(class ArchiveDirectory *, uint64_t, class shared_ptr<ArchiveMetadata>, string &, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint32_t);

	virtual class SystemStatus OpenDirectory(class ArchiveDirectory *, const string  &, class shared_ptr<Directory> &);

	virtual class SystemStatus OpenSubdirectory(class ArchiveDirectory *, const string  &, class shared_ptr<Directory> &);

	virtual class SystemStatus OpenParentDirectory(class ArchiveDirectory *, class shared_ptr<Directory> &);

	virtual class SystemStatus GetFile(const class ArchiveDirectory  *, string, mode_t, class shared_ptr<File> &, int, enum ExtraFileFlags);

	virtual class SystemStatus DoesFileExist(const class ArchiveDirectory  *, string &);

	virtual class SystemStatus DoesSubdirectoryExist(const class ArchiveDirectory  *, string &);

	virtual class SystemStatus Delete(class ArchiveDirectory *);

	virtual class SystemStatus GetDirectoryChildren(class ArchiveDirectory *, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > &);

	virtual class SystemStatus GetDirectoryFileChildren(class ArchiveDirectory *, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > &);

	virtual class SystemStatus GetDirectorySubdirectoryChildren(class ArchiveDirectory *, class vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > &);

	virtual class SystemStatus RefreshStatistics(class ArchiveDirectory *);

	virtual bool IsArchiveDirectory(const class ArchiveDirectory  *);

protected:

	class SystemStatus LoadChildren(class ArchiveDirectory *, class shared_ptr<ArchiveMetadata>);

	virtual class shared_ptr<Directory> CreateDirectoryInstance(class ArchiveDirectory *, bool);

	bool FindFile(const class ArchiveDirectory  *, const string  &, class shared_ptr<File> &);

	bool FindDirectory(const class ArchiveDirectory  *, const string  &, class shared_ptr<Directory> &);

	ino_t GenerateUniqueId(class ArchiveDirectory *);

	/* vtable has 14 entries: {
	   [0] = ~ArchiveDirectory((null)), 
	   [8] = OpenDirectory((null)), 
	   [9] = OpenSubdirectory((null)), 
	   [10] = OpenParentDirectory((null)), 
	   [11] = GetFile((null)), 
	   [15] = DoesFileExist((null)), 
	   [16] = DoesSubdirectoryExist((null)), 
	   [2] = Delete((null)), 
	   [17] = GetDirectoryChildren((null)), 
	   [18] = GetDirectoryFileChildren((null)), 
	   [19] = GetDirectorySubdirectoryChildren((null)), 
	   [3] = RefreshStatistics((null)), 
	   [24] = IsArchiveDirectory((null)), 
	   [22] = CreateDirectoryInstance((null)), 
	} */
	/* size: 664, cachelines: 11, members: 8 */
	/* sum members: 92, holes: 1, sum holes: 4 */
	/* paddings: 1, sum paddings: 7 */
	/* last cacheline: 24 bytes */

	/* BRAIN FART ALERT! 664 != 92 + 4(holes), diff = 568 */

};
class ArchivedFile : public VirtualFile {
public:

	/* class VirtualFile         <ancestor>; */      /*     0   744 */

	/* XXX last struct has 4 bytes of padding */
protected:


	/* --- cacheline 11 boundary (704 bytes) was 40 bytes ago --- */
	uint64_t                   m_directoryIndex;     /*   744     8 */
	class weak_ptr<ArchiveMetadata> m_archive;       /*   752    16 */
public:

	void ArchivedFile(class ArchivedFile *);

	virtual void ~ArchivedFile(class ArchivedFile *);

	class SystemStatus Load(class ArchivedFile *, uint64_t, class shared_ptr<ArchiveMetadata>, string &, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint32_t);

	virtual class SystemStatus Map(class ArchivedFile *, void *, size_t, int, int, off_t, void * &, size_t &);

	virtual int GetFileDescriptor(const class ArchivedFile  *);

	virtual class SystemStatus GetRealPath(class ArchivedFile *, bool &, string &);

	virtual class SystemStatus ReadBytes(class ArchivedFile *, off_t, size_t, void *, size_t &);

protected:

	virtual off_t GetDirectOffset(const class ArchivedFile  *, off_t);

	virtual size_t GetDirectReadLength(const class ArchivedFile  *, size_t, off_t);

	ino_t GenerateUniqueId(class ArchivedFile *);

	/* vtable has 7 entries: {
	   [0] = ~ArchivedFile((null)), 
	   [5] = Map((null)), 
	   [9] = GetFileDescriptor((null)), 
	   [8] = GetRealPath((null)), 
	   [10] = ReadBytes((null)), 
	   [21] = GetDirectOffset((null)), 
	   [22] = GetDirectReadLength((null)), 
	} */
	/* size: 768, cachelines: 12, members: 3 */
	/* paddings: 1, sum paddings: 4 */

	/* BRAIN FART ALERT! 768 != 24 + 0(holes), diff = 744 */

};
class VirtualFile : public File {
public:

	/* class File                <ancestor>; */      /*     0   712 */

	/* XXX last struct has 4 bytes of padding */
protected:


	/* --- cacheline 11 boundary (704 bytes) was 8 bytes ago --- */
	class shared_ptr<File>    m_file;                /*   712    16 */
	uint64_t                   m_fileStartOffset;    /*   728     8 */
	uint32_t                   m_fileLength;         /*   736     4 */
public:

	void VirtualFile(class VirtualFile *);

	virtual void ~VirtualFile(class VirtualFile *);

	virtual int GetFileDescriptor(const class VirtualFile  *);

	virtual class SystemStatus GetRealPath(class VirtualFile *, bool &, string &);

	virtual class SystemStatus Delete(class VirtualFile *);

	virtual class SystemStatus WriteBytes(class VirtualFile *, off_t, size_t, void *);

	virtual class SystemStatus SetLength(class VirtualFile *, uint64_t);

	virtual class SystemStatus Flush(class VirtualFile *);

	virtual class SystemStatus CloseInternal(class VirtualFile *);

	virtual class SystemStatus RefreshStatistics(class VirtualFile *);

	virtual class SystemStatus SetSparse(class VirtualFile *, bool);

	virtual class SystemStatus SetZeroData(class VirtualFile *, off_t, size_t);

	virtual class SystemStatus QueryAllocatedRanges(class VirtualFile *, off_t, size_t, uint32_t, DK_FILE_RANGE *, uint32_t &);

	virtual off_t GetDirectOffset(const class VirtualFile  *, off_t);

	virtual size_t GetDirectReadLength(const class VirtualFile  *, size_t, off_t);

	virtual bool IsLocked(const class VirtualFile  *);

	virtual class SystemStatus Lock(class VirtualFile *, enum RequestType);

	virtual class SystemStatus Unlock(class VirtualFile *);

protected:

	virtual off_t GetInternalAdjustedOffset(const class VirtualFile  *, off_t);

	virtual size_t GetInternalAdjustedReadLength(const class VirtualFile  *, size_t, off_t);

	/* vtable has 19 entries: {
	   [0] = ~VirtualFile((null)), 
	   [9] = GetFileDescriptor((null)), 
	   [8] = GetRealPath((null)), 
	   [2] = Delete((null)), 
	   [11] = WriteBytes((null)), 
	   [12] = SetLength((null)), 
	   [13] = Flush((null)), 
	   [29] = CloseInternal((null)), 
	   [3] = RefreshStatistics((null)), 
	   [16] = SetSparse((null)), 
	   [17] = SetZeroData((null)), 
	   [18] = QueryAllocatedRanges((null)), 
	   [21] = GetDirectOffset((null)), 
	   [22] = GetDirectReadLength((null)), 
	   [23] = IsLocked((null)), 
	   [24] = Lock((null)), 
	   [27] = Unlock((null)), 
	   [30] = GetInternalAdjustedOffset((null)), 
	   [31] = GetInternalAdjustedReadLength((null)), 
	} */
	/* size: 744, cachelines: 12, members: 4 */
	/* padding: 4 */
	/* paddings: 1, sum paddings: 4 */
	/* last cacheline: 40 bytes */

	/* BRAIN FART ALERT! 744 != 28 + 0(holes), diff = 716 */

};
class JeMallocHooks {
	static const char  *const         MallCtlQueryThreadAllocatedBytes /*     0     0 */
	static const char  *const         MallCtlQueryThreadDeallocatedBytes /*     0     0 */
	static const char  *const         MallCtlQueryConfigStats /*     0     0 */
	static const char  *const         MallCtlQueryConfigFill /*     0     0 */
public:

	uint64_t TotalBytesEverAllocatedByThread(void);

	uint64_t TotalBytesEverDeallocatedByThread(void);

	void SetZeroMemory(void);

	bool WasBuiltWithStats(void);

	bool WasBuiltWithFill(void);

	void JeMallocHooks(class JeMallocHooks *);

	void JeMallocHooks(class JeMallocHooks *, const class JeMallocHooks  &);

	void operator=(class JeMallocHooks *, const class JeMallocHooks  &);

	bool ReadMallCtlValue<bool>(const char  *);

	long unsigned int ReadMallCtlValue<unsigned long>(const char  *);


	/* size: 1, cachelines: 0, members: 0, static members: 4 */
	/* last cacheline: 1 bytes */
};
struct _Abi_GetFunction_v2_In {
	DKABIID                    AbiIdAndVersion;      /*     0     4 */

	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
struct _Abi_GetFunction_v2_Out {
	PVOID *                    ThunkPtr;             /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct _Abi_GetVersion_v2_In {
	DKABIID                    AbiId;                /*     0     4 */
	DKABIVERSION               MaxVersion;           /*     4     4 */

	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
struct _Abi_GetVersion_v2_Out {
	DKABIVERSION *             VersionPtr;           /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct SGX_SigStruct {
	uint8_t                    Header[0];            /*     0     0 */

	/* XXX 12 bytes hole, try to pack */

	uint32_t                   Type;                 /*    12     4 */
	uint32_t                   Vendor;               /*    16     4 */
	uint32_t                   Date;                 /*    20     4 */
	uint8_t                    Header2[0];           /*    24     0 */

	/* XXX 16 bytes hole, try to pack */

	uint32_t                   SWDefined;            /*    40     4 */
	uint8_t                    Reserved[0];          /*    44     0 */

	/* XXX 84 bytes hole, try to pack */

	/* --- cacheline 2 boundary (128 bytes) --- */
	uint8_t                    Modulus[0];           /*   128     0 */

	/* XXX 384 bytes hole, try to pack */

	/* --- cacheline 8 boundary (512 bytes) --- */
	uint8_t                    Exponent[0];          /*   512     0 */

	/* XXX 4 bytes hole, try to pack */

	uint8_t                    Signature[0];         /*   516     0 */

	/* XXX 384 bytes hole, try to pack */

	/* --- cacheline 14 boundary (896 bytes) was 4 bytes ago --- */
	uint32_t                   MiscSelect;           /*   900     4 */
	uint32_t                   MiscMask;             /*   904     4 */
	uint8_t                    Reserved2[0];         /*   908     0 */

	/* XXX 20 bytes hole, try to pack */

	struct SGX_Attributes      Attributes;           /*   928    16 */
	struct SGX_Attributes      AttributeMask;        /*   944    16 */
	/* --- cacheline 15 boundary (960 bytes) --- */
	uint8_t                    EnclaveHash[0];       /*   960     0 */

	/* XXX 32 bytes hole, try to pack */

	uint8_t                    Reserved3[0];         /*   992     0 */

	/* XXX 32 bytes hole, try to pack */

	/* --- cacheline 16 boundary (1024 bytes) --- */
	uint16_t                   IsvProdId;            /*  1024     2 */
	uint16_t                   IsvSvn;               /*  1026     2 */
	uint8_t                    Reserved4[0];         /*  1028     0 */

	/* XXX 12 bytes hole, try to pack */

	uint8_t                    Q1[0];                /*  1040     0 */

	/* XXX 384 bytes hole, try to pack */

	/* --- cacheline 22 boundary (1408 bytes) was 16 bytes ago --- */
	uint8_t                    Q2[0];                /*  1424     0 */

	/* size: 1808, cachelines: 29, members: 22 */
	/* sum members: 60, holes: 11, sum holes: 1364 */
	/* padding: 384 */
	/* last cacheline: 16 bytes */
};
struct SGX_Attributes {
	uint64_t                   Flags;                /*     0     8 */
	uint64_t                   Xfrm;                 /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct SGX_EInitToken {
	uint32_t                   Valid;                /*     0     4 */
	uint8_t                    Reserved1[0];         /*     4     0 */

	/* XXX 44 bytes hole, try to pack */

	struct SGX_Attributes      Attributes;           /*    48    16 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	uint8_t                    MrEnclave[0];         /*    64     0 */

	/* XXX 32 bytes hole, try to pack */

	uint8_t                    Reserved2[0];         /*    96     0 */

	/* XXX 32 bytes hole, try to pack */

	/* --- cacheline 2 boundary (128 bytes) --- */
	uint8_t                    MrSigner[0];          /*   128     0 */

	/* XXX 32 bytes hole, try to pack */

	uint8_t                    Reserved3[0];         /*   160     0 */

	/* XXX 32 bytes hole, try to pack */

	/* --- cacheline 3 boundary (192 bytes) --- */
	uint8_t                    CpuSvnLe[0];          /*   192     0 */

	/* XXX 16 bytes hole, try to pack */

	uint16_t                   IsvProdIdLe;          /*   208     2 */
	uint16_t                   IsvSvnLe;             /*   210     2 */
	uint8_t                    Reserved4[0];         /*   212     0 */

	/* XXX 24 bytes hole, try to pack */

	uint32_t                   MaskedMiscSelectLe;   /*   236     4 */
	struct SGX_Attributes      MaskedAttributesLe;   /*   240    16 */
	/* --- cacheline 4 boundary (256 bytes) --- */
	uint8_t                    KeyId[0];             /*   256     0 */

	/* XXX 32 bytes hole, try to pack */

	uint8_t                    Mac[0];               /*   288     0 */

	/* size: 304, cachelines: 5, members: 15 */
	/* sum members: 44, holes: 8, sum holes: 244 */
	/* padding: 16 */
	/* last cacheline: 48 bytes */
};
struct SGX_Secs {
	uint64_t                   Size;                 /*     0     8 */
	uint64_t                   Base;                 /*     8     8 */
	uint32_t                   SsaFrameSize;         /*    16     4 */
	uint32_t                   MiscSelect;           /*    20     4 */
	uint8_t                    Reserved1[0];         /*    24     0 */

	/* XXX 24 bytes hole, try to pack */

	uint64_t                   Flags;                /*    48     8 */
	uint64_t                   Xfrm;                 /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	uint32_t                   MrEnclave[0];         /*    64     0 */

	/* XXX 32 bytes hole, try to pack */

	uint8_t                    Reserved2[0];         /*    96     0 */

	/* XXX 32 bytes hole, try to pack */

	/* --- cacheline 2 boundary (128 bytes) --- */
	uint32_t                   MrSigner[0];          /*   128     0 */

	/* XXX 32 bytes hole, try to pack */

	uint8_t                    Reserved3[0];         /*   160     0 */

	/* XXX 96 bytes hole, try to pack */

	/* --- cacheline 4 boundary (256 bytes) --- */
	uint16_t                   IsvProdId;            /*   256     2 */
	uint16_t                   IsvSvn;               /*   258     2 */
	uint8_t                    Reserved[0];          /*   260     0 */

	/* size: 4096, cachelines: 64, members: 14 */
	/* sum members: 44, holes: 5, sum holes: 216 */
	/* padding: 3836 */
};
class GuestCpu {
public:

	bool InitLibUnwind(void);

	bool SupportsSse3(void);

	bool SetGsRegister(uint64_t);

	size_t GetStackDump(uint32_t, int32_t, char *, size_t);

	int32_t GetStackFrames(int32_t, int32_t, PVOID *, char * *);

	uint64_t QueryPerformanceCounter(void);

	void ConvertUContextToDk(ucontext_t *, DK_MACHINE_CONTEXT_X64 *);

	void HandleHwExceptionSignal(int, siginfo_t *, ucontext_t *, const DK_THREAD_START_PARAMETERS  *);

	bool SupportsCpuTopology(void);

	uint32_t GetProcessorCount(void);


	/* size: 1, cachelines: 0, members: 0 */
	/* last cacheline: 1 bytes */
};
struct unw_cursor {
	unw_word_t                 opaque[0];            /*     0     0 */

	/* size: 1016, cachelines: 16, members: 1 */
	/* padding: 1016 */
	/* last cacheline: 56 bytes */
};
class SGXEnclaveManager {
	static class File                m_device        /*     0     0 */

	/* XXX last struct has 4 bytes of padding */

	static EnclaveMap                 m_enclaves     /*     0     0 */
	typedef struct map<void *, std::__1::unique_ptr<SGXEnclaveManager::EnclaveInfo, std::__1::default_delete<SGXEnclaveManager::EnclaveInfo> >, std::__1::less<void *>, std::__1::allocator<std::__1::pair<void *const, std::__1::unique_ptr<SGXEnclaveManager::EnclaveInfo, std::__1::default_delete<SGXEnclaveManager::EnclaveInfo> > > > > EnclaveMap;

	struct EnclaveInfo {
		void *                     m_base;               /*     0     8 */
		size_t                     m_size;               /*     8     8 */
		bool                       m_debugOptIn;         /*    16     1 */

		/* XXX 7 bytes hole, try to pack */

		class deque<const void *, std::__1::allocator<const void *> > m_initialTcsPages; /*    24    48 */
		void EnclaveInfo(class EnclaveInfo *, void *, size_t, bool);

		void ~EnclaveInfo(class EnclaveInfo *);


		/* size: 72, cachelines: 2, members: 4 */
		/* sum members: 65, holes: 1, sum holes: 7 */
		/* last cacheline: 8 bytes */
	};

	static class mutex               m_mutex         /*     0     0 */
public:

	bool IsReady(void);

	bool IsInEnclaveRange(const void  *, size_t);

	class SystemStatus CreateEnclave(const class SGX_Secs  *);

	class SystemStatus AddPage(const void  *, const void  *, uint64_t, bool);

	class SystemStatus InitEnclave(const void  *, const class SGX_SigStruct  *, const class SGX_EInitToken  *, int &);

	class SystemStatus CommitPages(const void  *, size_t);

	class SystemStatus ProtectPages(const void  *, size_t, uint64_t);

	class SystemStatus RemovePages(const void  *, size_t);

	class SystemStatus RemoveEnclave(const void  *);

	bool FindEnclave(const void  *, iterator &);

	class SystemStatus ConnectToDriver(void);

	bool IsSGX2Supported(void);


	/* size: 1, cachelines: 0, members: 0, static members: 3 */
	/* paddings: 1, sum paddings: 4 */
	/* last cacheline: 1 bytes */
};
struct SGXECreateParam {
	uint64_t                   Secs;                 /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct SGXEAddParam {
	uint64_t                   Addr;                 /*     0     8 */
	uint64_t                   Src;                  /*     8     8 */
	uint64_t                   SecInfo;              /*    16     8 */
	uint16_t                   MrMask;               /*    24     2 */

	/* size: 26, cachelines: 1, members: 4 */
	/* last cacheline: 26 bytes */
};
struct SGX_SecInfo {
	uint64_t                   Flags;                /*     0     8 */
	uint64_t                   Reserved[0];          /*     8     0 */

	/* size: 64, cachelines: 1, members: 2 */
	/* padding: 56 */
};
struct SGXEInitParam {
	uint64_t                   Addr;                 /*     0     8 */
	uint64_t                   SigStruct;            /*     8     8 */
	uint64_t                   EInitToken;           /*    16     8 */

	/* size: 24, cachelines: 1, members: 3 */
	/* last cacheline: 24 bytes */
};
struct SGXRangeParam {
	uint64_t                   BaseAddr;             /*     0     8 */
	uint32_t                   NPages;               /*     8     4 */

	/* size: 16, cachelines: 1, members: 2 */
	/* padding: 4 */
	/* last cacheline: 16 bytes */
};
struct SGXEModPRParam {
	struct SGXRangeParam       Range;                /*     0    16 */

	/* XXX last struct has 4 bytes of padding */

	uint64_t                   Flags;                /*    16     8 */

	/* size: 24, cachelines: 1, members: 2 */
	/* paddings: 1, sum paddings: 4 */
	/* last cacheline: 24 bytes */
};
class SGXAesmClient {
	static int                        m_SockFd       /*     0     0 */
	static class FileInputStream *    m_FileInput    /*     0     0 */
	static class CodedInputStream *   m_CodedInput   /*     0     0 */
	static class FileOutputStream *   m_FileOutput   /*     0     0 */
	static class CodedOutputStream *  m_CodedOutput  /*     0     0 */
public:

	class SystemStatus ConnectIfNeeded(void);

	void Disconnect(void);

	class SystemStatus GetEInitToken(const uint8_t  *, const uint8_t  *, const class SGX_Attributes  *, class SGX_EInitToken *);

	class SystemStatus DoRemoteCall(const class Message  &, class Message &);


	/* size: 1, cachelines: 0, members: 0, static members: 5 */
	/* last cacheline: 1 bytes */
};
struct sockaddr_un {
	sa_family_t                sun_family;           /*     0     2 */
	char                       sun_path[0];          /*     2     0 */

	/* size: 110, cachelines: 2, members: 2 */
	/* padding: 108 */
	/* last cacheline: 46 bytes */
};
struct ImageOptionalHeader64 {
	uint16le_t                 Magic;                /*     0     2 */
	uint8_t                    MajorLinkerVersion;   /*     2     1 */
	uint8_t                    MinorLinkerVersion;   /*     3     1 */
	uint32le_t                 SizeOfCode;           /*     4     4 */
	uint32le_t                 SizeOfInitializedData; /*     8     4 */
	uint32le_t                 SizeOfUninitializedData; /*    12     4 */
	uint32le_t                 AddressOfEntryPoint;  /*    16     4 */
	uint32le_t                 BaseOfCode;           /*    20     4 */
	uint64le_t                 ImageBase;            /*    24     8 */
	uint32le_t                 SectionAlignment;     /*    32     4 */
	uint32le_t                 FileAlignment;        /*    36     4 */
	uint16le_t                 MajorOperatingSystemVersion; /*    40     2 */
	uint16le_t                 MinorOperatingSystemVersion; /*    42     2 */
	uint16le_t                 MajorImageVersion;    /*    44     2 */
	uint16le_t                 MinorImageVersion;    /*    46     2 */
	uint16le_t                 MajorSubsystemVersion; /*    48     2 */
	uint16le_t                 MinorSubsystemVersion; /*    50     2 */
	uint32le_t                 Win32VersionValue;    /*    52     4 */
	uint32le_t                 SizeOfImage;          /*    56     4 */
	uint32le_t                 SizeOfHeaders;        /*    60     4 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	uint32le_t                 CheckSum;             /*    64     4 */
	uint16le_t                 Subsystem;            /*    68     2 */
	uint16le_t                 DllCharacteristics;   /*    70     2 */
	uint64le_t                 SizeOfStackReserve;   /*    72     8 */
	uint64le_t                 SizeOfStackCommit;    /*    80     8 */
	uint64le_t                 SizeOfHeapReserve;    /*    88     8 */
	uint64le_t                 SizeOfHeapCommit;     /*    96     8 */
	uint32le_t                 LoaderFlags;          /*   104     4 */
	uint32le_t                 NumberOfRvaAndSizes;  /*   108     4 */
	struct ImageDataDirectory  DataDirectory[0];     /*   112     0 */

	/* size: 240, cachelines: 4, members: 30 */
	/* padding: 128 */
	/* last cacheline: 48 bytes */
};
struct ImageDataDirectory {
	uint32le_t                 VirtualAddress;       /*     0     4 */
	uint32le_t                 Size;                 /*     4     4 */

	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
struct ImageBaseRelocation {
	uint32le_t                 VirtualAddress;       /*     0     4 */
	uint32le_t                 SizeOfBlock;          /*     4     4 */

	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
struct ImageSectionHeader {
	uint8_t                    Name[0];              /*     0     0 */

	/* XXX 8 bytes hole, try to pack */

	union {
		uint32le_t         PhysicalAddress;      /*     8     4 */
		uint32le_t         VirtualSize;          /*     8     4 */
	};                                               /*     8     4 */
	union {
		uint32le_t                 PhysicalAddress;      /*     0     4 */
		uint32le_t                 VirtualSize;          /*     0     4 */
	};

	uint32le_t                 VirtualAddress;       /*    12     4 */
	uint32le_t                 SizeOfRawData;        /*    16     4 */
	uint32le_t                 PointerToRawData;     /*    20     4 */
	uint32le_t                 PointerToRelocations; /*    24     4 */
	uint32le_t                 PointerToLinenumbers; /*    28     4 */
	uint16le_t                 NumberOfRelocations;  /*    32     2 */
	uint16le_t                 NumberOfLinenumbers;  /*    34     2 */
	uint32le_t                 Characteristics;      /*    36     4 */

	/* size: 40, cachelines: 1, members: 10 */
	/* sum members: 32, holes: 1, sum holes: 8 */
	/* last cacheline: 40 bytes */
};
struct ImageOptionalHeader32 {
	uint16le_t                 Magic;                /*     0     2 */
	uint8_t                    MajorLinkerVersion;   /*     2     1 */
	uint8_t                    MinorLinkerVersion;   /*     3     1 */
	uint32le_t                 SizeOfCode;           /*     4     4 */
	uint32le_t                 SizeOfInitializedData; /*     8     4 */
	uint32le_t                 SizeOfUninitializedData; /*    12     4 */
	uint32le_t                 AddressOfEntryPoint;  /*    16     4 */
	uint32le_t                 BaseOfCode;           /*    20     4 */
	uint32le_t                 BaseOfData;           /*    24     4 */
	uint32le_t                 ImageBase;            /*    28     4 */
	uint32le_t                 SectionAlignment;     /*    32     4 */
	uint32le_t                 FileAlignment;        /*    36     4 */
	uint16le_t                 MajorOperatingSystemVersion; /*    40     2 */
	uint16le_t                 MinorOperatingSystemVersion; /*    42     2 */
	uint16le_t                 MajorImageVersion;    /*    44     2 */
	uint16le_t                 MinorImageVersion;    /*    46     2 */
	uint16le_t                 MajorSubsystemVersion; /*    48     2 */
	uint16le_t                 MinorSubsystemVersion; /*    50     2 */
	uint32le_t                 Win32VersionValue;    /*    52     4 */
	uint32le_t                 SizeOfImage;          /*    56     4 */
	uint32le_t                 SizeOfHeaders;        /*    60     4 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	uint32le_t                 CheckSum;             /*    64     4 */
	uint16le_t                 Subsystem;            /*    68     2 */
	uint16le_t                 DllCharacteristics;   /*    70     2 */
	uint32le_t                 SizeOfStackReserve;   /*    72     4 */
	uint32le_t                 SizeOfStackCommit;    /*    76     4 */
	uint32le_t                 SizeOfHeapReserve;    /*    80     4 */
	uint32le_t                 SizeOfHeapCommit;     /*    84     4 */
	uint32le_t                 LoaderFlags;          /*    88     4 */
	uint32le_t                 NumberOfRvaAndSizes;  /*    92     4 */
	struct ImageDataDirectory  DataDirectory[0];     /*    96     0 */

	/* size: 224, cachelines: 4, members: 31 */
	/* padding: 128 */
	/* last cacheline: 32 bytes */
};
struct ImageDosHeader {
	uint16le_t                 MagicNumber;          /*     0     2 */
	uint16le_t                 BytesOnLastPage;      /*     2     2 */
	uint16le_t                 PagesInFile;          /*     4     2 */
	uint16le_t                 Relocations;          /*     6     2 */
	uint16le_t                 SizeOfHeader;         /*     8     2 */
	uint16le_t                 MinimumAllocations;   /*    10     2 */
	uint16le_t                 MaximumAllocations;   /*    12     2 */
	uint16le_t                 InitialSs;            /*    14     2 */
	uint16le_t                 InitialSp;            /*    16     2 */
	uint16le_t                 Checksum;             /*    18     2 */
	uint16le_t                 InitialIp;            /*    20     2 */
	uint16le_t                 InitalCs;             /*    22     2 */
	uint16le_t                 RelocationTable;      /*    24     2 */
	uint16le_t                 OverlayNumber;        /*    26     2 */
	uint16le_t                 ReservedWords[0];     /*    28     0 */

	/* XXX 8 bytes hole, try to pack */

	uint16le_t                 OemIdentifier;        /*    36     2 */
	uint16le_t                 OemInformation;       /*    38     2 */
	uint16le_t                 ReservedWords2[0];    /*    40     0 */

	/* XXX 20 bytes hole, try to pack */

	int32le_t                  NewExeHeader;         /*    60     4 */

	/* size: 64, cachelines: 1, members: 19 */
	/* sum members: 36, holes: 2, sum holes: 28 */
};
struct CoffFileHeader {
	uint8_t                    Magic[0];             /*     0     0 */

	/* XXX 4 bytes hole, try to pack */

	uint16le_t                 Machine;              /*     4     2 */
	uint16le_t                 NumberOfSections;     /*     6     2 */
	uint32le_t                 TimeDateStamp;        /*     8     4 */
	uint32le_t                 PointerToSymbolTable; /*    12     4 */
	uint32le_t                 NumberOfSymbols;      /*    16     4 */
	uint16le_t                 SizeOfOptionalHeader; /*    20     2 */
	uint16le_t                 Characteristics;      /*    22     2 */

	/* size: 24, cachelines: 1, members: 8 */
	/* sum members: 20, holes: 1, sum holes: 4 */
	/* last cacheline: 24 bytes */
};
class MDLocationDescriptor {
public:

	uint64_t                   data_size;            /*     0     8 */
	MDRVA                      rva;                  /*     8     8 */
	void MDLocationDescriptor(class MDLocationDescriptor *);

	void MDLocationDescriptor(class MDLocationDescriptor *, uint64_t, MDRVA);

	void MDLocationDescriptor(class MDLocationDescriptor *, uint32_t, MDRVA);

	void MDLocationDescriptor(class MDLocationDescriptor *, uint32_t, uint32_t);

	void MDLocationDescriptor(class MDLocationDescriptor *, uint64_t, uint32_t);


	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct r_debug {
	int                        r_version;            /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	class link_map *           r_map;                /*     8     8 */
	Elf64_Addr                 r_brk;                /*    16     8 */
	enum {
		RT_CONSISTENT = 0,
		RT_ADD = 1,
		RT_DELETE = 2,
	} r_state;                                       /*    24     4 */

	/* XXX 4 bytes hole, try to pack */
	enum {
		RT_CONSISTENT = 0,
		RT_ADD = 1,
		RT_DELETE = 2,
	};


	Elf64_Addr                 r_ldbase;             /*    32     8 */

	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 32, holes: 2, sum holes: 8 */
	/* last cacheline: 40 bytes */
};
struct user_regs_struct {
	long long unsigned int     r15;                  /*     0     8 */
	long long unsigned int     r14;                  /*     8     8 */
	long long unsigned int     r13;                  /*    16     8 */
	long long unsigned int     r12;                  /*    24     8 */
	long long unsigned int     rbp;                  /*    32     8 */
	long long unsigned int     rbx;                  /*    40     8 */
	long long unsigned int     r11;                  /*    48     8 */
	long long unsigned int     r10;                  /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	long long unsigned int     r9;                   /*    64     8 */
	long long unsigned int     r8;                   /*    72     8 */
	long long unsigned int     rax;                  /*    80     8 */
	long long unsigned int     rcx;                  /*    88     8 */
	long long unsigned int     rdx;                  /*    96     8 */
	long long unsigned int     rsi;                  /*   104     8 */
	long long unsigned int     rdi;                  /*   112     8 */
	long long unsigned int     orig_rax;             /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	long long unsigned int     rip;                  /*   128     8 */
	long long unsigned int     cs;                   /*   136     8 */
	long long unsigned int     eflags;               /*   144     8 */
	long long unsigned int     rsp;                  /*   152     8 */
	long long unsigned int     ss;                   /*   160     8 */
	long long unsigned int     fs_base;              /*   168     8 */
	long long unsigned int     gs_base;              /*   176     8 */
	long long unsigned int     ds;                   /*   184     8 */
	/* --- cacheline 3 boundary (192 bytes) --- */
	long long unsigned int     es;                   /*   192     8 */
	long long unsigned int     fs;                   /*   200     8 */
	long long unsigned int     gs;                   /*   208     8 */

	/* size: 216, cachelines: 4, members: 27 */
	/* last cacheline: 24 bytes */
};
struct user_fpregs_struct {
	unsigned short             cwd;                  /*     0     2 */
	unsigned short             swd;                  /*     2     2 */
	unsigned short             ftw;                  /*     4     2 */
	unsigned short             fop;                  /*     6     2 */
	long long unsigned int     rip;                  /*     8     8 */
	long long unsigned int     rdp;                  /*    16     8 */
	unsigned int               mxcsr;                /*    24     4 */
	unsigned int               mxcr_mask;            /*    28     4 */
	unsigned int               st_space[0];          /*    32     0 */

	/* XXX 128 bytes hole, try to pack */

	/* --- cacheline 2 boundary (128 bytes) was 32 bytes ago --- */
	unsigned int               xmm_space[0];         /*   160     0 */

	/* XXX 256 bytes hole, try to pack */

	/* --- cacheline 6 boundary (384 bytes) was 32 bytes ago --- */
	unsigned int               padding[0];           /*   416     0 */

	/* size: 512, cachelines: 8, members: 11 */
	/* sum members: 32, holes: 2, sum holes: 384 */
	/* padding: 96 */
};
struct utsname {
	char                       sysname[0];           /*     0     0 */

	/* XXX 65 bytes hole, try to pack */

	/* --- cacheline 1 boundary (64 bytes) was 1 bytes ago --- */
	char                       nodename[0];          /*    65     0 */

	/* XXX 65 bytes hole, try to pack */

	/* --- cacheline 2 boundary (128 bytes) was 2 bytes ago --- */
	char                       release[0];           /*   130     0 */

	/* XXX 65 bytes hole, try to pack */

	/* --- cacheline 3 boundary (192 bytes) was 3 bytes ago --- */
	char                       version[0];           /*   195     0 */

	/* XXX 65 bytes hole, try to pack */

	/* --- cacheline 4 boundary (256 bytes) was 4 bytes ago --- */
	char                       machine[0];           /*   260     0 */

	/* XXX 65 bytes hole, try to pack */

	/* --- cacheline 5 boundary (320 bytes) was 5 bytes ago --- */
	char                       domainname[0];        /*   325     0 */

	/* size: 390, cachelines: 7, members: 6 */
	/* sum members: 0, holes: 5, sum holes: 325 */
	/* padding: 65 */
	/* last cacheline: 6 bytes */
};
struct kernel_stat {
	uint64_t                   st_dev;               /*     0     8 */
	uint64_t                   st_ino;               /*     8     8 */
	uint64_t                   st_nlink;             /*    16     8 */
	unsigned int               st_mode;              /*    24     4 */
	unsigned int               st_uid;               /*    28     4 */
	unsigned int               st_gid;               /*    32     4 */
	unsigned int               __pad0;               /*    36     4 */
	uint64_t                   st_rdev;              /*    40     8 */
	int64_t                    st_size;              /*    48     8 */
	int64_t                    st_blksize;           /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	int64_t                    st_blocks;            /*    64     8 */
	uint64_t                   st_atime_;            /*    72     8 */
	uint64_t                   st_atime_nsec_;       /*    80     8 */
	uint64_t                   st_mtime_;            /*    88     8 */
	uint64_t                   st_mtime_nsec_;       /*    96     8 */
	uint64_t                   st_ctime_;            /*   104     8 */
	uint64_t                   st_ctime_nsec_;       /*   112     8 */
	int64_t                    __unused4[0];         /*   120     0 */

	/* size: 144, cachelines: 3, members: 18 */
	/* padding: 24 */
	/* last cacheline: 16 bytes */
};
struct kernel_dirent {
	long int                   d_ino;                /*     0     8 */
	long int                   d_off;                /*     8     8 */
	unsigned short             d_reclen;             /*    16     2 */
	char                       d_name[0];            /*    18     0 */

	/* size: 280, cachelines: 5, members: 4 */
	/* padding: 262 */
	/* last cacheline: 24 bytes */
};
struct __pthread_mutex_s {
	int                        __lock;               /*     0     4 */
	unsigned int               __count;              /*     4     4 */
	int                        __owner;              /*     8     4 */
	unsigned int               __nusers;             /*    12     4 */
	int                        __kind;               /*    16     4 */
	short int                  __spins;              /*    20     2 */
	short int                  __elision;            /*    22     2 */
	__pthread_list_t           __list;               /*    24    16 */

	/* size: 40, cachelines: 1, members: 8 */
	/* last cacheline: 40 bytes */
};
struct timezone {
	int                        tz_minuteswest;       /*     0     4 */
	int                        tz_dsttime;           /*     4     4 */

	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
struct extent_hooks_s {
	extent_alloc_t *           alloc;                /*     0     8 */
	extent_dalloc_t *          dalloc;               /*     8     8 */
	extent_destroy_t *         destroy;              /*    16     8 */
	extent_commit_t *          commit;               /*    24     8 */
	extent_decommit_t *        decommit;             /*    32     8 */
	extent_purge_t *           purge_lazy;           /*    40     8 */
	extent_purge_t *           purge_forced;         /*    48     8 */
	extent_split_t *           split;                /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	extent_merge_t *           merge;                /*    64     8 */

	/* size: 72, cachelines: 2, members: 9 */
	/* last cacheline: 8 bytes */
};
struct extent_s {
	uint64_t                   e_bits;               /*     0     8 */
	void *                     e_addr;               /*     8     8 */
	union {
		size_t             e_size_esn;           /*    16     8 */
		size_t             e_bsize;              /*    16     8 */
	};                                               /*    16     8 */
	union {
		struct {
			extent_t * qre_next;             /*    24     8 */
			extent_t * qre_prev;             /*    32     8 */
		} ql_link;                               /*    24    16 */
		struct {
			extent_t * rbn_left;             /*    24     8 */
			extent_t * rbn_right_red;        /*    32     8 */
		} rb_link;                               /*    24    16 */
	};                                               /*    24    16 */
	struct {
		extent_t *         phn_prev;             /*    40     8 */
		extent_t *         phn_next;             /*    48     8 */
		extent_t *         phn_lchild;           /*    56     8 */
	} ph_link;                                       /*    40    24 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	union {
		arena_slab_data_t  e_slab_data;          /*    64    64 */
		atomic_p_t         e_prof_tctx;          /*    64     8 */
	};                                               /*    64    64 */

	/* size: 128, cachelines: 2, members: 6 */
};
struct extents_s {
	malloc_mutex_t             mtx;                  /*     0   104 */
	/* --- cacheline 1 boundary (64 bytes) was 40 bytes ago --- */
	extent_heap_t              heaps[200];           /*   104  1600 */
	/* --- cacheline 26 boundary (1664 bytes) was 40 bytes ago --- */
	bitmap_t                   bitmap[4];            /*  1704    32 */
	/* --- cacheline 27 boundary (1728 bytes) was 8 bytes ago --- */
	extent_list_t              lru;                  /*  1736     8 */
	atomic_zu_t                npages;               /*  1744     8 */
	extent_state_t             state;                /*  1752     4 */
	_Bool                      delay_coalesce;       /*  1756     1 */

	/* size: 1760, cachelines: 28, members: 7 */
	/* padding: 3 */
	/* last cacheline: 32 bytes */
};
struct base_block_s {
	size_t                     size;                 /*     0     8 */
	base_block_t *             next;                 /*     8     8 */
	extent_t                   extent;               /*    16   128 */

	/* size: 144, cachelines: 3, members: 3 */
	/* last cacheline: 16 bytes */
};
struct base_s {
	unsigned int               ind;                  /*     0     4 */

	/* XXX 4 bytes hole, try to pack */

	atomic_p_t                 extent_hooks;         /*     8     8 */
	malloc_mutex_t             mtx;                  /*    16   104 */
	/* --- cacheline 1 boundary (64 bytes) was 56 bytes ago --- */
	pszind_t                   pind_last;            /*   120     4 */

	/* XXX 4 bytes hole, try to pack */

	/* --- cacheline 2 boundary (128 bytes) --- */
	size_t                     extent_sn_next;       /*   128     8 */
	base_block_t *             blocks;               /*   136     8 */
	extent_heap_t              avail[232];           /*   144  1856 */
	/* --- cacheline 31 boundary (1984 bytes) was 16 bytes ago --- */
	size_t                     allocated;            /*  2000     8 */
	size_t                     resident;             /*  2008     8 */
	size_t                     mapped;               /*  2016     8 */

	/* size: 2024, cachelines: 32, members: 10 */
	/* sum members: 2016, holes: 2, sum holes: 8 */
	/* last cacheline: 40 bytes */
};
struct arena_slab_data_s {
	bitmap_t                   bitmap[8];            /*     0    64 */

	/* size: 64, cachelines: 1, members: 1 */
};
struct arena_bin_info_s {
	size_t                     reg_size;             /*     0     8 */
	size_t                     slab_size;            /*     8     8 */
	uint32_t                   nregs;                /*    16     4 */

	/* XXX 4 bytes hole, try to pack */

	bitmap_info_t              bitmap_info;          /*    24    16 */

	/* size: 40, cachelines: 1, members: 4 */
	/* sum members: 36, holes: 1, sum holes: 4 */
	/* last cacheline: 40 bytes */
};
struct arena_decay_s {
	malloc_mutex_t             mtx;                  /*     0   104 */
	/* --- cacheline 1 boundary (64 bytes) was 40 bytes ago --- */
	_Bool                      purging;              /*   104     1 */

	/* XXX 7 bytes hole, try to pack */

	atomic_zd_t                time_ms;              /*   112     8 */
	nstime_t                   interval;             /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	nstime_t                   epoch;                /*   128     8 */
	uint64_t                   jitter_state;         /*   136     8 */
	nstime_t                   deadline;             /*   144     8 */
	size_t                     nunpurged;            /*   152     8 */
	size_t                     backlog[200];         /*   160  1600 */
	/* --- cacheline 27 boundary (1728 bytes) was 32 bytes ago --- */
	decay_stats_t *            stats;                /*  1760     8 */
	uint64_t                   ceil_npages;          /*  1768     8 */

	/* size: 1776, cachelines: 28, members: 11 */
	/* sum members: 1769, holes: 1, sum holes: 7 */
	/* last cacheline: 48 bytes */
};
struct arena_bin_s {
	malloc_mutex_t             lock;                 /*     0   104 */
	/* --- cacheline 1 boundary (64 bytes) was 40 bytes ago --- */
	extent_t *                 slabcur;              /*   104     8 */
	extent_heap_t              slabs_nonfull;        /*   112     8 */
	extent_list_t              slabs_full;           /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	malloc_bin_stats_t         stats;                /*   128   136 */

	/* size: 264, cachelines: 5, members: 5 */
	/* last cacheline: 8 bytes */
};
struct arena_s {
	atomic_u_t                 nthreads[2];          /*     0     8 */
	tsdn_t *                   last_thd;             /*     8     8 */
	arena_stats_t              stats;                /*    16  6984 */
	/* --- cacheline 109 boundary (6976 bytes) was 24 bytes ago --- */
	struct {
		tcache_t *         qlh_first;            /*  7000     8 */
	} tcache_ql;                                     /*  7000     8 */
	malloc_mutex_t             tcache_ql_mtx;        /*  7008   104 */
	/* --- cacheline 111 boundary (7104 bytes) was 8 bytes ago --- */
	prof_accum_t               prof_accum;           /*  7112     8 */
	uint64_t                   prof_accumbytes;      /*  7120     8 */
	atomic_zu_t                offset_state;         /*  7128     8 */
	atomic_zu_t                extent_sn_next;       /*  7136     8 */
	atomic_u_t                 dss_prec;             /*  7144     4 */

	/* XXX 4 bytes hole, try to pack */

	atomic_zu_t                nactive;              /*  7152     8 */
	extent_list_t              large;                /*  7160     8 */
	/* --- cacheline 112 boundary (7168 bytes) --- */
	malloc_mutex_t             large_mtx;            /*  7168   104 */
	/* --- cacheline 113 boundary (7232 bytes) was 40 bytes ago --- */
	extents_t                  extents_dirty;        /*  7272  1760 */
	/* --- cacheline 141 boundary (9024 bytes) was 8 bytes ago --- */
	extents_t                  extents_muzzy;        /*  9032  1760 */
	/* --- cacheline 168 boundary (10752 bytes) was 40 bytes ago --- */
	extents_t                  extents_retained;     /* 10792  1760 */
	/* --- cacheline 196 boundary (12544 bytes) was 8 bytes ago --- */
	arena_decay_t              decay_dirty;          /* 12552  1776 */
	/* --- cacheline 223 boundary (14272 bytes) was 56 bytes ago --- */
	arena_decay_t              decay_muzzy;          /* 14328  1776 */
	/* --- cacheline 251 boundary (16064 bytes) was 40 bytes ago --- */
	pszind_t                   extent_grow_next;     /* 16104     4 */

	/* XXX 4 bytes hole, try to pack */

	malloc_mutex_t             extent_grow_mtx;      /* 16112   104 */
	/* --- cacheline 253 boundary (16192 bytes) was 24 bytes ago --- */
	extent_tree_t              extent_avail;         /* 16216     8 */
	malloc_mutex_t             extent_avail_mtx;     /* 16224   104 */
	/* --- cacheline 255 boundary (16320 bytes) was 8 bytes ago --- */
	arena_bin_t                bins[36];             /* 16328  9504 */
	/* --- cacheline 403 boundary (25792 bytes) was 40 bytes ago --- */
	base_t *                   base;                 /* 25832     8 */
	nstime_t                   create_time;          /* 25840     8 */

	/* size: 25848, cachelines: 404, members: 25 */
	/* sum members: 25840, holes: 2, sum holes: 8 */
	/* last cacheline: 56 bytes */
};
struct arena_tdata_s {
	ticker_t                   decay_ticker;         /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct alloc_ctx_s {
	szind_t                    szind;                /*     0     4 */
	_Bool                      slab;                 /*     4     1 */

	/* size: 8, cachelines: 1, members: 2 */
	/* padding: 3 */
	/* last cacheline: 8 bytes */
};
struct tcache_bin_info_s {
	unsigned int               ncached_max;          /*     0     4 */

	/* size: 4, cachelines: 1, members: 1 */
	/* last cacheline: 4 bytes */
};
struct tcache_bin_s {
	low_water_t                low_water;            /*     0     4 */
	uint32_t                   ncached;              /*     4     4 */
	tcache_bin_stats_t         tstats;               /*     8     8 */
	void * *                   avail;                /*    16     8 */

	/* size: 24, cachelines: 1, members: 4 */
	/* last cacheline: 24 bytes */
};
struct tcache_s {
	uint64_t                   prof_accumbytes;      /*     0     8 */
	ticker_t                   gc_ticker;            /*     8     8 */
	tcache_bin_t               tbins_small[36];      /*    16   864 */
	/* --- cacheline 13 boundary (832 bytes) was 48 bytes ago --- */
	struct {
		tcache_t *         qre_next;             /*   880     8 */
		tcache_t *         qre_prev;             /*   888     8 */
	} link;                                          /*   880    16 */
	/* --- cacheline 14 boundary (896 bytes) --- */
	arena_t *                  arena;                /*   896     8 */
	szind_t                    next_gc_bin;          /*   904     4 */
	uint8_t                    lg_fill_div[36];      /*   908    36 */
	tcache_bin_t               tbins_large[196];     /*   944  4704 */

	/* size: 5648, cachelines: 89, members: 8 */
	/* last cacheline: 16 bytes */
};
struct tcaches_s {
	union {
		tcache_t *         tcache;               /*     0     8 */
		tcaches_t *        next;                 /*     0     8 */
	};                                               /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct prof_accum_s {
	atomic_u64_t               accumbytes;           /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct prof_cnt_s {
	uint64_t                   curobjs;              /*     0     8 */
	uint64_t                   curbytes;             /*     8     8 */
	uint64_t                   accumobjs;            /*    16     8 */
	uint64_t                   accumbytes;           /*    24     8 */

	/* size: 32, cachelines: 1, members: 4 */
	/* last cacheline: 32 bytes */
};
struct prof_tdata_s {
	malloc_mutex_t *           lock;                 /*     0     8 */
	uint64_t                   thr_uid;              /*     8     8 */
	uint64_t                   thr_discrim;          /*    16     8 */
	char *                     thread_name;          /*    24     8 */
	_Bool                      attached;             /*    32     1 */
	_Bool                      expired;              /*    33     1 */

	/* XXX 6 bytes hole, try to pack */

	struct {
		prof_tdata_t *     rbn_left;             /*    40     8 */
		prof_tdata_t *     rbn_right_red;        /*    48     8 */
	} tdata_link;                                    /*    40    16 */
	uint64_t                   tctx_uid_next;        /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	ckh_t                      bt2tctx;              /*    64    48 */
	uint64_t                   prng_state;           /*   112     8 */
	uint64_t                   bytes_until_sample;   /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	_Bool                      enq;                  /*   128     1 */
	_Bool                      enq_idump;            /*   129     1 */
	_Bool                      enq_gdump;            /*   130     1 */
	_Bool                      dumping;              /*   131     1 */
	_Bool                      active;               /*   132     1 */

	/* XXX 3 bytes hole, try to pack */

	prof_cnt_t                 cnt_summed;           /*   136    32 */
	void *                     vec[128];             /*   168  1024 */

	/* size: 1192, cachelines: 19, members: 18 */
	/* sum members: 1183, holes: 2, sum holes: 9 */
	/* last cacheline: 40 bytes */
};
struct bitmap_info_s {
	size_t                     nbits;                /*     0     8 */
	size_t                     ngroups;              /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct tsd_s {
	tsd_state_t                state;                /*     0     1 */
	_Bool                      use_a_getter_or_setter_instead_tcache_enabled; /*     1     1 */
	_Bool                      use_a_getter_or_setter_instead_arenas_tdata_bypass; /*     2     1 */
	int8_t                     use_a_getter_or_setter_instead_reentrancy_level; /*     3     1 */
	uint32_t                   use_a_getter_or_setter_instead_narenas_tdata; /*     4     4 */
	uint64_t                   use_a_getter_or_setter_instead_thread_allocated; /*     8     8 */
	uint64_t                   use_a_getter_or_setter_instead_thread_deallocated; /*    16     8 */
	prof_tdata_t *             use_a_getter_or_setter_instead_prof_tdata; /*    24     8 */
	rtree_ctx_t                use_a_getter_or_setter_instead_rtree_ctx; /*    32   384 */
	/* --- cacheline 6 boundary (384 bytes) was 32 bytes ago --- */
	arena_t *                  use_a_getter_or_setter_instead_iarena; /*   416     8 */
	arena_t *                  use_a_getter_or_setter_instead_arena; /*   424     8 */
	arena_tdata_t *            use_a_getter_or_setter_instead_arenas_tdata; /*   432     8 */
	tcache_t                   use_a_getter_or_setter_instead_tcache; /*   440  5648 */
	/* --- cacheline 95 boundary (6080 bytes) was 8 bytes ago --- */
	witness_tsd_t              use_a_getter_or_setter_instead_witness_tsd; /*  6088    16 */

	/* size: 6104, cachelines: 96, members: 14 */
	/* last cacheline: 24 bytes */
};
struct tsdn_s {
	tsd_t                      tsd;                  /*     0  6104 */

	/* size: 6104, cachelines: 96, members: 1 */
	/* last cacheline: 24 bytes */
};
struct rtree_leaf_elm_s {
	atomic_p_t                 le_bits;              /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct rtree_ctx_cache_elm_s {
	uintptr_t                  leafkey;              /*     0     8 */
	rtree_leaf_elm_t *         leaf;                 /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct rtree_ctx_s {
	rtree_ctx_cache_elm_t      cache[16];            /*     0   256 */
	/* --- cacheline 4 boundary (256 bytes) --- */
	rtree_ctx_cache_elm_t      l2_cache[8];          /*   256   128 */

	/* size: 384, cachelines: 6, members: 2 */
};
struct tcache_bin_stats_s {
	uint64_t                   nrequests;            /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct witness_s {
	const char  *              name;                 /*     0     8 */
	witness_rank_t             rank;                 /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	witness_comp_t *           comp;                 /*    16     8 */
	void *                     opaque;               /*    24     8 */
	struct {
		witness_t *        qre_next;             /*    32     8 */
		witness_t *        qre_prev;             /*    40     8 */
	} link;                                          /*    32    16 */

	/* size: 48, cachelines: 1, members: 5 */
	/* sum members: 44, holes: 1, sum holes: 4 */
	/* last cacheline: 48 bytes */
};
struct witness_tsd_s {
	witness_list_t             witnesses;            /*     0     8 */
	_Bool                      forking;              /*     8     1 */

	/* size: 16, cachelines: 1, members: 2 */
	/* padding: 7 */
	/* last cacheline: 16 bytes */
};
struct witness_tsdn_s {
	witness_tsd_t              witness_tsd;          /*     0    16 */

	/* size: 16, cachelines: 1, members: 1 */
	/* last cacheline: 16 bytes */
};
struct malloc_mutex_s {
	union {
		struct {
			mutex_prof_data_t prof_data;     /*     0    64 */
			/* --- cacheline 1 boundary (64 bytes) --- */
			pthread_mutex_t lock;            /*    64    40 */
		};                                       /*     0   104 */
		witness_t          witness;              /*     0    48 */
		malloc_mutex_lock_order_t lock_order;    /*     0     4 */
	};                                               /*     0   104 */

	/* size: 104, cachelines: 2, members: 1 */
	/* last cacheline: 40 bytes */
};
struct malloc_bin_stats_s {
	uint64_t                   nmalloc;              /*     0     8 */
	uint64_t                   ndalloc;              /*     8     8 */
	uint64_t                   nrequests;            /*    16     8 */
	size_t                     curregs;              /*    24     8 */
	uint64_t                   nfills;               /*    32     8 */
	uint64_t                   nflushes;             /*    40     8 */
	uint64_t                   nslabs;               /*    48     8 */
	uint64_t                   reslabs;              /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	size_t                     curslabs;             /*    64     8 */
	mutex_prof_data_t          mutex_data;           /*    72    64 */

	/* size: 136, cachelines: 3, members: 10 */
	/* last cacheline: 8 bytes */
};
struct malloc_large_stats_s {
	arena_stats_u64_t          nmalloc;              /*     0     8 */
	arena_stats_u64_t          ndalloc;              /*     8     8 */
	arena_stats_u64_t          nrequests;            /*    16     8 */
	size_t                     curlextents;          /*    24     8 */

	/* size: 32, cachelines: 1, members: 4 */
	/* last cacheline: 32 bytes */
};
struct decay_stats_s {
	arena_stats_u64_t          npurge;               /*     0     8 */
	arena_stats_u64_t          nmadvise;             /*     8     8 */
	arena_stats_u64_t          purged;               /*    16     8 */

	/* size: 24, cachelines: 1, members: 3 */
	/* last cacheline: 24 bytes */
};
struct arena_stats_s {
	atomic_zu_t                mapped;               /*     0     8 */
	atomic_zu_t                retained;             /*     8     8 */
	decay_stats_t              decay_dirty;          /*    16    24 */
	decay_stats_t              decay_muzzy;          /*    40    24 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	atomic_zu_t                base;                 /*    64     8 */
	atomic_zu_t                internal;             /*    72     8 */
	atomic_zu_t                resident;             /*    80     8 */
	atomic_zu_t                allocated_large;      /*    88     8 */
	arena_stats_u64_t          nmalloc_large;        /*    96     8 */
	arena_stats_u64_t          ndalloc_large;        /*   104     8 */
	arena_stats_u64_t          nrequests_large;      /*   112     8 */
	atomic_zu_t                tcache_bytes;         /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	mutex_prof_data_t          mutex_prof_data[9];   /*   128   576 */
	/* --- cacheline 11 boundary (704 bytes) --- */
	malloc_large_stats_t       lstats[196];          /*   704  6272 */
	/* --- cacheline 109 boundary (6976 bytes) --- */
	nstime_t                   uptime;               /*  6976     8 */

	/* size: 6984, cachelines: 110, members: 15 */
	/* last cacheline: 8 bytes */
};
struct background_thread_info_s {
	pthread_t                  thread;               /*     0     8 */
	pthread_cond_t             cond;                 /*     8    48 */
	malloc_mutex_t             mtx;                  /*    56   104 */
	/* --- cacheline 2 boundary (128 bytes) was 32 bytes ago --- */
	background_thread_state_t  state;                /*   160     4 */
	atomic_b_t                 indefinite_sleep;     /*   164     1 */

	/* XXX 3 bytes hole, try to pack */

	nstime_t                   next_wakeup;          /*   168     8 */
	size_t                     npages_to_purge_new;  /*   176     8 */
	uint64_t                   tot_n_runs;           /*   184     8 */
	/* --- cacheline 3 boundary (192 bytes) --- */
	nstime_t                   tot_sleep_time;       /*   192     8 */

	/* size: 200, cachelines: 4, members: 9 */
	/* sum members: 197, holes: 1, sum holes: 3 */
	/* last cacheline: 8 bytes */
};
struct mutex_pool_s {
	malloc_mutex_t             mutexes[256];         /*     0 26624 */

	/* size: 26624, cachelines: 416, members: 1 */
};
struct rtree_node_elm_s {
	atomic_p_t                 child;                /*     0     8 */

	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct rtree_level_s {
	unsigned int               bits;                 /*     0     4 */
	unsigned int               cumbits;              /*     4     4 */

	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
struct rtree_s {
	malloc_mutex_t             init_lock;            /*     0   104 */
	/* --- cacheline 1 boundary (64 bytes) was 40 bytes ago --- */
	rtree_node_elm_t           root[262144];         /*   104 2097152 */

	/* size: 2097256, cachelines: 32770, members: 2 */
	/* last cacheline: 40 bytes */
};
struct static_opts_s {
	_Bool                      may_overflow;         /*     0     1 */
	_Bool                      bump_empty_alloc;     /*     1     1 */
	_Bool                      assert_nonempty_alloc; /*     2     1 */
	_Bool                      null_out_result_on_error; /*     3     1 */
	_Bool                      set_errno_on_error;   /*     4     1 */

	/* XXX 3 bytes hole, try to pack */

	size_t                     min_alignment;        /*     8     8 */
	const char  *              oom_string;           /*    16     8 */
	const char  *              invalid_alignment_string; /*    24     8 */
	_Bool                      slow;                 /*    32     1 */

	/* size: 40, cachelines: 1, members: 9 */
	/* sum members: 30, holes: 1, sum holes: 3 */
	/* padding: 7 */
	/* last cacheline: 40 bytes */
};
struct dynamic_opts_s {
	void * *                   result;               /*     0     8 */
	size_t                     num_items;            /*     8     8 */
	size_t                     item_size;            /*    16     8 */
	size_t                     alignment;            /*    24     8 */
	_Bool                      zero;                 /*    32     1 */

	/* XXX 3 bytes hole, try to pack */

	unsigned int               tcache_ind;           /*    36     4 */
	unsigned int               arena_ind;            /*    40     4 */

	/* size: 48, cachelines: 1, members: 7 */
	/* sum members: 41, holes: 1, sum holes: 3 */
	/* padding: 4 */
	/* last cacheline: 48 bytes */
};
struct background_thread_stats_s {
	size_t                     num_threads;          /*     0     8 */
	uint64_t                   num_runs;             /*     8     8 */
	nstime_t                   run_interval;         /*    16     8 */

	/* size: 24, cachelines: 1, members: 3 */
	/* last cacheline: 24 bytes */
};
struct ctl_node_s {
	_Bool                      named;                /*     0     1 */

	/* size: 1, cachelines: 1, members: 1 */
	/* last cacheline: 1 bytes */
};
struct ctl_named_node_s {
	ctl_node_t                 node;                 /*     0     1 */

	/* XXX 7 bytes hole, try to pack */

	const char  *              name;                 /*     8     8 */
	size_t                     nchildren;            /*    16     8 */
	const ctl_node_t  *        children;             /*    24     8 */
	int                        (*ctl)(tsd_t *, const size_t  *, size_t, void *, size_t *, void *, size_t); /*    32     8 */

	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 33, holes: 1, sum holes: 7 */
	/* last cacheline: 40 bytes */
};
struct ctl_indexed_node_s {
	struct ctl_node_s          node;                 /*     0     1 */

	/* XXX 7 bytes hole, try to pack */

	const ctl_named_node_t  *  (*index)(tsdn_t *, const size_t  *, size_t, size_t); /*     8     8 */

	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 9, holes: 1, sum holes: 7 */
	/* last cacheline: 16 bytes */
};
struct ctl_arena_stats_s {
	arena_stats_t              astats;               /*     0  6984 */
	/* --- cacheline 109 boundary (6976 bytes) was 8 bytes ago --- */
	size_t                     allocated_small;      /*  6984     8 */
	uint64_t                   nmalloc_small;        /*  6992     8 */
	uint64_t                   ndalloc_small;        /*  7000     8 */
	uint64_t                   nrequests_small;      /*  7008     8 */
	malloc_bin_stats_t         bstats[36];           /*  7016  4896 */
	/* --- cacheline 186 boundary (11904 bytes) was 8 bytes ago --- */
	malloc_large_stats_t       lstats[196];          /* 11912  6272 */

	/* size: 18184, cachelines: 285, members: 7 */
	/* last cacheline: 8 bytes */
};
struct ctl_stats_s {
	size_t                     allocated;            /*     0     8 */
	size_t                     active;               /*     8     8 */
	size_t                     metadata;             /*    16     8 */
	size_t                     resident;             /*    24     8 */
	size_t                     mapped;               /*    32     8 */
	size_t                     retained;             /*    40     8 */
	background_thread_stats_t  background_thread;    /*    48    24 */
	/* --- cacheline 1 boundary (64 bytes) was 8 bytes ago --- */
	mutex_prof_data_t          mutex_prof_data[3];   /*    72   192 */

	/* size: 264, cachelines: 5, members: 8 */
	/* last cacheline: 8 bytes */
};
struct ctl_arena_s {
	unsigned int               arena_ind;            /*     0     4 */
	_Bool                      initialized;          /*     4     1 */

	/* XXX 3 bytes hole, try to pack */

	struct {
		ctl_arena_t *      qre_next;             /*     8     8 */
		ctl_arena_t *      qre_prev;             /*    16     8 */
	} destroyed_link;                                /*     8    16 */
	unsigned int               nthreads;             /*    24     4 */

	/* XXX 4 bytes hole, try to pack */

	const char  *              dss;                  /*    32     8 */
	ssize_t                    dirty_decay_ms;       /*    40     8 */
	ssize_t                    muzzy_decay_ms;       /*    48     8 */
	size_t                     pactive;              /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	size_t                     pdirty;               /*    64     8 */
	size_t                     pmuzzy;               /*    72     8 */
	ctl_arena_stats_t *        astats;               /*    80     8 */

	/* size: 88, cachelines: 2, members: 11 */
	/* sum members: 81, holes: 2, sum holes: 7 */
	/* last cacheline: 24 bytes */
};
struct ctl_arenas_s {
	uint64_t                   epoch;                /*     0     8 */
	unsigned int               narenas;              /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	struct {
		ctl_arena_t *      qlh_first;            /*    16     8 */
	} destroyed;                                     /*    16     8 */
	ctl_arena_t *              je_arenas[4097];      /*    24 32776 */

	/* size: 32800, cachelines: 513, members: 4 */
	/* sum members: 32796, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */
};
struct prof_bt_s {
	void * *                   vec;                  /*     0     8 */
	unsigned int               len;                  /*     8     4 */

	/* size: 16, cachelines: 1, members: 2 */
	/* padding: 4 */
	/* last cacheline: 16 bytes */
};
struct prof_tctx_s {
	prof_tdata_t *             tdata;                /*     0     8 */
	uint64_t                   thr_uid;              /*     8     8 */
	uint64_t                   thr_discrim;          /*    16     8 */
	prof_cnt_t                 cnts;                 /*    24    32 */
	prof_gctx_t *              gctx;                 /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	uint64_t                   tctx_uid;             /*    64     8 */
	struct {
		prof_tctx_t *      rbn_left;             /*    72     8 */
		prof_tctx_t *      rbn_right_red;        /*    80     8 */
	} tctx_link;                                     /*    72    16 */
	_Bool                      prepared;             /*    88     1 */

	/* XXX 3 bytes hole, try to pack */

	prof_tctx_state_t          state;                /*    92     4 */
	prof_cnt_t                 dump_cnts;            /*    96    32 */

	/* size: 128, cachelines: 2, members: 10 */
	/* sum members: 125, holes: 1, sum holes: 3 */
};
struct prof_gctx_s {
	malloc_mutex_t *           lock;                 /*     0     8 */
	unsigned int               nlimbo;               /*     8     4 */

	/* XXX 4 bytes hole, try to pack */

	prof_tctx_tree_t           tctxs;                /*    16     8 */
	struct {
		prof_gctx_t *      rbn_left;             /*    24     8 */
		prof_gctx_t *      rbn_right_red;        /*    32     8 */
	} dump_link;                                     /*    24    16 */
	prof_cnt_t                 cnt_summed;           /*    40    32 */
	/* --- cacheline 1 boundary (64 bytes) was 8 bytes ago --- */
	prof_bt_t                  bt;                   /*    72    16 */
	void *                     vec[1];               /*    88     8 */

	/* size: 96, cachelines: 2, members: 7 */
	/* sum members: 92, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */
};
