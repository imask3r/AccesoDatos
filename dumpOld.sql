--
-- PostgreSQL database dump
--

-- Dumped from database version 10.3
-- Dumped by pg_dump version 10.3

SET statement_timeout = 0;
SET lock_timeout = 0;
SET idle_in_transaction_session_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET client_min_messages = warning;
SET row_security = off;

SET default_tablespace = '';

SET default_with_oids = false;

--
-- Name: disp_disponibles; Type: TABLE; Schema: public; Owner: usuario
--

CREATE TABLE public.disp_disponibles (
    "idDispositivo" integer NOT NULL,
    "nombreDispositivo" character varying(255) NOT NULL
);


ALTER TABLE public.disp_disponibles OWNER TO usuario;

--
-- Name: disp_disponibles_idDispositivo_seq; Type: SEQUENCE; Schema: public; Owner: usuario
--

CREATE SEQUENCE public."disp_disponibles_idDispositivo_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."disp_disponibles_idDispositivo_seq" OWNER TO usuario;

--
-- Name: disp_disponibles_idDispositivo_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: usuario
--

ALTER SEQUENCE public."disp_disponibles_idDispositivo_seq" OWNED BY public.disp_disponibles."idDispositivo";


--
-- Name: estado_reparacion; Type: TABLE; Schema: public; Owner: usuario
--

CREATE TABLE public.estado_reparacion (
    "idEStadoReparacion" integer NOT NULL,
    "idOrdenReparacion" integer NOT NULL,
    estado character varying(255) NOT NULL
);


ALTER TABLE public.estado_reparacion OWNER TO usuario;

--
-- Name: estado_reparacion_idEStadoReparacion_seq; Type: SEQUENCE; Schema: public; Owner: usuario
--

CREATE SEQUENCE public."estado_reparacion_idEStadoReparacion_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."estado_reparacion_idEStadoReparacion_seq" OWNER TO usuario;

--
-- Name: estado_reparacion_idEStadoReparacion_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: usuario
--

ALTER SEQUENCE public."estado_reparacion_idEStadoReparacion_seq" OWNED BY public.estado_reparacion."idEStadoReparacion";


--
-- Name: estado_reparacion_idOrdenReparacion_seq; Type: SEQUENCE; Schema: public; Owner: usuario
--

CREATE SEQUENCE public."estado_reparacion_idOrdenReparacion_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."estado_reparacion_idOrdenReparacion_seq" OWNER TO usuario;

--
-- Name: estado_reparacion_idOrdenReparacion_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: usuario
--

ALTER SEQUENCE public."estado_reparacion_idOrdenReparacion_seq" OWNED BY public.estado_reparacion."idOrdenReparacion";


--
-- Name: listado_tiendas; Type: TABLE; Schema: public; Owner: usuario
--

CREATE TABLE public.listado_tiendas (
    "idTienda" integer NOT NULL,
    "nombreTienda" character varying(255) NOT NULL,
    "direccionTienda" character varying(255) NOT NULL
);


ALTER TABLE public.listado_tiendas OWNER TO usuario;

--
-- Name: listado_tiendas_idTienda_seq; Type: SEQUENCE; Schema: public; Owner: usuario
--

CREATE SEQUENCE public."listado_tiendas_idTienda_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."listado_tiendas_idTienda_seq" OWNER TO usuario;

--
-- Name: listado_tiendas_idTienda_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: usuario
--

ALTER SEQUENCE public."listado_tiendas_idTienda_seq" OWNED BY public.listado_tiendas."idTienda";


--
-- Name: ordenes_reparacion; Type: TABLE; Schema: public; Owner: usuario
--

CREATE TABLE public.ordenes_reparacion (
    "idOrdenReparacion" integer NOT NULL,
    "idTecnico" integer NOT NULL
);


ALTER TABLE public.ordenes_reparacion OWNER TO usuario;

--
-- Name: ordenes_reparacion_idOrdenReparacion_seq; Type: SEQUENCE; Schema: public; Owner: usuario
--

CREATE SEQUENCE public."ordenes_reparacion_idOrdenReparacion_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."ordenes_reparacion_idOrdenReparacion_seq" OWNER TO usuario;

--
-- Name: ordenes_reparacion_idOrdenReparacion_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: usuario
--

ALTER SEQUENCE public."ordenes_reparacion_idOrdenReparacion_seq" OWNED BY public.ordenes_reparacion."idOrdenReparacion";


--
-- Name: ordenes_reparacion_idTecnico_seq; Type: SEQUENCE; Schema: public; Owner: usuario
--

CREATE SEQUENCE public."ordenes_reparacion_idTecnico_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."ordenes_reparacion_idTecnico_seq" OWNER TO usuario;

--
-- Name: ordenes_reparacion_idTecnico_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: usuario
--

ALTER SEQUENCE public."ordenes_reparacion_idTecnico_seq" OWNED BY public.ordenes_reparacion."idTecnico";


--
-- Name: tecnicos; Type: TABLE; Schema: public; Owner: usuario
--

CREATE TABLE public.tecnicos (
    "idTecnico" integer NOT NULL,
    "nombreTecnico" character varying(255) NOT NULL
);


ALTER TABLE public.tecnicos OWNER TO usuario;

--
-- Name: tecnicos_idTecnico_seq; Type: SEQUENCE; Schema: public; Owner: usuario
--

CREATE SEQUENCE public."tecnicos_idTecnico_seq"
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public."tecnicos_idTecnico_seq" OWNER TO usuario;

--
-- Name: tecnicos_idTecnico_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: usuario
--

ALTER SEQUENCE public."tecnicos_idTecnico_seq" OWNED BY public.tecnicos."idTecnico";


--
-- Name: disp_disponibles idDispositivo; Type: DEFAULT; Schema: public; Owner: usuario
--

ALTER TABLE ONLY public.disp_disponibles ALTER COLUMN "idDispositivo" SET DEFAULT nextval('public."disp_disponibles_idDispositivo_seq"'::regclass);


--
-- Name: estado_reparacion idEStadoReparacion; Type: DEFAULT; Schema: public; Owner: usuario
--

ALTER TABLE ONLY public.estado_reparacion ALTER COLUMN "idEStadoReparacion" SET DEFAULT nextval('public."estado_reparacion_idEStadoReparacion_seq"'::regclass);


--
-- Name: estado_reparacion idOrdenReparacion; Type: DEFAULT; Schema: public; Owner: usuario
--

ALTER TABLE ONLY public.estado_reparacion ALTER COLUMN "idOrdenReparacion" SET DEFAULT nextval('public."estado_reparacion_idOrdenReparacion_seq"'::regclass);


--
-- Name: listado_tiendas idTienda; Type: DEFAULT; Schema: public; Owner: usuario
--

ALTER TABLE ONLY public.listado_tiendas ALTER COLUMN "idTienda" SET DEFAULT nextval('public."listado_tiendas_idTienda_seq"'::regclass);


--
-- Name: ordenes_reparacion idOrdenReparacion; Type: DEFAULT; Schema: public; Owner: usuario
--

ALTER TABLE ONLY public.ordenes_reparacion ALTER COLUMN "idOrdenReparacion" SET DEFAULT nextval('public."ordenes_reparacion_idOrdenReparacion_seq"'::regclass);


--
-- Name: ordenes_reparacion idTecnico; Type: DEFAULT; Schema: public; Owner: usuario
--

ALTER TABLE ONLY public.ordenes_reparacion ALTER COLUMN "idTecnico" SET DEFAULT nextval('public."ordenes_reparacion_idTecnico_seq"'::regclass);


--
-- Name: tecnicos idTecnico; Type: DEFAULT; Schema: public; Owner: usuario
--

ALTER TABLE ONLY public.tecnicos ALTER COLUMN "idTecnico" SET DEFAULT nextval('public."tecnicos_idTecnico_seq"'::regclass);


--
-- Data for Name: disp_disponibles; Type: TABLE DATA; Schema: public; Owner: usuario
--



--
-- Data for Name: estado_reparacion; Type: TABLE DATA; Schema: public; Owner: usuario
--



--
-- Data for Name: listado_tiendas; Type: TABLE DATA; Schema: public; Owner: usuario
--



--
-- Data for Name: ordenes_reparacion; Type: TABLE DATA; Schema: public; Owner: usuario
--



--
-- Data for Name: tecnicos; Type: TABLE DATA; Schema: public; Owner: usuario
--



--
-- Name: disp_disponibles_idDispositivo_seq; Type: SEQUENCE SET; Schema: public; Owner: usuario
--

SELECT pg_catalog.setval('public."disp_disponibles_idDispositivo_seq"', 1, false);


--
-- Name: estado_reparacion_idEStadoReparacion_seq; Type: SEQUENCE SET; Schema: public; Owner: usuario
--

SELECT pg_catalog.setval('public."estado_reparacion_idEStadoReparacion_seq"', 1, false);


--
-- Name: estado_reparacion_idOrdenReparacion_seq; Type: SEQUENCE SET; Schema: public; Owner: usuario
--

SELECT pg_catalog.setval('public."estado_reparacion_idOrdenReparacion_seq"', 1, false);


--
-- Name: listado_tiendas_idTienda_seq; Type: SEQUENCE SET; Schema: public; Owner: usuario
--

SELECT pg_catalog.setval('public."listado_tiendas_idTienda_seq"', 1, false);


--
-- Name: ordenes_reparacion_idOrdenReparacion_seq; Type: SEQUENCE SET; Schema: public; Owner: usuario
--

SELECT pg_catalog.setval('public."ordenes_reparacion_idOrdenReparacion_seq"', 1, false);


--
-- Name: ordenes_reparacion_idTecnico_seq; Type: SEQUENCE SET; Schema: public; Owner: usuario
--

SELECT pg_catalog.setval('public."ordenes_reparacion_idTecnico_seq"', 1, false);


--
-- Name: tecnicos_idTecnico_seq; Type: SEQUENCE SET; Schema: public; Owner: usuario
--

SELECT pg_catalog.setval('public."tecnicos_idTecnico_seq"', 1, false);


--
-- Name: disp_disponibles disp_disponibles_pkey; Type: CONSTRAINT; Schema: public; Owner: usuario
--

ALTER TABLE ONLY public.disp_disponibles
    ADD CONSTRAINT disp_disponibles_pkey PRIMARY KEY ("idDispositivo");


--
-- Name: estado_reparacion estado_reparacion_pkey; Type: CONSTRAINT; Schema: public; Owner: usuario
--

ALTER TABLE ONLY public.estado_reparacion
    ADD CONSTRAINT estado_reparacion_pkey PRIMARY KEY ("idEStadoReparacion");


--
-- Name: listado_tiendas listado_tiendas_pkey; Type: CONSTRAINT; Schema: public; Owner: usuario
--

ALTER TABLE ONLY public.listado_tiendas
    ADD CONSTRAINT listado_tiendas_pkey PRIMARY KEY ("idTienda");


--
-- Name: ordenes_reparacion ordenes_reparacion_pkey; Type: CONSTRAINT; Schema: public; Owner: usuario
--

ALTER TABLE ONLY public.ordenes_reparacion
    ADD CONSTRAINT ordenes_reparacion_pkey PRIMARY KEY ("idOrdenReparacion");


--
-- Name: tecnicos tecnicos_pkey; Type: CONSTRAINT; Schema: public; Owner: usuario
--

ALTER TABLE ONLY public.tecnicos
    ADD CONSTRAINT tecnicos_pkey PRIMARY KEY ("idTecnico");


--
-- PostgreSQL database dump complete
--

